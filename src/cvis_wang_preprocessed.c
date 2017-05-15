

// -------------------------------------------------------------------------
//
// File:        cvis_wang.c
//
// Purpose:     This file defines routines that create and free
//              terrain-visibility data.
//
// Reference:   This file's algorithm is found in the following paper.
//              This program's variable names are inspired by the paper's
//              equations.
//
//              @article{Wang:2000a,
//                author = {Jianjun Wang and Gary J. Robinson and Kevin White},
//                title = {Generating Viewsheds without Using Sightlines},
//                journal = {Photogrammetric Engineering \& Remote Sensing},
//                year = {2000},
//                volume = {66},
//                number = {1},
//                pages = {87--90},
//                month = {January}
//              }
//
// -------------------------------------------------------------------------


// Special //// comments let us use the GCC preprocessor without including
// files.  The makefile removes the comments using sed before compilation.
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "srtm.h"
#include "cvis_wang.h"

#define max(a, b)     ((a) > (b) ? (a) : (b))
#define min(a, b)     ((a) < (b) ? (a) : (b))

#if 0
#define TRACE(FILE, LINE) ////{printf("%s(%d)\n", FILE, LINE); fflush(stdout);}


#define TRACE_sd(FILE, LINE, STRING, INTEGER) ////{printf("%s(%d) %s%d\n", FILE, LINE, STRING, INTEGER); fflush(stdout);}


#define TRACE_sp(FILE, LINE, STRING, POINTER) ////{printf("%s(%d) %s%p\n", FILE, LINE, STRING, POINTER); fflush(stdout);}

#else
#define TRACE(FILE, LINE)
#define TRACE_sd(FILE, LINE, STRING, INTEGER)
#define TRACE_sp(FILE, LINE, STRING, POINTER)
#endif


// Octants:
//
//           \  3 | 2  /      |
//             \  |  /        |
//           4   \|/   1      |
//           -----------      |
//           5   /|\   8      |
//             /  |  \        |
//           /  6 | 7  \      |
//
void cvis_wang_malloc
(
    CVIS_WANG **pv, // pointer to cache of visibility struct
    int ***pz, // pointer to cache of heights (yes, *** is correct)
    SRTM_TILE *srtm,
    int ii, // viewpoint's horizontal pixel
    int jj, // viewpoint's vertical pixel
    int h_max,
    int radius_max // maximum radius limited view
)
{
    int a;
    int b;
    int base_elevation;
    int di;
    int dj;
    int16_t **h;
    int i;
    int j;
    CVIS_WANG *v;
    char **visible;
    int **z;

    int radius_max_squared = radius_max * radius_max;
    int max_index = srtm->max_index;

    // If necessary, allocate the caches.
    if (*pz == NULL)
    {
        z = malloc((max_index + 1) * sizeof(z[0]));

        for (i = 0; i <= max_index; ++i)
        {
            z[i] = malloc((max_index + 1) * sizeof(z[i][0]));
        }

        *pz = z;
    }

    if (*pv == NULL)
    {
        v = malloc(offsetof(CVIS_WANG, visible) +
                   ((max_index + 1) * sizeof(v->visible[0])));

        for (i = 0; i <= max_index; ++i)
        {
            v->visible[i] = malloc((max_index + 1) * sizeof(v->visible[i][0]));
        }

        v->max_index = max_index;

        *pv = v;
    }

    // Use the caches.
    v = *pv;
    z = *pz;
    h = srtm->h;
    visible = v->visible;
    base_elevation = h[ii][jj];

    // Record the origin.
    v->origin_lon_deg = srtm->origin_lon_deg;
    v->origin_lat_deg = srtm->origin_lat_deg;

    // first points
    for (i = ii - 1; i <= ii + 1; ++i)
    {
        for (j = jj - 1; j <= jj + 1; ++j)
        {
            if (0 <= i && i <= max_index &&
                0 <= j && j <= max_index)
            {
                z[i][j] = h[i][j] - base_elevation;
                visible[i][j] = 1;
            }
        }
    }

// OCTANT 1
// -------------------------------------------------------------------------
// File:        cvis_wang.i
// -------------------------------------------------------------------------
    for (i = ii + 2 * +1, di = 2;
         (i <= max_index && i <= ii + radius_max);
         i = i + +1, ++di)
    {
        // First point is along horizontal ray where j = jj.
        // Ignore Zp1 because it references into adjacent octant.
        j = jj;
        a = (h[i][j] - base_elevation);
        b = di * z[i - +1][j] / (di - 1);
        z[i][j] = min(max(a, b), h_max);
        visible[i][j] = (a >= b && ((ii - i) * (ii - i) + (jj - j) * (jj - j)) <= radius_max_squared);
        // Interior of octant
        for (j = jj + +1, dj = 1;
             dj < di && (j <= max_index && j <= jj + radius_max);
             j = j + +1, ++dj)
        {
            a = (h[i][j] - base_elevation);
            b = (dj * z[i - +1][j - +1] + (di - dj) * z[i - +1][j]) / (di - 1);
            z[i][j] = min(max(a, b), h_max);
            visible[i][j] = (a >= b && ((ii - i) * (ii - i) + (jj - j) * (jj - j)) <= radius_max_squared);
        }
        // Point along diagonal ray?
        if (dj == di && (j <= max_index && j <= jj + radius_max))
        {
            // Ignore Zp2 because it references adjacent octant.
            a = (h[i][j] - base_elevation);
            b = dj * z[i - +1][j - +1] / (di - 1);
            z[i][j] = min(max(a, b), h_max);
            visible[i][j] = (a >= b && ((ii - i) * (ii - i) + (jj - j) * (jj - j)) <= radius_max_squared);
        }
    }
// OCTANT 2
// -------------------------------------------------------------------------
// File:        cvis_wang.i
// -------------------------------------------------------------------------
    for (j = jj + 2 * +1, dj = 2;
         (j <= max_index && j <= jj + radius_max);
         j = j + +1, ++dj)
    {
        // First point si along vertical ray where i = ii.
        // Ignore Zp1 because it references into adjacent octant.
        i = ii;
        a = (h[i][j] - base_elevation);
        b = dj * z[i][j - +1] / (dj - 1);
        z[i][j] = min(max(a, b), h_max);
        visible[i][j] = (a >= b && ((ii - i) * (ii - i) + (jj - j) * (jj - j)) <= radius_max_squared);
        // Interior of octant
        for (i = ii + +1, di = 1;
             di < dj && (i <= max_index && i <= ii + radius_max);
             i = i + +1, ++di)
        {
            a = (h[i][j] - base_elevation);
            b = (di * z[i - +1][j - +1] + (dj - di) * z[i][j - +1]) / (dj - 1);
            z[i][j] = min(max(a, b), h_max);
            visible[i][j] = (a >= b && ((ii - i) * (ii - i) + (jj - j) * (jj - j)) <= radius_max_squared);
        }
        // Point along diagonal ray?
        if (di == dj && (i <= max_index && i <= ii + radius_max))
        {
            // Ignore Zp2 because it references adjacent octant.
            a = (h[i][j] - base_elevation);
            b = di * z[i - +1][j - +1] / (dj - 1);
            z[i][j] = min(max(a, b), h_max);
            visible[i][j] = (a >= b && ((ii - i) * (ii - i) + (jj - j) * (jj - j)) <= radius_max_squared);
        }
    }
// OCTANT 3
// -------------------------------------------------------------------------
// File:        cvis_wang.i
// -------------------------------------------------------------------------
    for (j = jj + 2 * +1, dj = 2;
         (j <= max_index && j <= jj + radius_max);
         j = j + +1, ++dj)
    {
        // First point si along vertical ray where i = ii.
        // Ignore Zp1 because it references into adjacent octant.
        i = ii;
        a = (h[i][j] - base_elevation);
        b = dj * z[i][j - +1] / (dj - 1);
        z[i][j] = min(max(a, b), h_max);
        visible[i][j] = (a >= b && ((ii - i) * (ii - i) + (jj - j) * (jj - j)) <= radius_max_squared);
        // Interior of octant
        for (i = ii + -1, di = 1;
             di < dj && (i >= 0 && i >= ii - radius_max);
             i = i + -1, ++di)
        {
            a = (h[i][j] - base_elevation);
            b = (di * z[i - -1][j - +1] + (dj - di) * z[i][j - +1]) / (dj - 1);
            z[i][j] = min(max(a, b), h_max);
            visible[i][j] = (a >= b && ((ii - i) * (ii - i) + (jj - j) * (jj - j)) <= radius_max_squared);
        }
        // Point along diagonal ray?
        if (di == dj && (i >= 0 && i >= ii - radius_max))
        {
            // Ignore Zp2 because it references adjacent octant.
            a = (h[i][j] - base_elevation);
            b = di * z[i - -1][j - +1] / (dj - 1);
            z[i][j] = min(max(a, b), h_max);
            visible[i][j] = (a >= b && ((ii - i) * (ii - i) + (jj - j) * (jj - j)) <= radius_max_squared);
        }
    }
// OCTANT 4
// -------------------------------------------------------------------------
// File:        cvis_wang.i
// -------------------------------------------------------------------------
    for (i = ii + 2 * -1, di = 2;
         (i >= 0 && i >= ii - radius_max);
         i = i + -1, ++di)
    {
        // First point is along horizontal ray where j = jj.
        // Ignore Zp1 because it references into adjacent octant.
        j = jj;
        a = (h[i][j] - base_elevation);
        b = di * z[i - -1][j] / (di - 1);
        z[i][j] = min(max(a, b), h_max);
        visible[i][j] = (a >= b && ((ii - i) * (ii - i) + (jj - j) * (jj - j)) <= radius_max_squared);
        // Interior of octant
        for (j = jj + +1, dj = 1;
             dj < di && (j <= max_index && j <= jj + radius_max);
             j = j + +1, ++dj)
        {
            a = (h[i][j] - base_elevation);
            b = (dj * z[i - -1][j - +1] + (di - dj) * z[i - -1][j]) / (di - 1);
            z[i][j] = min(max(a, b), h_max);
            visible[i][j] = (a >= b && ((ii - i) * (ii - i) + (jj - j) * (jj - j)) <= radius_max_squared);
        }
        // Point along diagonal ray?
        if (dj == di && (j <= max_index && j <= jj + radius_max))
        {
            // Ignore Zp2 because it references adjacent octant.
            a = (h[i][j] - base_elevation);
            b = dj * z[i - -1][j - +1] / (di - 1);
            z[i][j] = min(max(a, b), h_max);
            visible[i][j] = (a >= b && ((ii - i) * (ii - i) + (jj - j) * (jj - j)) <= radius_max_squared);
        }
    }
// OCTANT 5
// -------------------------------------------------------------------------
// File:        cvis_wang.i
// -------------------------------------------------------------------------
    for (i = ii + 2 * -1, di = 2;
         (i >= 0 && i >= ii - radius_max);
         i = i + -1, ++di)
    {
        // First point is along horizontal ray where j = jj.
        // Ignore Zp1 because it references into adjacent octant.
        j = jj;
        a = (h[i][j] - base_elevation);
        b = di * z[i - -1][j] / (di - 1);
        z[i][j] = min(max(a, b), h_max);
        visible[i][j] = (a >= b && ((ii - i) * (ii - i) + (jj - j) * (jj - j)) <= radius_max_squared);
        // Interior of octant
        for (j = jj + -1, dj = 1;
             dj < di && (j >= 0 && j >= jj - radius_max);
             j = j + -1, ++dj)
        {
            a = (h[i][j] - base_elevation);
            b = (dj * z[i - -1][j - -1] + (di - dj) * z[i - -1][j]) / (di - 1);
            z[i][j] = min(max(a, b), h_max);
            visible[i][j] = (a >= b && ((ii - i) * (ii - i) + (jj - j) * (jj - j)) <= radius_max_squared);
        }
        // Point along diagonal ray?
        if (dj == di && (j >= 0 && j >= jj - radius_max))
        {
            // Ignore Zp2 because it references adjacent octant.
            a = (h[i][j] - base_elevation);
            b = dj * z[i - -1][j - -1] / (di - 1);
            z[i][j] = min(max(a, b), h_max);
            visible[i][j] = (a >= b && ((ii - i) * (ii - i) + (jj - j) * (jj - j)) <= radius_max_squared);
        }
    }
// OCTANT 6
// -------------------------------------------------------------------------
// File:        cvis_wang.i
// -------------------------------------------------------------------------
    for (j = jj + 2 * -1, dj = 2;
         (j >= 0 && j >= jj - radius_max);
         j = j + -1, ++dj)
    {
        // First point si along vertical ray where i = ii.
        // Ignore Zp1 because it references into adjacent octant.
        i = ii;
        a = (h[i][j] - base_elevation);
        b = dj * z[i][j - -1] / (dj - 1);
        z[i][j] = min(max(a, b), h_max);
        visible[i][j] = (a >= b && ((ii - i) * (ii - i) + (jj - j) * (jj - j)) <= radius_max_squared);
        // Interior of octant
        for (i = ii + -1, di = 1;
             di < dj && (i >= 0 && i >= ii - radius_max);
             i = i + -1, ++di)
        {
            a = (h[i][j] - base_elevation);
            b = (di * z[i - -1][j - -1] + (dj - di) * z[i][j - -1]) / (dj - 1);
            z[i][j] = min(max(a, b), h_max);
            visible[i][j] = (a >= b && ((ii - i) * (ii - i) + (jj - j) * (jj - j)) <= radius_max_squared);
        }
        // Point along diagonal ray?
        if (di == dj && (i >= 0 && i >= ii - radius_max))
        {
            // Ignore Zp2 because it references adjacent octant.
            a = (h[i][j] - base_elevation);
            b = di * z[i - -1][j - -1] / (dj - 1);
            z[i][j] = min(max(a, b), h_max);
            visible[i][j] = (a >= b && ((ii - i) * (ii - i) + (jj - j) * (jj - j)) <= radius_max_squared);
        }
    }
// OCTANT 7
// -------------------------------------------------------------------------
// File:        cvis_wang.i
// -------------------------------------------------------------------------
    for (j = jj + 2 * -1, dj = 2;
         (j >= 0 && j >= jj - radius_max);
         j = j + -1, ++dj)
    {
        // First point si along vertical ray where i = ii.
        // Ignore Zp1 because it references into adjacent octant.
        i = ii;
        a = (h[i][j] - base_elevation);
        b = dj * z[i][j - -1] / (dj - 1);
        z[i][j] = min(max(a, b), h_max);
        visible[i][j] = (a >= b && ((ii - i) * (ii - i) + (jj - j) * (jj - j)) <= radius_max_squared);
        // Interior of octant
        for (i = ii + +1, di = 1;
             di < dj && (i <= max_index && i <= ii + radius_max);
             i = i + +1, ++di)
        {
            a = (h[i][j] - base_elevation);
            b = (di * z[i - +1][j - -1] + (dj - di) * z[i][j - -1]) / (dj - 1);
            z[i][j] = min(max(a, b), h_max);
            visible[i][j] = (a >= b && ((ii - i) * (ii - i) + (jj - j) * (jj - j)) <= radius_max_squared);
        }
        // Point along diagonal ray?
        if (di == dj && (i <= max_index && i <= ii + radius_max))
        {
            // Ignore Zp2 because it references adjacent octant.
            a = (h[i][j] - base_elevation);
            b = di * z[i - +1][j - -1] / (dj - 1);
            z[i][j] = min(max(a, b), h_max);
            visible[i][j] = (a >= b && ((ii - i) * (ii - i) + (jj - j) * (jj - j)) <= radius_max_squared);
        }
    }
// OCTANT 8
// -------------------------------------------------------------------------
// File:        cvis_wang.i
// -------------------------------------------------------------------------
    for (i = ii + 2 * +1, di = 2;
         (i <= max_index && i <= ii + radius_max);
         i = i + +1, ++di)
    {
        // First point is along horizontal ray where j = jj.
        // Ignore Zp1 because it references into adjacent octant.
        j = jj;
        a = (h[i][j] - base_elevation);
        b = di * z[i - +1][j] / (di - 1);
        z[i][j] = min(max(a, b), h_max);
        visible[i][j] = (a >= b && ((ii - i) * (ii - i) + (jj - j) * (jj - j)) <= radius_max_squared);
        // Interior of octant
        for (j = jj + -1, dj = 1;
             dj < di && (j >= 0 && j >= jj - radius_max);
             j = j + -1, ++dj)
        {
            a = (h[i][j] - base_elevation);
            b = (dj * z[i - +1][j - -1] + (di - dj) * z[i - +1][j]) / (di - 1);
            z[i][j] = min(max(a, b), h_max);
            visible[i][j] = (a >= b && ((ii - i) * (ii - i) + (jj - j) * (jj - j)) <= radius_max_squared);
        }
        // Point along diagonal ray?
        if (dj == di && (j >= 0 && j >= jj - radius_max))
        {
            // Ignore Zp2 because it references adjacent octant.
            a = (h[i][j] - base_elevation);
            b = dj * z[i - +1][j - -1] / (di - 1);
            z[i][j] = min(max(a, b), h_max);
            visible[i][j] = (a >= b && ((ii - i) * (ii - i) + (jj - j) * (jj - j)) <= radius_max_squared);
        }
    }
}
void cvis_wang_free
(
    CVIS_WANG **pv,
    int ***pz
)
{
    int i;
    if (pz != NULL && *pz != NULL)
    {
        for (i = 0; i <= (*pv)->max_index; ++i)
        {
            if ((*pz)[i] != NULL) free((*pz)[i]);
        }
        free(*pz);
        *pz = NULL;
    }
    if (pv != NULL && *pv != NULL)
    {
        for (i = 0; i <= (*pv)->max_index; ++i)
        {
            if ((*pv)->visible[i] != NULL) free((*pv)->visible[i]);
        }
        free(*pv);
        *pv = NULL;
    }
}
