// Create an SRTM file for a wavey terrain.
// Over the 3600x3600 HGT, there are 20 "bumps" vertically, and 
// 30 bumps horizontally.

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

extern "C"
{
#include "srtm.h"
#include "data.h"
}


#define ELEVATION_MIN  100
#define ELEVATION_MAX 1100
#define PI               3.141592654

int main(int argc, char **argv)
{
    int     elevation;
    FILE   *f;
    double  fn;
    int     high_byte;
    int     i;
    int     j;
    int     low_byte;

    const char *filename = WAVEY2;

    f = fopen(filename, "wb");

    if (f != NULL)
    {
        /* north to south */
        for (j = MAX_INDEX; j >= 0; --j)
        {
            /* west to east */
            for (i = 0; i <= MAX_INDEX; ++i)
            {
                // Make waves with sin^2(x) * sin^2(y).
                double x = sin(1.0 * i / 3600 * 10 * 2 * PI);
                double y = sin(1.0 * j / 3600 * 15 * 2 * PI);

                elevation = ELEVATION_MIN +
                            (ELEVATION_MAX - ELEVATION_MIN) * (x * x + y * y);

                // write 16-bit int; big-endian byte order
                low_byte  = 0xff &  elevation;
                high_byte = 0xff & ((elevation - low_byte) >> 8);
                fputc(high_byte, f);
                fputc(low_byte,  f);
            }
        }

        fclose(f);                                       
    }
    else
    {
        printf("Error creating %s\n", filename);
        exit(1);
    } 

    return 0;
}
