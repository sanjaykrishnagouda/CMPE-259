/**************************************************************************

File:           srtm.h

Description:    Provide an interface to Space Shuttle Topography Mission
                data files.

                For efficient data access, this interface stores an entire
                one-degree-square SRTM tile in memory and represents
                longitude and latitude as the number of seconds north of
                the tile's south border or east of the tile's west border.

                The SRTM tiles overlap by one row/column of data points on
                all borders.  Since there are 3600 seconds in a degree, the
                extra row/column of each tile causes it to have 3601 rows
                and 3601 columns.

                Example of relationship between longitude and index i.

                Longitude = -123 0'0"   -122 59'59"   -122 0'1'    -122 0'0"
                                |------------|---- ... ---|------------|
                        i =     0*           1          3599         3600

                For longitude west of the Grenwich meridian, dd mm'ss", the
                index i = 3600 - 60 * mm - s.


                Example of relationship between latitude and index j.

                Longitude =  36 0'0"      36 0' 0"     36 59'59"    37 0'0"
                                |------------|---- ... ---|------------|
                        j =     0            1          3599         3600*

                For latitude north of the equator, dd mm'ss", the index
                j = 60 * mm + s.

                The interface provides functions that convert from lat/lon
                represented as a pair of doubles into integral (i, j).

Global Functions:

                srtm_malloc()           Read SRTM file into memory.
                srtm_free()             Free SRTM memory.
                srtm_find_limits()      Lat/lon --> i, j
                srtm_fix_elevations()   i, j --> lat/lon
                srtm_find_viewpoint()

**************************************************************************/


// Get int16_t and int32_t
#include <stdint.h>

#define MAX_INDEX       3600    // Min index is 0, for 3601 elements.


// special data values
#define MISSING_DATA  -32768
#define VIEWPOINT      -9999    // Not from file; temp value when writing BMP.


typedef struct
{
    int     origin_lon_deg;     // [-180 .. 180].  Is < 0 in North America.
    int     origin_lat_deg;     // [ -90 ..  90].

    // optional window and computed limits
    double  longitude_min;
    double  longitude_max;
    double  latitude_min;
    double  latitude_max;
    int     h_min;
    int     h_max;
    int     i_min;
    int     i_max;
    int     j_min;
    int     j_max;

    int16_t *h[MAX_INDEX + 1];
} SRTM_TILE;


SRTM_TILE *srtm_malloc
(
    const char *filename,
    int         origin_lon_deg,
    int         origin_lat_deg
);

void srtm_free(SRTM_TILE **srtm);

void srtm_find_limits
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
);

void srtm_fix_elevations(SRTM_TILE  *srtm);

void srtm_find_viewpoint
(
    double      viewpoint_longitude,
    double      viewpoint_latitude,

    // results
    int        *p_viewpoint_i,
    int        *p_viewpoint_j
);
