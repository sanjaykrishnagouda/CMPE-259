#include <stdio.h>
#include <stdlib.h>
#include "srtm.h"


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
SRTM_CUMULATIVE_VISIBILITY *srtm_cumulative_visibility
(
    SRTM_TILE  *srtm,
    int         ii,
    int         jj
)
{
    int                             a;
    int                             b;
    int                             base_elevation;
    int                             di;
    int                             dj;
    INT16                         **h;
    int                             i;
    int                             j;
    SRTM_CUMULATIVE_VISIBILITY     *v;
    INT32                         **z;

    v = malloc(sizeof(*v));
    v->origin_lon_deg = srtm->origin_lon_deg;
    v->origon_lat_deg = srtm->origon_lat_deg;

    h = srtm->h;
    z = v->z;

    base_elevation = h[ii][jj];

    // first point
    z[ii][jj] = 0;

    // Octants 1 and 8
    for (i = ii + 1, di = 1; i <= 3600; ++i, ++di)
    {
        // Point along horizontal ray where dj == 0.
        // Ignore reference into adjacent octant: j - 1.
        a       = h[i][j] - base_elevation;
        b       = di * z[i-1][j] / (di - 1);
        z[i][j] = max(a, b);

        // Interior of octant 1
        for (j = jj + 1, dj = 1; dj < di && j <= 3600; ++j, ++dj)
        {
            a       = h[i][j] - base_elevation;
            b       = (dj * z[i-1][j-1] + (di - dj) * z[i-1][j]) / (di - 1);
            z[i][j] = max(a, b);
        }

        // Point along diagonal ray?
        if (dj == di && j <= 3600)
        {
            // Ignore z[i-1][i] because it references adjacent octant.
            a       = h[i][j] - base_elevation;
            b       = dj * z[i-1][j-1] / (di - 1);
            z[i][j] = max(a, b);
        }

        // Interior of octant 8
        for (j = jj - 1, dj = 1; dj < di && j >= 0; --j, ++dj)
        {
            a       = h[i][j] - base_elevation;
            b       = (dj * z[i-1][j+1] + (di - dj) * z[i-1][j]) / (di - 1);
            z[i][j] = max(a, b);
        }

        // Point along diagonal ray?
        if (dj == di && j >= 0)
        {
            // Ignore z[i-1][i] because it references adjacent octant.
            a       = h[i][j] - base_elevation;
            b       = dj * z[i-1][j+1] / (di - 1);
            z[i][j] = max(a, b);
        }
    }

    // Octants 4 and 5
    for (i = ii - 1, di = 1; i >= 0; --i, ++di)
    {
        // Point along horizontal ray where dj == 0.
        // Ignore reference into adjacent octant: j - 1.
        a       = h[i][j] - base_elevation;
        b       = di * z[i+1][j] / (di - 1);
        z[i][j] = max(a, b);

        // Interior of octant 1
        for (j = jj + 1, dj = 1; dj < di && j <= 3600; ++j, ++dj)
        {
            a       = h[i][j] - base_elevation;
            b       = (dj * z[i+1][j-1] + (di - dj) * z[i+1][j]) / (di - 1);
            z[i][j] = max(a, b);
        }

        // Point along diagonal ray?
        if (dj == di && j <= 3600)
        {
            // Ignore z[i+1][i] because it references adjacent octant.
            a       = h[i][j] - base_elevation;
            b       = dj * z[i+1][j-1] / (di - 1);
            z[i][j] = max(a, b);
        }

        // Interior of octant 8
        for (j = jj - 1, dj = 1; dj < di && j >= 0; --j, ++dj)
        {
            a       = h[i][j] - base_elevation;
            b       = (dj * z[i+1][j+1] + (di - dj) * z[i+1][j]) / (di - 1);
            z[i][j] = max(a, b);
        }

        // Point along diagonal ray?
        if (dj == di && j >= 0)
        {
            // Ignore z[i+1][i] because it references adjacent octant.
            a       = h[i][j] - base_elevation;
            b       = dj * z[i+1][j+1] / (di - 1);
            z[i][j] = max(a, b);
        }
    }

    // =======

    // Octants 2 and 3
    for (j = jj + 1, dj = 1; j <= 3600; ++j, ++dj)
    {
        // Point along vertical ray where di == 0.
        // Ignore reference into adjacent octant: i - 1.
        a       = h[i][j] - base_elevation;
        b       = dj * z[i][j-1] / (dj - 1);
        z[i][j] = max(a, b);

        // Interior of octant 2
        for (i = ii + 1, di = 1; di < dj && i <= 3600; ++i, ++di)
        {
            a       = h[i][j] - base_elevation;
            b       = (di * z[i-1][j-1] + (dj - di) * z[i][j-1]) / (dj - 1);
            z[i][j] = max(a, b);
        }

        // Interior of octant 3
        for (i = ii - 1, di = 1; di < dj && i >= 0; --i, ++di)
        {
            a       = h[i][j] - base_elevation;
            b       = (di * z[i+1][j-1] + (dj - di) * z[i][j-1]) / (dj - 1);
            z[i][j] = max(a, b);
        }
    }

    // Octants 7 and 6
    for (j = jj - 1, dj = 1; j >= 0; --j, ++dj)
    {
        // Point along vertical ray where di == 0.
        // Ignore reference into adjacent octant: i - 1.
        a       = h[i][j] - base_elevation;
        b       = dj * z[i][j+1] / (dj - 1);
        z[i][j] = max(a, b);

        // Interior of octant 7
        for (i = ii + 1, di = 1; di < dj && i <= 3600; ++i, ++di)
        {
            a       = h[i][j] - base_elevation;
            b       = (di * z[i-1][j+1] + (dj - di) * z[i][j+1]) / (dj - 1);
            z[i][j] = max(a, b);
        }

        // Interior of octant 6
        for (i = ii - 1, di = 1; di < dj && i >= 0; --i, ++di)
        {
            a       = h[i][j] - base_elevation;
            b       = (di * z[i+1][j+1] + (dj - di) * z[i][j+1]) / (dj - 1);
            z[i][j] = max(a, b);
        }
    }

    return v;
}
