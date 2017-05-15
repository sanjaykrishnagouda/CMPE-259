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

typedef struct
{
    int     origin_lon_deg;     // [-180 .. 180].  Is < 0 in North America.
    int     origin_lat_deg;     // [ -90 ..  90].
    int     i_min;
    int     i_max;
    int     j_min;
    int     j_max;

    char   *visible[MAX_INDEX + 1];
} CVIS_WANG;

void cvis_wang_malloc
(
    CVIS_WANG **pv,     // pointer to cache of visibility struct
    int      ***pz,     // pointer to cache of heights (yes, *** is correct)
    SRTM_TILE  *srtm,
    int         num_viewpoints,
    int        *pii,    // pointer to viewpoints' horizontal pixel coordinates
    int        *pjj,    // pointer to viewpoints' vertical pixel coordinates
    bool       *pactive,    // array of bools, true if viewpoint is active
    int         radius_max,
    int         viewpoint_height_above_terrain
);

int cvis_wang_count
(
    CVIS_WANG **pv
);

int cvis_wang_malloc_count
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
);

void cvis_wang_free
(
    CVIS_WANG **pv,
    int      ***pz
);

