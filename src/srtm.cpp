/**************************************************************************

File:           srtm.cpp

Description:    

Methods:        

**************************************************************************/

#include <stdio.h>
#include <stdlib.h>

extern "C"
{
#include "srtm.h"
#include "math.h"
}


extern "C" SRTM_TILE *srtm_malloc
(
    const char *filename,           // file to read
    int         origin_lon_deg,     // SRTM files lack origin info
    int         origin_lat_deg      // SRTM files lack origin info
)
{
    int         high_byte, i, j, low_byte;
    SRTM_TILE  *srtm;

    FILE *f = fopen(filename, "rb");

//    printf("srtm_malloc()\n");

    if (f != NULL)
    {
        srtm = (SRTM_TILE *) malloc(sizeof(*srtm));
        srtm->origin_lon_deg = origin_lon_deg;
        srtm->origin_lat_deg = origin_lat_deg;

//        printf("    filename = %s\n", filename);
//        printf("    origin_lon_deg = %d\n", origin_lon_deg);
//        printf("    origin_lat_deg = %d\n", origin_lat_deg);

        for (i = 0; i <= MAX_INDEX; ++i)
        {
            srtm->h[i] = (int16_t *) malloc((MAX_INDEX + 1) * sizeof(srtm->h[i][0]));
        }

        /* north to south */
        for (j = MAX_INDEX; j >= 0; --j)
        {
            /* west to east */
            for (i = 0; i <= MAX_INDEX; ++i)
            {
                /* get 16-bit int; big-endian byte order */
                high_byte = getc(f);
                low_byte  = getc(f);

                srtm->h[i][j] = 256 * high_byte + low_byte;
            }
        }

        fclose(f);
    }
    else
    {
        printf("Error opening %s\n", filename);
        exit(1);
    }

    // NOTE: To save time, leave h_min and h_max undefined.
    srtm->longitude_min = origin_lon_deg;
    srtm->longitude_max = origin_lon_deg + 1;
    srtm->latitude_min  = origin_lat_deg;
    srtm->latitude_max  = origin_lat_deg + 1;
    srtm->i_min         = 0;
    srtm->i_max         = MAX_INDEX;
    srtm->j_min         = 0;
    srtm->j_max         = MAX_INDEX;

//    printf("    srtm->longitude_min = %f\n", srtm->longitude_min);
//    printf("    srtm->longitude_max = %f\n", srtm->longitude_max);
//    printf("    srtm->latitude_min = %f\n", srtm->latitude_min);
//    printf("    srtm->latitude_max = %f\n", srtm->latitude_max);
//    printf("    srtm->i_min = %d\n", srtm->i_min);
//    printf("    srtm->i_max = %d\n", srtm->i_max);
//    printf("    srtm->j_min = %d\n", srtm->j_min);
//    printf("    srtm->j_max = %d\n", srtm->j_max);

    return srtm;
}


extern "C" void srtm_free(SRTM_TILE **p_srtm)
{
    int i;

    if (p_srtm != NULL && *p_srtm != NULL)
    {
        for (i = MAX_INDEX; i >= 0; --i)
        {
            if ((*p_srtm)->h[i] != NULL) free((*p_srtm)->h[i]);
        }

        free(*p_srtm);
        *p_srtm = NULL;
    }
}


extern "C" void srtm_find_limits
(
    SRTM_TILE  *srtm,
    double      latitude_min,
    double      longitude_min,
    double      latitude_max,
    double      longitude_max,

    // results
    int        *p_h_min,
    int        *p_h_max,
    int        *p_i_min,
    int        *p_i_max,
    int        *p_j_min,
    int        *p_j_max
)
{
    int lat_degrees, lat_minutes, lat_seconds;
    int lon_degrees, lon_minutes, lon_seconds;
    int h, i, j;
    double latitude, longitude;

    int h_min =  100000;
    int h_max = -100000;

    int i_min =  100000;
    int i_max = -100000;

    int j_min =  100000;
    int j_max = -100000;

//    printf("strm_file_limits()\n");

//    printf("    longitude_min = %f\n", longitude_min);
//    printf("    longitude_max = %f\n", longitude_max);
//    printf("    latitude_min = %f\n", latitude_min);
//    printf("    latitude_max = %f\n", latitude_max);

    /* file data is stored top-to-bottom, left-to-right */
    /* first line is on top */
    /* first sample of each line is on left */

    lat_degrees = srtm->origin_lat_deg;
    lat_minutes = 0;
    lat_seconds = 0;

    latitude = lat_degrees;

    for (j = 0; j <= MAX_INDEX; ++j)
    {
        lon_degrees = srtm->origin_lon_deg;
        lon_minutes = 0;
        lon_seconds = 0;

        longitude = lon_degrees;

        for (i = 0; i <= MAX_INDEX; ++i)
        {
            if (longitude_min < longitude && longitude < longitude_max &&
                latitude_min  < latitude  && latitude  < latitude_max)
            {
                h = srtm->h[i][j];

//                if (i % 101 == 0) printf("    %f<%f<%f && %f<%f<%f\n",
//                                    longitude_min, longitude, longitude_max,
//                                    latitude_min,  latitude,  latitude_max);

                if (h != MISSING_DATA)
                {
                    if (h < h_min) h_min = h;
                    if (h > h_max) h_max = h;
                }

                if (i < i_min) i_min = i;
                if (i > i_max) i_max = i;

                if (j < j_min) j_min = j;
                if (j > j_max) j_max = j;
            }
            else
            {
 //               if (i % 101 == 0) printf("!    %f<%f<%f && %f<%f<%f\n",
//                                    longitude_min, longitude, longitude_max,
//                                    latitude_min,  latitude,  latitude_max);
            }

            ++lon_seconds;

            if (lon_seconds > 59)
            {
                lon_seconds -= 60;
                lon_minutes +=  1;;

                if (lon_minutes > 59)
                {
                    lon_minutes -= 60;
                    lon_degrees +=  1;
                }
            }

            longitude += 1.0 / MAX_INDEX;
        }

        ++lat_seconds;

        if (lat_seconds > 59)
        {
            lat_seconds -= 60;
            lat_minutes +=  1;

            if (lat_minutes > 59)
            {
                lat_minutes -= 60;
                lat_degrees +=  1;
            }
        }

        latitude += 1.0 / MAX_INDEX;
    }

    // store limits
    srtm->longitude_min = longitude_min;
    srtm->longitude_max = longitude_max;

    srtm->latitude_min  = latitude_min;
    srtm->latitude_max  = latitude_max;

    srtm->h_min = h_min;
    srtm->h_max = h_max;

    srtm->i_min = i_min;
    srtm->i_max = i_max;

    srtm->j_min = j_min;
    srtm->j_max = j_max;

    // return limits
    *p_h_min = h_min;
    *p_h_max = h_max;

    *p_i_min = i_min;
    *p_i_max = i_max;

    *p_j_min = j_min;
    *p_j_max = j_max;
}


extern "C" void srtm_find_viewpoint
(
    double      viewpoint_longitude,
    double      viewpoint_latitude,

    // results
    int        *p_viewpoint_i,
    int        *p_viewpoint_j
)
{
    double t;   // Extra parameter needed by modf().  Value unused.

    // See srtm.h for the relationship between longitude/latitude and indexes.

    if (viewpoint_longitude < 0.0)
    {
        *p_viewpoint_i = MAX_INDEX - modf(-viewpoint_longitude, &t) * MAX_INDEX + 0.5;
    }
    else
    {
        *p_viewpoint_i = modf(viewpoint_longitude, &t) * MAX_INDEX + 0.5;
    }

    if (viewpoint_latitude < 0.0)
    {
        *p_viewpoint_j = MAX_INDEX - modf(-viewpoint_latitude, &t) * MAX_INDEX + 0.5;
    }
    else
    {
        *p_viewpoint_j = modf(viewpoint_latitude, &t) * MAX_INDEX + 0.5;
    }
}


extern "C" void srtm_fix_elevations(SRTM_TILE  *srtm)
{
    int h, i, j;

    for (j = 0; j <= MAX_INDEX; ++j)
    {
        for (i = 0; i <= MAX_INDEX; ++i)
        {
            h = srtm->h[i][j];

            if (h < 0) h = 0;

            srtm->h[i][j] = h;
        }
    }
}
