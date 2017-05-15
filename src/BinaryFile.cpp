/**************************************************************************

File:           BinaryFile.cpp

Class:          BinaryFile

Description:    Bitmap file I/O functions.  One uses these functions to
                save images of the results of computations.  One also
                can use these functions to convert BMP files into
                MATLAB matrices.

                These functions read and write 256-color BMP files.
                The table below shows the source and destination of
                each function.

Global Functions:

                Function                            Source          Destination
                ----------------------------        ------------    -----------
                bmp_cvis_wang_write()               Visibility      BMP file
                bmp_int_array_write()               Cumul. Vis.     BMP file
                bmp_srtm_write()                    Elevation       BMP file
                bmp_srtm_v_write()                  Elev. + Vis.    BMP file

                bmp_bitmap_read()                   BMP file        BMP_BITMAP

                bmp_bitmap_write_matlab_matrix()    BMP_BITMAP      MATLAB file

**************************************************************************/

#include <fstream>

#include <stdio.h>
#include <stdlib.h>

extern "C"
{
#include "srtm.h"
#include "cvis_wang.h"
#include "msg.h"
#include "bmp.h"
}


class BinaryFile
{
    protected:
        fstream f;
    public:
        void close();
};


class BinaryOFile : public BinaryFile
{
    public:
        bool open(const char *filename);
        void W8(int v);
        void W16(int v);
        void W32(int v);
};


class BinaryIFile : public BinaryFile
{
    public:
        bool open(const char *filename);
        int W8();
        int W16();
        int W32();
};


open:

open(const char *filename)
{
    f.open(filename, ios::out | ios::binary);
}


// Write 8-bit int value.
BinaryFile::W8(int v)
{
    char buffer[1] = v & 0xff;
    f.write(buffer, 1);
}

// Write 16-bit int value, little-endian.
BinaryFile::W16(int v)
{
    f.W8(v & 0xff);
    f.W8((v >> 8) & 0xff);
}

// Write 32-bit int value, little-endian.
BinaryFile::W32(int v)
{
    W16(v & 0xffff);
    W16((v >> 16) & 0xffff);
}


// ----------------------------------------------------------------------------
// BMP-reading Functions
//
// Read bytes from BMP file f.  Interprete them as as little-endian binary
// numbers.
// ----------------------------------------------------------------------------

// read 8 bits as a non-negative decimal integer
int R8(FILE *f)
{
    int ch = fgetc(f);  // ch is 0..255 or EOF

    if (ch == EOF) {
        msg_error("BMP is truncated");
    }

    return ch;
}

// read 16 bits as a non-negative decimal integer
int R16(FILE *f)
{
    int LSBs = R8(f);
    int MSBs = R8(f);

    return LSBs + 0x100 * MSBs;
}

// read 32 bits as a (possibly negative) decimal integer
int R32(FILE *f)
{
    int LSBs = R16(f);
    int MSBs = R16(f);

    return LSBs + 0x10000 * MSBs;
}


/*
*  Convert SRTM image into a grayscale BMP file using 256 indexed colors.
*
*  BMP files are stored with pixel (0,0) in the lower-left corner.
*/
extern "C" void bmp_srtm_write
(
    const SRTM_TILE *srtm,              // elevation
    const char      *filename,
    int              num_viewpoints,
    int             *pi,                // viewpoint coords.
    int             *pj                 // viewpoint coords.
)
{
    FILE   *f;
    int     i;
    int     j;
    int     x;
    int     y;
    int     temp[1000];  // TODO this needs to be a dynamic array

    f = fopen(filename, "w");

    if (f == NULL)
    {
        printf("Can't create %s\n", filename);
        exit(1);
    }


    // Save viewpoint pixels and make them temporarily red.
    // We'll put them back before the end of the function.
    // Set a 3x3 array of pixels to make them more visible.
    j = 0;

    for (i = 0; i < num_viewpoints; ++i)
    {
        temp[j++] = srtm->h[pi[i]-1][pj[i]-1];
        temp[j++] = srtm->h[pi[i]-1][pj[i]  ];
        temp[j++] = srtm->h[pi[i]-1][pj[i]+1];
        temp[j++] = srtm->h[pi[i]  ][pj[i]-1];
        temp[j++] = srtm->h[pi[i]  ][pj[i]  ];
        temp[j++] = srtm->h[pi[i]  ][pj[i]+1];
        temp[j++] = srtm->h[pi[i]+1][pj[i]-1];
        temp[j++] = srtm->h[pi[i]+1][pj[i]  ];
        temp[j++] = srtm->h[pi[i]+1][pj[i]+1];
    }

    for (i = 0; i < num_viewpoints; ++i)
    {
        srtm->h[pi[i]-1][pj[i]-1] = VIEWPOINT;
        srtm->h[pi[i]-1][pj[i]  ] = VIEWPOINT;
        srtm->h[pi[i]-1][pj[i]+1] = VIEWPOINT;
        srtm->h[pi[i]  ][pj[i]-1] = VIEWPOINT;
        srtm->h[pi[i]  ][pj[i]  ] = VIEWPOINT;
        srtm->h[pi[i]  ][pj[i]+1] = VIEWPOINT;
        srtm->h[pi[i]+1][pj[i]-1] = VIEWPOINT;
        srtm->h[pi[i]+1][pj[i]  ] = VIEWPOINT;
        srtm->h[pi[i]+1][pj[i]+1] = VIEWPOINT;
    }


    /* Compute the header data. */
    int height          = srtm->j_max - srtm->j_min + 1;
    int width           = srtm->i_max - srtm->i_min + 1;
    int rounded_width   = (width + 3) & ~3;     // rounded up to next mult of 4
    int image_size      = height * rounded_width;

    int header_size     = 1 + 1 + 4 + 2 + 2 + 4;
    int info_header_size= 4 + 4 + 4 + 2 + 2 + 4 + 4 + 4 + 4 + 4 + 4;
    int bits            = 8;        // per pixel, indexes into palette of 256
    int num_colors      = 256;
    int palette_size    = num_colors * 4;
    int offset          = header_size + info_header_size + palette_size;
    int size            = offset + image_size;


    /* write header */
    /* type1            */  W8(f, 'B');
    /* type2            */  W8(f, 'M');
    /* size             */  W32(f, size);
    /* reserved1        */  W16(f, 0);
    /* reserved2        */  W16(f, 0);
    /* offset           */  W32(f, offset);

    /* infoheadersize   */  W32(f, info_header_size);
    /* width            */  W32(f, width);
    /* height           */  W32(f, height);
    /* planes           */  W16(f, 1);
    /* bits             */  W16(f, bits);
    /* compression      */  W32(f, 0);
    /* imagesize        */  W32(f, image_size);
    /* xresolution      */  W32(f, 2835);     // What is this?  I'm guessing.
    /* yresolution      */  W32(f, 2835);     // What is this?  I'm guessing.
    /* ncolors          */  W32(f, 0);
    /* importantcolors  */  W32(f, 0);

    /* Write 256 entries of the (mostly) grayscale palette, with four bytes */
    /* per entry:  0xXXRRGGBB (X is ignored).  */
    W32(f, 0x000000ff); // index 0 is blue (same height as zero elevation)

    for (i = 1; i < num_colors - 2; ++i)    // stop loop early for red/yellow
    {
        W32(f, i * 0x00010101);
    }

    W32(f, 0x00ff0000); // index 254 is red
    W32(f, 0x00ffff00); // index 255 is yellow

    /* Write the pixel data. */
    /* Each data row is padded to a 4-byte boundary */
    /* so write extra bytes at the end of the row, if necessary. */
    /* NOTE:  Rows are written from bottom to top. */
    for (y = 0, j = srtm->j_min; y < height; ++y, ++j)
    {
        for (x = 0, i = srtm->i_min; x < width; ++x, ++i)
        {
            int h = srtm->h[i][j];

            // scale h
            if      (h == MISSING_DATA) h = 255;
            else if (h == VIEWPOINT)    h = 254;
            else if (h == 0)            h =   0;    // sea level
            else if (h <  0)            h = 255;    // other codes
            else
            {
                // map [srtm->h_min..srtm->h_max] to [1..253]
                // h in   h out
                // -----  -----
                // h_min    1
                // h_max   253
                h = (h - srtm->h_min) * 252 / (srtm->h_max - srtm->h_min) + 1;
            }

            W8(f, h);
        }

        /* padding */
        for (x = width; x < rounded_width; ++x)
        {
            W8(f, 0);
        }
    }

    // Remove viewpoints, restoring height data.
    j = 0;

    for (i = 0; i < num_viewpoints; ++i)
    {
        srtm->h[pi[i]-1][pj[i]-1] = temp[j++];
        srtm->h[pi[i]-1][pj[i]  ] = temp[j++];
        srtm->h[pi[i]-1][pj[i]+1] = temp[j++];
        srtm->h[pi[i]  ][pj[i]-1] = temp[j++];
        srtm->h[pi[i]  ][pj[i]  ] = temp[j++];
        srtm->h[pi[i]  ][pj[i]+1] = temp[j++];
        srtm->h[pi[i]+1][pj[i]-1] = temp[j++];
        srtm->h[pi[i]+1][pj[i]  ] = temp[j++];
        srtm->h[pi[i]+1][pj[i]+1] = temp[j++];
    }


    fclose(f);
}


/*
*  Convert SRTM image into a grayscale BMP file using 256 indexed colors.
*  Use v array to identify visibilty pixels, and make them slightly yellow.
*
*  BMP files are stored with pixel (0,0) in the lower-left corner.
*/
extern "C" void bmp_srtm_v_write
(
    const SRTM_TILE *srtm,              // elevation
    char           **visible,           // visibility
    const char      *filename,
    int              num_viewpoints,
    int             *pi,                // viewpoint coords.
    int             *pj                 // viewpoint coords.
)
{
    FILE   *f;
    int     i;
    int     j;
    int     x;
    int     y;
    int     temp[1000];  // TODO this needs to be a dynamic array,
                         // or at least check it against 2 * num_viewpoints.

    f = fopen(filename, "w");

    if (f == NULL)
    {
        printf("Can't create %s\n", filename);
        exit(1);
    }


    // Save viewpoint pixels and make them temporarily red.
    // We'll put them back before the end of the function.
    // Set a 3x3 array of pixels to make them more visible.
    j = 0;

    for (i = 0; i < num_viewpoints; ++i)
    {
        temp[j++] = srtm->h[pi[i]-1][pj[i]-1];
        temp[j++] = srtm->h[pi[i]-1][pj[i]  ];
        temp[j++] = srtm->h[pi[i]-1][pj[i]+1];
        temp[j++] = srtm->h[pi[i]  ][pj[i]-1];
        temp[j++] = srtm->h[pi[i]  ][pj[i]  ];
        temp[j++] = srtm->h[pi[i]  ][pj[i]+1];
        temp[j++] = srtm->h[pi[i]+1][pj[i]-1];
        temp[j++] = srtm->h[pi[i]+1][pj[i]  ];
        temp[j++] = srtm->h[pi[i]+1][pj[i]+1];
    }

    for (i = 0; i < num_viewpoints; ++i)
    {
        srtm->h[pi[i]-1][pj[i]-1] = VIEWPOINT;
        srtm->h[pi[i]-1][pj[i]  ] = VIEWPOINT;
        srtm->h[pi[i]-1][pj[i]+1] = VIEWPOINT;
        srtm->h[pi[i]  ][pj[i]-1] = VIEWPOINT;
        srtm->h[pi[i]  ][pj[i]  ] = VIEWPOINT;
        srtm->h[pi[i]  ][pj[i]+1] = VIEWPOINT;
        srtm->h[pi[i]+1][pj[i]-1] = VIEWPOINT;
        srtm->h[pi[i]+1][pj[i]  ] = VIEWPOINT;
        srtm->h[pi[i]+1][pj[i]+1] = VIEWPOINT;
    }


    /* Compute the header data. */
    int height          = srtm->j_max - srtm->j_min + 1;
    int width           = srtm->i_max - srtm->i_min + 1;
    int rounded_width   = (width + 3) & ~3;     // rounded up to next mult of 4
    int image_size      = height * rounded_width;

    int header_size     = 1 + 1 + 4 + 2 + 2 + 4;
    int info_header_size= 4 + 4 + 4 + 2 + 2 + 4 + 4 + 4 + 4 + 4 + 4;
    int bits            = 8;        // per pixel, indexes into palette of 256
    int num_colors      = 256;
    int palette_size    = num_colors * 4;
    int offset          = header_size + info_header_size + palette_size;
    int size            = offset + image_size;


    /* write header */
    /* type1            */  W8(f, 'B');
    /* type2            */  W8(f, 'M');
    /* size             */  W32(f, size);
    /* reserved1        */  W16(f, 0);
    /* reserved2        */  W16(f, 0);
    /* offset           */  W32(f, offset);

    /* infoheadersize   */  W32(f, info_header_size);
    /* width            */  W32(f, width);
    /* height           */  W32(f, height);
    /* planes           */  W16(f, 1);
    /* bits             */  W16(f, bits);
    /* compression      */  W32(f, 0);
    /* imagesize        */  W32(f, image_size);
    /* xresolution      */  W32(f, 2835);     // What is this?  I'm guessing.
    /* yresolution      */  W32(f, 2835);     // What is this?  I'm guessing.
    /* ncolors          */  W32(f, 0);
    /* importantcolors  */  W32(f, 0);

    /* Write 256 entries of the (mostly) grayscale palette, with four bytes */
    /* per entry:  0xXXRRGGBB (X is ignored).  */
    W32(f, 0x000000ff); // index 0 is blue (same height as zero elevation)
    W32(f, 0x00000000); // index 1 is unused

    // shades of gray
    for (i = 2; i <= 125; ++i)
    {
        W32(f, 2 * i * 0x00010101);
    }

    W32(f, 0x00000000); // index 126 is unused
    W32(f, 0x00000000); // index 127 is unused
    W32(f, 0x00000000); // index 128 is unused
    W32(f, 0x00000000); // index 129 is unused

    // Shades of yellow.  Just like shades of gray, but with index + 128.
    for (i = 130; i <= 253; ++i)
    {
        int y = i - 128;
        //                 00RRGGBB
        W32(f,   2 * y * 0x00010100
               +     y * 0x00000001);
    }

    W32(f, 0x00ff0000); // index 254 is red
    W32(f, 0x00ffff00); // index 255 is yellow

    /* Write the pixel data. */
    /* Each data row is padded to a 4-byte boundary */
    /* so write extra bytes at the end of the row, if necessary. */
    /* NOTE:  Rows are written from bottom to top. */
    for (y = 0, j = srtm->j_min; y < height; ++y, ++j)
    {
        for (x = 0, i = srtm->i_min; x < width; ++x, ++i)
        {
            int h = srtm->h[i][j];

            // scale h
            if      (h == MISSING_DATA) h = 255;
            else if (h == VIEWPOINT)    h = 254;
            else if (h == 0)            h =   0;    // sea level
            else if (h <  0)            h = 255;    // other codes
            else
            {
                if (visible[i][j])
                {
                    // Visible!  Map to shades of yellow.
                    // map [srtm->h_min..srtm->h_max] to [130..253]
                    // h in   h out
                    // -----  -----
                    // h_min   130
                    // h_max   253
                    h = (h - srtm->h_min) * (253 - 130) /
                        (srtm->h_max - srtm->h_min) + 130;
                }
                else
                {
                    // map [srtm->h_min..srtm->h_max] to [2..125]
                    // h in   h out
                    // -----  -----
                    // h_min    2
                    // h_max   125
                    h = (h - srtm->h_min) * (125 - 2) /
                        (srtm->h_max - srtm->h_min) + 2;
                }
            }

            W8(f, h);
        }

        /* padding */
        for (x = width; x < rounded_width; ++x)
        {
            W8(f, 0);
        }
    }

    // Remove viewpoints, restoring height data.
    j = 0;

    for (i = 0; i < num_viewpoints; ++i)
    {
        srtm->h[pi[i]-1][pj[i]-1] = temp[j++];
        srtm->h[pi[i]-1][pj[i]  ] = temp[j++];
        srtm->h[pi[i]-1][pj[i]+1] = temp[j++];
        srtm->h[pi[i]  ][pj[i]-1] = temp[j++];
        srtm->h[pi[i]  ][pj[i]  ] = temp[j++];
        srtm->h[pi[i]  ][pj[i]+1] = temp[j++];
        srtm->h[pi[i]+1][pj[i]-1] = temp[j++];
        srtm->h[pi[i]+1][pj[i]  ] = temp[j++];
        srtm->h[pi[i]+1][pj[i]+1] = temp[j++];
    }


    fclose(f);
}


/*
*  Convert CVIS image into a grayscale BMP file using 256 indexed colors.
*
*  BMP files are stored with pixel (0,0) in the lower-left corner.
*/
extern "C" void bmp_cvis_wang_write
(
    const CVIS_WANG *v,         // Visibility
    const char      *filename
)
{
    FILE   *f;
    int     i;
    int     j;
    int     x;
    int     y;

    f = fopen(filename, "w");

    if (f == NULL)
    {
        printf("Can't create %s\n", filename);
        exit(1);
    }

    /* Compute the header data. */
    int height          = v->j_max - v->j_min + 1;
    int width           = v->i_max - v->i_min + 1;
    int rounded_width   = (width + 3) & ~3;     // rounded up to next mult of 4
    int image_size      = height * rounded_width;

    int header_size     = 1 + 1 + 4 + 2 + 2 + 4;
    int info_header_size= 4 + 4 + 4 + 2 + 2 + 4 + 4 + 4 + 4 + 4 + 4;
    int bits            = 8;        // per pixel, indexes into palette of 256
    int num_colors      = 256;
    int palette_size    = num_colors * 4;
    int offset          = header_size + info_header_size + palette_size;
    int size            = offset + image_size;


    /* write header */
    /* type1            */  W8(f, 'B');
    /* type2            */  W8(f, 'M');
    /* size             */  W32(f, size);
    /* reserved1        */  W16(f, 0);
    /* reserved2        */  W16(f, 0);
    /* offset           */  W32(f, offset);

    /* infoheadersize   */  W32(f, info_header_size);
    /* width            */  W32(f, width);
    /* height           */  W32(f, height);
    /* planes           */  W16(f, 1);
    /* bits             */  W16(f, bits);
    /* compression      */  W32(f, 0);
    /* imagesize        */  W32(f, image_size);
    /* xresolution      */  W32(f, 2835);     // What is this?  I'm guessing.
    /* yresolution      */  W32(f, 2835);     // What is this?  I'm guessing.
    /* ncolors          */  W32(f, 0);
    /* importantcolors  */  W32(f, 0);

    /* Write the grayscale palette, four bytes */
    /* per entry, 0xXXRRGGBB (X is ignored).   */
    for (i = 0; i < num_colors; ++i)
    {
        W32(f, i * 0x00010101);
    }


    /* Write the pixel data. */
    /* Each data row is padded to a 4-byte boundary */
    /* so write extra bytes at the end of the row, if necessary. */
    for (y = 0, j = v->j_min; y < height; ++y, ++j)
    {
        for (x = 0, i = v->i_min; x < width; ++x, ++i)
        {
            W8(f, v->visible[i][j] ? 255 : 0);
        }

        /* padding */
        for (x = width; x < rounded_width; ++x)
        {
            W8(f, 0);
        }
    }

    fclose(f);
}


/*
*  Convert an integer array into a grayscale BMP file using 256 indexed colors.
*
*  BMP files are stored with pixel (0,0) in the lower-left corner.
*/
extern "C" void bmp_int_array_write
(
    int            **v,         // Cumulative visibility
    const char      *filename,
    int              h_min,     // min value
    int              h_max,     // max value
    int              i_min,
    int              i_max,
    int              j_min,
    int              j_max
)
{
    FILE   *f;
    int     i;
    int     j;
    int     x;
    int     y;

    f = fopen(filename, "w");

    if (f == NULL)
    {
        printf("Can't create %s\n", filename);
        exit(1);
    }

    /* Compute the header data. */
    int height          = j_max - j_min + 1;
    int width           = i_max - i_min + 1;
    int rounded_width   = (width + 3) & ~3;     // rounded up to next mult of 4
    int image_size      = height * rounded_width;

    int header_size     = 1 + 1 + 4 + 2 + 2 + 4;
    int info_header_size= 4 + 4 + 4 + 2 + 2 + 4 + 4 + 4 + 4 + 4 + 4;
    int bits            = 8;        // per pixel, indexes into palette of 256
    int num_colors      = 256;
    int palette_size    = num_colors * 4;
    int offset          = header_size + info_header_size + palette_size;
    int size            = offset + image_size;


    /* write header */
    /* type1            */  W8(f, 'B');
    /* type2            */  W8(f, 'M');
    /* size             */  W32(f, size);
    /* reserved1        */  W16(f, 0);
    /* reserved2        */  W16(f, 0);
    /* offset           */  W32(f, offset);

    /* infoheadersize   */  W32(f, info_header_size);
    /* width            */  W32(f, width);
    /* height           */  W32(f, height);
    /* planes           */  W16(f, 1);
    /* bits             */  W16(f, bits);
    /* compression      */  W32(f, 0);
    /* imagesize        */  W32(f, image_size);
    /* xresolution      */  W32(f, 2835);     // What is this?  I'm guessing.
    /* yresolution      */  W32(f, 2835);     // What is this?  I'm guessing.
    /* ncolors          */  W32(f, 0);
    /* importantcolors  */  W32(f, 0);

    /* Write the grayscale palette, four bytes */
    /* per entry, 0xXXRRGGBB (X is ignored).   */
    for (i = 0; i < num_colors; ++i)
    {
        W32(f, i * 0x00010101);
    }


    /* Write the pixel data. */
    /* Each data row is padded to a 4-byte boundary */
    /* so write extra bytes at the end of the row, if necessary. */
    for (y = 0, j = j_min; y < height; ++y, ++j)
    {
        for (x = 0, i = i_min; x < width; ++x, ++i)
        {
            int h = v[i][j];

            // map [h_min..h_max] to [0..255]

            // first ensure that h is in [h_min..h_max]
            if (h < h_min) h = h_min;
            if (h > h_max) h = h_max;

            // then do the appropriate mapping
            if (h_max - h_min + 1 > 256)
            {
                // Add the fraction N_out/N_in for every h above h_min,
                // and then truncate.  That is
                //
                // h_out = int((h_in - h_min) * N_out / N_in)

                h = (h - h_min) * 256 / (h_max - h_min + 1);
            }
            else
            {
                // Add the fraction (N_out - 1)/(N_in - 1) for every h above
                // h_min, and then round (add 1/2 and truncate).  That is
                //
                // h_out = int((h_in - h_min) * (N_out - 1) / (N_in - 1) + 1/2)
                //
                //       = int((2 * (h_in - h_min) * (N_out - 1) + N_in - 1) /
                //             (2 * (N_in - 1)))

                h = (2 * (h - h_min) * 255 + h_max - h_min) /
                    (2 * (h_max - h_min));
            }

            W8(f, h);
        }

        /* padding */
        for (x = width; x < rounded_width; ++x)
        {
            W8(f, 0);
        }
    }

    fclose(f);
}


/*
*  Read a 256 indexed-color BMP file into structure *bmp.
*
*  Pixel (0,0) is in the lower-left corner.
*/
extern "C" void bmp_bitmap_read
(
    BMP_BITMAP *bmp,
    const char *filename
)
{
    int i, x, y;

    int planes;
    int bits;
    int rounded_width;

    FILE *f = fopen(filename, "rb");

    if (f == NULL)
    {
        printf("Can't open %s\n", filename);
        exit(1);
    }


    // -----------
    // READ HEADER
    //
    // (Notice that we skip some fields by just discarding their values.)
    // -----------

    /* type1 */  if (R8(f) != 'B') msg_error("%s: bad BMP", filename);
    /* type2 */  if (R8(f) != 'M') msg_error("%s: bad BMP", filename);
    /* size             */    R32(f);
    /* reserved1        */    R16(f);
    /* reserved2        */    R16(f);
    /* offset           */    R32(f);
    /* infoheadersize   */    R32(f);
       bmp->width           = R32(f);
       bmp->height          = R32(f);
       planes               = R16(f);
       bits                 = R16(f);
    /* compression      */    R32(f);
    /* imagesize        */    R32(f);
    /* xresolution      */    R32(f);
    /* yresolution      */    R32(f);
    /* ncolors          */    R32(f);
    /* importantcolors  */    R32(f);

    if (planes != 1) msg_error("%s: must have one plane", filename);
    if (bits   != 8) msg_error("%s: must have 256 indexed colors", filename);


    // ------------------------------------------
    // Read the grayscale palette, four bytes 
    // per entry, 0xXXRRGGBB (X is ignored).
    // ------------------------------------------

    for (i = 0; i < 256; ++i)
    {
        bmp->palette[i] = R32(f);
    }


    // -----------
    // READ PIXELS
    // -----------

    // Pixel rows always are stored in multiples of four bytes.
    // Round "width" up to next multiple of 4.
    rounded_width = (bmp->width + 3) & ~3;

    bmp->a = (unsigned char **) malloc(rounded_width * sizeof(bmp->a[0]));

    for (x = 0; x < rounded_width; ++x)
    {
        bmp->a[x] = (unsigned char *) malloc(bmp->height * sizeof(bmp->a[x][0]));
    }

    for (y = 0; y < bmp->height; ++y)
    {
        for (x = 0; x < rounded_width; ++x)
        {
            bmp->a[x][y] = R8(f);
        }
    }
}


/*
*  Write a bitmap to a text file as a MATLAB matrix.
*
*  Pixel (0,0) is in the lower-left corner.
*/
extern "C" void bmp_bitmap_write_matlab_matrix
(
    BMP_BITMAP *bmp,
    const char *filename
)
{
    int x, y;

    FILE *f = fopen(filename, "w");

    if (f == NULL)
    {
        printf("Can't create %s\n", filename);
        exit(1);
    }

    fprintf(f, "bitmap = [");

    for (y = 0; y < bmp->height; ++y)   // TODO decrement or increment?
    {
        for (x = 0; x < bmp->width; ++x)
        {
            printf("%4d", bmp->a[x][y]);
        }

        fprintf(f, "\n");
    }

    fprintf(f, " ];\n");

    if (fclose(f) == EOF) msg_error("can't close %s", filename);
}

