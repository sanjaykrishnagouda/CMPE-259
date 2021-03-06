#include <stdio.h>
#include <stdlib.h>

extern "C"
{
#include "data.h"
}


int d_max = -100000;
int d_min =  100000;


void find_limits(const char *filename, int left_lon, int lower_lat, 
        double border_left, double border_right,
        double border_lower, double border_upper)
{
    int lon_degrees, lon_minutes, lon_seconds;
    int lat_degrees, lat_minutes, lat_seconds;
    int d, high_byte, i, line, low_byte;
    double latitude, longitude;

    FILE *f = fopen(filename, "rb");

    if (f != NULL)
    {
        /* file data is stored top-to-bottom, left-to-right */
        /* first line is on top */
        /* first sample of each line is on left */

        lat_degrees = lower_lat + 1;    // first line is one degree up
        lat_minutes = 0;
        lat_seconds = 0;

        latitude = lat_degrees;

        for (line = 0; line < 3601; ++line)
        {
            lon_degrees = left_lon;
            lon_minutes = 0;
            lon_seconds = 0;

            longitude = lon_degrees;

            for (i = 0; i < 3601; ++i)
            {
                /* get 16-bit int; big-endian byte order */
                high_byte = getc(f);
                low_byte  = getc(f);

                if (border_left  < longitude && longitude < border_right &&
                    border_lower < latitude  && latitude  < border_upper)
                {
                    d = 256 * high_byte + low_byte;
                printf("INSIDE %f %f %d\n", longitude, latitude, d);

                    if (d != -32768)
                    {
                        if (d > d_max) d_max = d;
                        if (d < d_min) d_min = d;
                    }
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

                longitude += 1.0 / 3600;
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

            latitude -= 1.0 / 3600;
        }

        fclose(f);
    }
}


int main(int argc, char **argv)
{
    find_limits(W123N37, -123, 37, -122.069, -122.048, 36.977, 37.004);
    //find_limits(W123N36, -123, 36, -122.069, -122.048, 36.977, 37.004);

    printf("elevation min = %d meters\n", d_min);
    printf("elevation max = %d meters\n", d_max);

    return 0;
}
