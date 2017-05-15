#include <stdio.h>
#include <stdlib.h>

extern "C"
{
#include "data.h"
}

void print_corners(const char *filename, int left_lon, int lower_lat)
{
    int lat_degrees, lat_minutes, lat_seconds;
    int lon_degrees, lon_minutes, lon_seconds;
    int d, high_byte, i, line, low_byte;

    FILE *f = fopen(filename, "rb");

    if (f != NULL)
    {
        /* file data is stored top-to-bottom, left-to-right */
        /* first line is on top */
        /* first sample of each line is on left */

        lat_degrees = lower_lat + 1;    // first line is one degree up
        lat_minutes = 0;
        lat_seconds = 0;

        for (line = 0; line < 3601; ++line)
        {
            lon_degrees = left_lon;
            lon_minutes = 0;
            lon_seconds = 0;

            for (i = 0; i < 3601; ++i)
            {
                /* get 16-bit int; big-endian byte order */
                high_byte = getc(f);
                low_byte  = getc(f);

                if ((line == 0 || line == 3600) &&
                    (i    == 0 || i    == 3600))
                {
                    d = 256 * high_byte + low_byte;
                    if (i == 0) printf("\n");
                    printf("         %3dd%02d'%02d\" %3dd%02d'%02d\" %6d",
                            lat_degrees, lat_minutes, lat_seconds,
                            lon_degrees, lon_minutes, lon_seconds,
                            d);
                    if (i == 3600 && line == 3600) printf("\n");
                }

                --lon_seconds;

                if (lon_seconds < 0)
                {
                    lon_seconds += 60;
                    lon_minutes -=  1;;

                    if (lon_minutes < 0)
                    {
                        lon_minutes += 60;
                        lon_degrees -=  1;
                    }
                }
            }

            --lat_seconds;

            if (lat_seconds < 0)
            {
                lat_seconds += 60;
                lat_minutes -=  1;

                if (lat_minutes < 0)
                {
                    lat_minutes += 60;
                    lat_degrees -=  1;
                }
            }
        }

        fclose(f);
    }
}


int main(int argc, char **argv)
{
    printf("          Latitude  Longitude    Elev");
    printf("          Latitude  Longitude    Elev");
    print_corners(W123N37, 123, 37);
    print_corners(W123N36, 123, 36);

    return 0;
}
