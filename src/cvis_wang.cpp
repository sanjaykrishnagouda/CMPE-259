/**************************************************************************

File:           cvis_wang.cpp

Description:    This file defines routines that create, compute, and free
                terrain-visibility data.

Global Functions:

                cvis_wang_malloc()
                cvis_wang_count()
                cvis_wang_malloc_count()
                cvis_wang_free()

Reference:      This file's algorithm is found in the following paper.
                This program's variable names are inspired by the paper's
                equations.

                @article{Wang:2000a,
                author = {Jianjun Wang and Gary J. Robinson and Kevin White},
                title = {Generating Viewsheds without Using Sightlines},
                journal = {Photogrammetric Engineering \& Remote Sensing},
                year = {2000},
                volume = {66},
                number = {1},
                pages = {87--90},
                month = {January}
                }

**************************************************************************/

extern "C"
{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "srtm.h"
#include "cvis_wang.h"
}

#define max(a, b)     ((a) > (b) ? (a) : (b))

#if 0
#define TRACE(FILE, LINE) \
{printf("%s(%d)\n", FILE, LINE); fflush(stdout);}

#define TRACE_sd(FILE, LINE, STRING, INTEGER) \
{printf("%s(%d) %s%d\n", FILE, LINE, STRING, INTEGER); fflush(stdout);}

#define TRACE_sp(FILE, LINE, STRING, POINTER) \
{printf("%s(%d) %s%p\n", FILE, LINE, STRING, POINTER); fflush(stdout);}
#else
#define TRACE(FILE, LINE)
#define TRACE_sd(FILE, LINE, STRING, INTEGER)
#define TRACE_sp(FILE, LINE, STRING, POINTER)
#endif


// Octants:
//
//           \  3 | 2  /
//             \  |  /
//           4   \|/   1
//           -----------
//           5   /|\   8
//             /  |  \
//           /  6 | 7  \
//
extern "C" void cvis_wang_malloc
(
    CVIS_WANG **pv,     // pointer to cache of visibility struct
    int      ***pz,     // pointer to cache of heights (yes, *** is correct)
    SRTM_TILE  *srtm,
    int         num_viewpoints,
    int        *pii,    // pointer to viewpoints' horizontal pixel coordinates
    int        *pjj,    // pointer to viewpoints' vertical pixel coordinates
    bool       *pactive,    // array of bools, true if viewpoint is active
    int         radius_max, // maximum radius limited view
    int         viewpoint_height_above_terrain
)
{
    int         a;
    int         b;
    int         base_elevation;
    int         di;
    int         dj;
    int16_t   **h;
    int         i;
    int         ii;
    int         j;
    int         jj;
    CVIS_WANG  *v;
    int         viewpoint;
    char      **visible;
    int       **z;

    int         radius_max_squared = radius_max * radius_max;

    // Allocate the caches, if necessary, and then clear them.
    if (*pv == NULL)
    {
        *pv = (CVIS_WANG *) calloc(sizeof(**pv), 1);
    }
    
    v = *pv;
    v->origin_lon_deg   = srtm->origin_lon_deg;
    v->origin_lat_deg   = srtm->origin_lat_deg;
    v->i_min            = srtm->i_min;
    v->i_max            = srtm->i_max;
    v->j_min            = srtm->j_min;
    v->j_max            = srtm->j_max;

    visible = v->visible;
    h       = srtm->h;

    for (i = 0; i <= MAX_INDEX; ++i)
    {
        if (visible[i] == NULL) 
        {
            visible[i] = (char *) calloc(sizeof(visible[i][0]), MAX_INDEX + 1);
        }
        else
        {
            // Try to clear the cache values as quickly as possible.
            // This operation is a large part of execution time.
            memset(visible[i], 0, sizeof(visible[i][0]) * (MAX_INDEX + 1));
        }
    }


    if (*pz == NULL)
    {
        *pz = (int **) malloc((MAX_INDEX + 1) * sizeof(z[0]));
    }

    z = *pz;

    for (i = 0; i <= MAX_INDEX; ++i)
    {
        if (z[i] == NULL)
        {
            z[i] = (int *) calloc(sizeof(z[i][0]), MAX_INDEX + 1);
        }
        else
        {
            // Try to clear the cache values as quickly as possible.
            // This operation is a large part of execution time.
            memset(z[i], 0, sizeof(z[i][0]) * (MAX_INDEX + 1));
        }
    }


    for (viewpoint = 0; viewpoint < num_viewpoints; ++viewpoint)
    {
        if (pactive[viewpoint])
        {
            ii = pii[viewpoint];
            jj = pjj[viewpoint];

            // Viewpoints may be suspended above terrain.
            // Kludge: just edit the DEM here and correct it at the end.
            h[ii][jj] += viewpoint_height_above_terrain;

            base_elevation = h[ii][jj];

            // Count the first points.
            for (i = ii - 1; i <= ii + 1; ++i)
            {
                for (j = jj - 1; j <= jj + 1; ++j)
                {
                    if (0 <= i && i <= MAX_INDEX &&
                        0 <= j && j <= MAX_INDEX)
                    {
                        z[i][j]         = h[i][j] - base_elevation;
                        visible[i][j]   = 1;
                    }
                }
            }


#define OCTANT 1
#include "cvis_wang.i"
#undef OCTANT

#define OCTANT 2
#include "cvis_wang.i"
#undef OCTANT

#define OCTANT 3
#include "cvis_wang.i"
#undef OCTANT

#define OCTANT 4
#include "cvis_wang.i"
#undef OCTANT

#define OCTANT 5
#include "cvis_wang.i"
#undef OCTANT

#define OCTANT 6
#include "cvis_wang.i"
#undef OCTANT

#define OCTANT 7
#include "cvis_wang.i"
#undef OCTANT

#define OCTANT 8
#include "cvis_wang.i"
#undef OCTANT

            // Correct for viewpoint-height kludge above.
            h[ii][jj] -= viewpoint_height_above_terrain;
        }
    }
}


extern "C" int cvis_wang_count
(
    CVIS_WANG **pv
)
{
    int         i;
    int         j;
    CVIS_WANG  *v;

    int         n = 0;

    v = *pv;

    // Count the number of visible pixels.
    for (j = v->j_min; j <= v->j_max; ++j)
    {
        for (i = v->i_min; i <= v->i_max; ++i)
        {
            if ((*pv)->visible[i][j] > 0) ++n;
        }
    }

    return n;
}


extern "C" int cvis_wang_malloc_count
(
    CVIS_WANG **pv,
    int      ***pz,
    SRTM_TILE  *srtm,
    int         num_viewpoints,
    int        *pii,
    int        *pjj,
    bool       *pactive,    // array of bools, true if viewpoint is active
    int         radius_max,
    int         viewpoint_height_above_terrain
)
{
    cvis_wang_malloc(pv, pz, srtm,
                     num_viewpoints, pii, pjj, pactive,
                     radius_max, viewpoint_height_above_terrain);
    return cvis_wang_count(pv);
}


extern "C" void cvis_wang_free
(
    CVIS_WANG **pv,
    int      ***pz
)
{
    int i;

    if (pv != NULL && *pv != NULL)
    {
        for (i = 0; i <= MAX_INDEX; ++i)
        {
            if ((*pv)->visible[i] != NULL) free((*pv)->visible[i]);
        }

        free(*pv);
        *pv = NULL;
    }

    if (pz != NULL && *pz != NULL)
    {
        for (i = 0; i <= MAX_INDEX; ++i)
        {
            if ((*pz)[i] != NULL) free((*pz)[i]);
        }

        free(*pz);
        *pz = NULL;
    }
}


