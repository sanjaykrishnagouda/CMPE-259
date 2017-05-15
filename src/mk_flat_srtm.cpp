// Create a flat SRTM file with constant elevation of 257 feet.

#include <stdio.h>
#include <stdlib.h>

extern "C"
{
#include "srtm.h"
#include "data.h"
}


int main(int argc, char **argv)
{
    FILE   *f;
    int     i;
    int     j;

    const char *filename = FLAT;

    f = fopen(filename, "wb");

    if (f != NULL)
    {
        /* north to south */
        for (j = MAX_INDEX; j >= 0; --j)
        {
            /* west to east */
            for (i = 0; i <= MAX_INDEX; ++i)
            {
                // write 16-bit int; big-endian byte order
                // 257 meters = 0x0101
                fputc(0x01, f);
                fputc(0x01, f);
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
