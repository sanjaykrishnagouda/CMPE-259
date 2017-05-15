#include <stdio.h>
#include <stdlib.h>

extern "C"
{
#include "data.h"
}

void print_voids(const char *filename)
{
    int d, high_byte, i, line, low_byte;
    int found_a_void = 0;

    FILE *f = fopen(filename, "rb");

    if (f != NULL)
    {
        /* file data is stored top-to-bottom, left-to-right */
        /* first line is on top */
        /* first sample of each line is on left */
        for (line = 0; line < 3601; ++line)
        {
            for (i = 0; i < 3601; ++i)
            {
                /* get 16-bit int; big-endian byte order */
                high_byte = getc(f);
                low_byte  = getc(f);
                d = 256 * high_byte + low_byte;

                if (d == -32768)
                {
                    printf("%-12s %4d %4d %6d\n", filename, line, i, d);
                    found_a_void = 1;
                }
            }
        }

        if (!found_a_void) printf("no voids in %s\n", filename);

        fclose(f);
    }
}


int main(int argc, char **argv)
{
    print_voids(W123N36);
    print_voids(W123N37);

    return 0;
}
