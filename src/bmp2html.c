#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "srtm.h"
#include "cvis_wang.h"
#include "msg.h"
#include "bmp.h"


int main(int argc, char **argv)
{
    BMP_BITMAP bmp;

    if (argc != 4                  ||
        strcmp(argv[2], "-o") != 0)
    {
        printf("Usage: bmp2html infile -o outfile\n");
        exit(1);
    }
    else
    {
        const char *infile  = argv[1];
        const char *outfile = argv[3];

        bmp_bitmap_read(&bmp, infile);
        bmp_bitmap_write_google_map_html(&bmp, outfile);
    }

    return 0;
}

