#include <cassert>

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

extern "C"
{
#include "srtm.h"
#include "cvis_wang.h"
#include "visibility.h"
}

#include "ge.h"
#include "Disk.h"
#include "State.h"


State::State(int n, int *ii, int *jj, bool *pcom)
{
    num_viewpoints = n;

    for (int k = 0; k < num_viewpoints; ++k)
    {
        pi[k] = ii[k];
        pj[k] = jj[k];
        pcommunicating[k] = pcom != NULL ? pcom[k] : true;
    }
}


void State::print(const char *prefix)
{
    printf("%s ", prefix);

    for (int k = 0; k < num_viewpoints; ++k)
    {
        if (k > 0) printf(" ");
        printf("(%d,%d)", pi[k], pj[k]);
    }

    printf("\n");
}


void State::delete_viewpoint(int k)
{
    assert(num_viewpoints > 0);

    // Delete viewpoint k by moving the last viewpoint over it.
    pi[k] = pi[num_viewpoints - 1];
    pj[k] = pj[num_viewpoints - 1];

    --num_viewpoints;
}


//  Move one viewpoint of the State, and return the new State.
//
//  You can specify a specific viewpoint k or to let the algorithm select
//  a random viewpoint.
//
//  The new viewpoint will conform to several constraints:  jump no more
//  than the maximum jump distance, stay within a specified exploration
//  disk, and stay within the boundaries of the visibility map.
//
//  The method returns an updated State object.
//
State sa_rand_next_state
(
    State       S,                      // Current state
    int         sensor_radius_max,      // TODO (unused)
    int         jump_radius_max,        // viewpt max random jump distance
    Disk        exploration_region,     // new viewpoint stays inside here
    CVIS_WANG  *v,                      // visibility data
    bool        force_viewpoint,        // Move viewpoint give by forced_k.
    int         forced_k                // Use if force_viewpoint = true.
)
{
    int k, di, dj;
    int new_pi, new_pj;
    bool jumped_too_far;
    bool explored_too_far;

    if (force_viewpoint)
    {
        k = forced_k;
    }
    else
    {
        // Select a random viewpoint.
        k = ge_rand_uniform_int(0, S.num_viewpoints - 1);
    }

    do
    {
        // Move the selected viewpoint up to jump_radius_max pixels:

        // Move up to jump_radius_max pixels in i and j directions.
        // This approach ensures a uniform distribution of next
        // locations.
        di  = ge_rand_uniform_int(0, jump_radius_max) *
              (2 * ge_rand_uniform_int(0, 1) - 1);
        dj  = ge_rand_uniform_int(0, jump_radius_max) *
              (2 * ge_rand_uniform_int(0, 1) - 1);

        new_pi = S.pi[k] + di;
        new_pj = S.pj[k] + dj;

        // Compute useful distances.  (Square the distance to avoid calling
        // sqrt() in range comparisons.)
        int jump_distance_squared = di * di + dj * dj;

        jumped_too_far =
            jump_distance_squared > jump_radius_max * jump_radius_max;

        explored_too_far = !exploration_region.pt_is_inside(new_pi, new_pj);

        // Step 2: Reject moves that jump too far or that explore too far.
    } while (jumped_too_far || explored_too_far);

    S.pi[k] = new_pi;
    S.pj[k] = new_pj;

    // Fix out-of-range
    if (S.pi[k] > v->i_max) S.pi[k] = v->i_max;
    if (S.pi[k] < v->i_min) S.pi[k] = v->i_min;
    if (S.pj[k] > v->j_max) S.pj[k] = v->j_max;
    if (S.pj[k] < v->j_min) S.pj[k] = v->j_min;

    // TODO
    // move cluster of node pairs which are separated
    // by 2 * sensor_radius_max + d

    // TODO
    // teleportation of a node

    return S;
}


