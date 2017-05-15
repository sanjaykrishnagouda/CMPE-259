// Create an SRTM file for a dish-shaped terrain.
//
// Lower level

#include <stdio.h>
#include <stdlib.h>

extern "C"
{
#include "srtm.h"
#include "data.h"
}


#define ELEVATION_MIN  100
#define ELEVATION_MAX 1100

int main(int argc, char **argv)
{
    int     elevation;
    FILE   *f;
    int     high_byte;
    int     i;
    int     j;
    int     low_byte;

    const char *filename = DISH;

    f = fopen(filename, "wb");

    if (f != NULL)
    {
        /* north to south */
        for (j = MAX_INDEX; j >= 0; --j)
        {
            /* west to east */
            for (i = 0; i <= MAX_INDEX; ++i)
            {
                // Rotate a parabola around (1800, 1800).
                // (NOTE: the maximum elevation *might* be ELEVATION_MAX + 1.)

                elevation = ELEVATION_MIN +
                            ((i - 1800) * (i - 1800) + (j - 1800) * (j - 1800))
                            /
                            (2 * 1800 * 1800 / (ELEVATION_MAX - ELEVATION_MIN));

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
