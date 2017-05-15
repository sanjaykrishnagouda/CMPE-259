/**************************************************************************

File:           cvis_wang.i

Description:    This include file defines macros that are used in
                cvis_wang.c .  These parts of the program are defined as
                macros for performance reasons.  They are called eight
                times in cvis_wang.c, once for each octant.

                This file's algorithm is found in the following paper.
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

#if OCTANT == 1 || OCTANT == 2 || OCTANT == 7 || OCTANT == 8
#define DELTA_I         +1
#define I_LIMIT_CHECK   (i <= MAX_INDEX && i <= ii + radius_max)
#else
#define DELTA_I         -1
#define I_LIMIT_CHECK   (i >= 0         && i >= ii - radius_max)
#endif


#if OCTANT == 1 || OCTANT == 2 || OCTANT == 3 || OCTANT == 4
#define DELTA_J         +1
#define J_LIMIT_CHECK   (j <= MAX_INDEX && j <= jj + radius_max)
#else
#define DELTA_J         -1
#define J_LIMIT_CHECK   (j >= 0         && j >= jj - radius_max)
#endif


#define Hp3             (h[i][j] - base_elevation)
#define Zp3             z[i][j]
#define Vis             visible[i][j]
#define R_SQUARED       ((ii - i) * (ii - i) + (jj - j) * (jj - j))
#define CHECK_VIS       if (a >= b && R_SQUARED <= radius_max_squared) Vis = 1


#if OCTANT == 1 || OCTANT == 4 || OCTANT == 5 || OCTANT == 8


#define Zp1             z[i - DELTA_I][j - DELTA_J]
#define Zp2             z[i - DELTA_I][j]

    for (i = ii + 2 * DELTA_I, di = 2;
         I_LIMIT_CHECK;
         i = i + DELTA_I, ++di)
    {
        // First point is along horizontal ray where j = jj.
        // Ignore Zp1 because it references into adjacent octant.
        j   = jj;
        a   = Hp3;
        b   = di * Zp2 / (di - 1);
        Zp3 = max(a, b);
        CHECK_VIS;

        // Interior of octant
        for (j = jj + DELTA_J, dj = 1;
             dj < di && J_LIMIT_CHECK;
             j = j + DELTA_J, ++dj)
        {
            a   = Hp3;
            b   = (dj * Zp1 + (di - dj) * Zp2) / (di - 1);
            Zp3 = max(a, b);
            CHECK_VIS;
        }

        // Point along diagonal ray?
        if (dj == di && J_LIMIT_CHECK)
        {
            // Ignore Zp2 because it references adjacent octant.
            a   = Hp3;
            b   = dj * Zp1 / (di - 1);
            Zp3 = max(a, b);
            CHECK_VIS;
        }
    }


#else


#define Zp1             z[i - DELTA_I][j - DELTA_J]
#define Zp2             z[i][j - DELTA_J]

    for (j = jj + 2 * DELTA_J, dj = 2;
         J_LIMIT_CHECK;
         j = j + DELTA_J, ++dj)
    {
        // First point si along vertical ray where i = ii.
        // Ignore Zp1 because it references into adjacent octant.
        i   = ii;
        a   = Hp3;
        b   = dj * Zp2 / (dj - 1);
        Zp3 = max(a, b);
        CHECK_VIS;

        // Interior of octant
        for (i = ii + DELTA_I, di = 1;
             di < dj && I_LIMIT_CHECK;
             i = i + DELTA_I, ++di)
        {
            a   = Hp3;
            b   = (di * Zp1 + (dj - di) * Zp2) / (dj - 1);
            Zp3 = max(a, b);
            CHECK_VIS;
        }

        // Point along diagonal ray?
        if (di == dj && I_LIMIT_CHECK)
        {
            // Ignore Zp2 because it references adjacent octant.
            a   = Hp3;
            b   = di * Zp1 / (dj - 1);
            Zp3 = max(a, b);
            CHECK_VIS;
        }
    }

#endif

#undef DELTA_I
#undef I_LIMIT_CHECK
#undef DELTA_J
#undef J_LIMIT_CHECK

#undef CHECK_VIS
#undef R_SQUARED
#undef Vis
#undef Hp3
#undef Zp1
#undef Zp2
#undef Zp3
