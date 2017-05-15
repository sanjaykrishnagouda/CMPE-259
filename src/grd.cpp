#include <math.h>
#include <stdio.h>

extern "C"
{
#include "srtm.h"
#include "cvis_wang.h"
#include "bmp.h"
#include "visibility.h"
}


// Iteratively move each viewpoint to the best location in a 5x5 region of
// pixels surrounding its current location.
//
// Returns:         true    if one or more viewpoints moved
//                  false   if all viewpoints are at local minima
//
bool grd_nudge_simultaneously
(
    int     num_viewpoints,
    int    *pi,
    int    *pj,
    bool   *pactive,
    int     radius_max,
    int     viewpoint_height_above_terrain,
    int     window_left_edge,
    int     window_right_edge,
    int     window_bottom_edge,
    int     window_top_edge
)
{
    int     di;
    int     dj;
    int     k;
    int     n;
    int     n_best;
    int     pi_best[MAX_NUM_VIEWPOINTS];
    int     pj_best[MAX_NUM_VIEWPOINTS];

    bool    was_improved = false;


    for (k = 0; k < num_viewpoints; ++k)
    {
        // Determine the best new location for each viewpoint.

        // Start with viewpoint k's current location.
        n = cvis_wang_malloc_count(&v, &z, srtm,
                                   num_viewpoints,
                                   pi,
                                   pj,
                                   pactive,
                                   radius_max,
                                   viewpoint_height_above_terrain);

        pi_best[k]  = pi[k];
        pj_best[k]  = pj[k];
        n_best      = n;

        for (di = -2; di <= 2; ++di)
        {
            for (dj = -2; dj <= 2; ++dj)
            {
                // Compute N(di,dj).
                
                // Temporarily nudge viewpoint k in direction di, dj.
                pi[k] += di;
                pj[k] += dj;

                if (window_left_edge   <= pi[k] && pi[k] <= window_right_edge
                    &&
                    window_bottom_edge <= pj[k] && pj[k] <= window_top_edge)
                {
                    // Compute resulting N(di,dj).
                    n = cvis_wang_malloc_count(&v, &z, srtm,
                                               num_viewpoints,
                                               pi,
                                               pj,
                                               pactive,
                                               radius_max,
                                               viewpoint_height_above_terrain);

                    if (n > n_best)
                    {
                        was_improved = true;

                        // Save the best new location for viewpoint k.
                        pi_best[k]  = pi[k];
                        pj_best[k]  = pj[k];
                        n_best      = n;
                    }
                }

                // Restore viewpoint k.
                pi[k] -= di;
                pj[k] -= dj;
            }
        }
    }

    // Update all locations to those that made the best improvement
    // in the objective function.
    for (k = 0; k < num_viewpoints; ++k)
    {
        pi[k] = pi_best[k];
        pj[k] = pj_best[k];
    }

    return was_improved;
}


//*****************************************************************************

bool grd_pattern_search
(
    int     num_viewpoints,
    int    *pk,
    int    *pi,
    int    *pj,
    bool   *pactive,
    int     radius_max,
    int     viewpoint_height_above_terrain,
    int    *pdelta,
    int    *pdirection,
    int     window_left_edge,
    int     window_right_edge,
    int     window_bottom_edge,
    int     window_top_edge
)

//  Purpose:    Perform a basic pattern search.
//
//              Note:  Global variables srtm and v are consistent with
//                     the viewpoint positions in pi and pj upon return.
//
//  Returns:    true on convergence, false otherwise.
//
//*****************************************************************************

{
    int     di;
    int     dj;
    int     m;
    int     n;
    int     n0;

    n0 = cvis_wang_malloc_count(&v, &z, srtm,
                                num_viewpoints,
                                pi,
                                pj,
                                pactive,
                                radius_max,
                                viewpoint_height_above_terrain);

    do
    {
        // Check points that are +/- delta in each coordinate direction.
        // (That's four different directions.)
        for (m = 0; m < 4 * num_viewpoints; ++m)
        {
//printf("pattern: delta=%d, k=%d, direction=%d\n", *pdelta, *pk, *pdirection);

            switch (*pdirection)
            {
                case 0: di =  *pdelta; dj =  0;       break;
                case 1: di = -*pdelta; dj =  0;       break;
                case 2: di =  0;       dj =  *pdelta; break;
                case 3: di =  0;       dj = -*pdelta; break;
            }

            // Temporarily nudge viewpoint k in direction di, dj.
            pi[*pk] += di;
            pj[*pk] += dj;

            if (window_left_edge   <= pi[*pk] && pi[*pk] <= window_right_edge
                &&
                window_bottom_edge <= pj[*pk] && pj[*pk] <= window_top_edge)
            {
                // Compute resulting N(di,dj).
                n = cvis_wang_malloc_count(&v, &z, srtm,
                                           num_viewpoints,
                                           pi,
                                           pj,
                                           pactive,
                                           radius_max,
                                           viewpoint_height_above_terrain);

                if (n > n0)
                {
                    // The objective function improved.  Keep the new coordinate
                    // for viewpoint k, and report that the system has not yet
                    // converged.
                    return false;
                }

                // No improvement.
            }

            // Restore viewpoint k, and select the next axis to bump.
            pi[*pk] -= di;
            pj[*pk] -= dj;

            if (++*pdirection >= 4)
            {
                *pdirection = 0;

                if (++*pk >= num_viewpoints)
                {
                    *pk = 0;
                }
            }
        }

        *pdelta /= 2;
//printf("pattern: delta=%d\n", *pdelta);
    } while (*pdelta != 0);

//printf("pattern: true\n");

    // Make srtm and v consistent with the current viewpoints.
    n = cvis_wang_malloc_count(&v, &z, srtm, num_viewpoints, pi, pj, pactive,
                               radius_max,
                               viewpoint_height_above_terrain);

    // Report that the system has converged!
    return true;
}


int grd_nudge_sequentially
(
    int     num_viewpoints,
    int     k,
    int    *pi,
    int    *pj,
    bool   *pactive,
    int     radius_max,
    int     viewpoint_height_above_terrain,
    int     window_left_edge,
    int     window_right_edge,
    int     window_bottom_edge,
    int     window_top_edge
)
{
    int     di;
    int     dj;
    int     n;
    int     n0;
    int     n_best;
    int     pi_best[MAX_NUM_VIEWPOINTS];
    int     pj_best[MAX_NUM_VIEWPOINTS];
    int     was_improved;


    // Move viewpoint k by determining its gradient
    // and then nudging it in that direction.

    // Start with viewpoint k's current location.
    n0 = cvis_wang_malloc_count(&v, &z, srtm,
                                num_viewpoints,
                                pi,
                                pj,
                                pactive,
                                radius_max,
                                viewpoint_height_above_terrain);

    pi_best[k]  = pi[k];
    pj_best[k]  = pj[k];
    n_best      = n0;

    for (di = -2; di <= 2; ++di)
    {
        for (dj = -2; dj <= 2; ++dj)
        {
            // Compute N(di,dj).
            
            // Temporarily nudge viewpoint k in direction di, dj.
            pi[k] += di;
            pj[k] += dj;

            if (window_left_edge   <= pi[k] && pi[k] <= window_right_edge
                &&
                window_bottom_edge <= pj[k] && pj[k] <= window_top_edge)
            {
                // Compute resulting N(di,dj).
                n = cvis_wang_malloc_count(&v, &z, srtm,
                                           num_viewpoints,
                                           pi,
                                           pj,
                                           pactive,
                                           radius_max,
                                           viewpoint_height_above_terrain);

                if (n > n_best)
                {
                    // Save the best new location for viewpoint k.
                    pi_best[k]  = pi[k];
                    pj_best[k]  = pj[k];
                    n_best      = n;
                }
            }

            // Restore viewpoint k.
            pi[k] -= di;
            pj[k] -= dj;
        }
    }

    was_improved = (n_best > n0);

    if (was_improved)
    {
        pi[k] = pi_best[k];
        pj[k] = pj_best[k];
    }

    return was_improved;
}


int grd_ascend_sequentially
(
    int     num_viewpoints,
    int     k,
    int    *pi,
    int    *pj,
    bool   *pactive,
    int     radius_max,
    int     viewpoint_height_above_terrain,
    int     window_left_edge,
    int     window_right_edge,
    int     window_bottom_edge,
    int     window_top_edge
)
{
    double  a;
    double  b;
    int     di;
    int     dj;
    int     n;
    int     was_improved;


    // Move viewpoint k by determining its gradient
    // and then moving it in that direction.

    // Compute gradient vector (a, b).
    //
    // The least-squares-fit plane of the 5x5 grid of data points centered
    // on a central viewpoint can be shown to be defined by z = ax + by + c,
    // where
    //
    //    a = sum(x_i * z_i) / 50
    //    b = sum(y_i * z_i) / 50
    //    c = sum(z_i) / 25
    //
    // with x_i in (-2, -1, 0, 1, 2) and y_i in (-2, -1, 0, 1, 2).  Then
    // (a, b) is the gradient of the plane.

    // Prepare to compute the gradient.
    a = 0.0;
    b = 0.0;

    printf("n =");

    for (di = -2; di <= 2; ++di)
    {
        for (dj = -2; dj <= 2; ++dj)
        {
            // Compute N(di,dj).
            
            // Temporarily nudge viewpoint k in direction di, dj.
            pi[k] += di;
            pj[k] += dj;

            if (window_left_edge   <= pi[k] && pi[k] <= window_right_edge
                &&
                window_bottom_edge <= pj[k] && pj[k] <= window_top_edge)
            {
                // Compute resulting N(di,dj).
                n = cvis_wang_malloc_count(&v, &z, srtm,
                                           num_viewpoints,
                                           pi,
                                           pj,
                                           pactive,
                                           radius_max,
                                           viewpoint_height_above_terrain);

                printf(" %d", n);

                a += di * n;
                b += dj * n;
            }

            // Restore viewpoint k.
            pi[k] -= di;
            pj[k] -= dj;
        }
    }

    a = round(a / 50.0);
    b = round(b / 50.0);

    printf(" a=%.1f, b=%.1f\n", a, b);

    was_improved = false;

    if (a >  0.01) { pi[k] +=  1; was_improved = true; }
    if (a < -0.01) { pi[k] += -1; was_improved = true; }
    if (b >  0.01) { pj[k] +=  1; was_improved = true; }
    if (b < -0.01) { pj[k] += -1; was_improved = true; }

    return was_improved;
}


/*
 *  Purpose:    Evolve the positions of several viewpoints by gradient ascent,
 *              choosing paths that maximize the total number of map locations
 *              that are visible to any of the viewpoints.
 *
 *  ...
 *
 *  Returns:    Nothing.
 */
extern "C" int grd_ascend
(
    int     num_viewpoints,
    int    *viewpoint_initial_i,
    int    *viewpoint_initial_j,
    int     radius_max,
    int     viewpoint_height_above_terrain,
    int     iterations_max,
    const char *filename,
    int     movement_method,
    int     delta,
    const char *bmp_sequence_basename,
    int     window_left_edge,
    int     window_right_edge,
    int     window_bottom_edge,
    int     window_top_edge
)
{
    int     di;
    int     dj;
    char    file_name_bmp[30];
    int     in_local_minimum;
    int     k;
    int     n;
    int     n_best;
    int     n0;
    int     pi[MAX_NUM_VIEWPOINTS];
    int     pj[MAX_NUM_VIEWPOINTS];
    bool    pactive[MAX_NUM_VIEWPOINTS];
    int     pi_best[MAX_NUM_VIEWPOINTS];
    int     pj_best[MAX_NUM_VIEWPOINTS];

    bool    converged   = false;
    int     direction   = 0;
    int     t           = 0;
    int     vp          = 0;

    // Initailize viewpoint locations pi[] and pj[].
    for (k = 0; k < num_viewpoints; ++k)
    {
        pi[k] = viewpoint_initial_i[k];
        pj[k] = viewpoint_initial_j[k];
        pactive[k] = true;
    }

    // Initialize v for printing initial bitmap.
    cvis_wang_malloc_count(&v, &z, srtm,
                           num_viewpoints, pi, pj, pactive,
                           radius_max,
                           viewpoint_height_above_terrain);

    // Update locations pi[], pj[] as they follow the
    // gradient of the objective function.

    // N + 1/2 loop
    for (;;)
    {
        // Print the viewpoint locations.
//        printf("t = %2d", t);

//        for (k = 0; k < num_viewpoints; ++k)
//        {
//            printf(" %4d %4d", pi[k], pj[k]);
//        }

//        printf("\n");


        // TODO create a sequence of unique file names
//        sprintf(file_name_bmp, "filename_%05d.bmp", t);
//        bmp_srtm_v_write(srtm, v->visible,
//                         file_name_bmp, num_viewpoints, pi, pj);


        if (t++ >= iterations_max || converged) break;


        switch (movement_method)
        {
            case 1:
                printf("t = %d\n", t);

                converged = !grd_nudge_simultaneously(num_viewpoints,
                    pi, pj, pactive, radius_max,
                    viewpoint_height_above_terrain,
                    window_left_edge,
                    window_right_edge,
                    window_bottom_edge,
                    window_top_edge);
                break;

            case 2:
                in_local_minimum = !grd_nudge_sequentially(num_viewpoints, vp,
                    pi, pj, pactive, radius_max,
                    viewpoint_height_above_terrain,
                    window_left_edge,
                    window_right_edge,
                    window_bottom_edge,
                    window_top_edge);

                if (in_local_minimum)
                {
                    vp = (vp + 1) % num_viewpoints;
                }
                break;

            case 3:
                in_local_minimum = !grd_ascend_sequentially(num_viewpoints, vp,
                    pi, pj, pactive, radius_max,
                    viewpoint_height_above_terrain,
                    window_left_edge,
                    window_right_edge,
                    window_bottom_edge,
                    window_top_edge);

                vp = (vp + 1) % num_viewpoints;
                break;

            case 4:
                converged = grd_pattern_search(num_viewpoints, &vp, pi, pj,
                                               pactive,
                                               radius_max,
                                               viewpoint_height_above_terrain,
                                               &delta, &direction,
                                               window_left_edge,
                                               window_right_edge,
                                               window_bottom_edge,
                                               window_top_edge);
                break;
        }
    }

    // pi[] and pj[] contain the final viewpoint locations.
    // Send the data back to the calling function.
    for (k = 0; k < num_viewpoints; ++k)
    {
        viewpoint_initial_i[k] = pi[k];
        viewpoint_initial_j[k] = pj[k];
    }

    return cvis_wang_count(&v);
}

