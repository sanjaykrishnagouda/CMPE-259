/**************************************************************************

File:           bmp.h

Description:    Bitmap file I/O functions.  One uses these functions to
                save images of the results of computations.  One also can
                use these functions to convert BMP files into MATLAB
                matrices.

                These functions read and write 256-color BMP files.  The
                table below shows the source and destination of each
                function.

Global Functions:

            Function                            Source          Destination
            --------------------------------    ------------    -----------
            bmp_cvis_wang_write()               Visibility      BMP file
            bmp_int_array_write()               Cumul. Vis.     BMP file
            bmp_srtm_write()                    Elevation       BMP file
            bmp_srtm_v_write()                  Elev. + Vis.    BMP file

            bmp_bitmap_read()                   BMP file        BMP_BITMAP
            bmp_bitmap_write_matlab_matrix()    BMP_BITMAP      MATLAB file

**************************************************************************/

typedef struct
{
    int             height;
    int             width;
    int             palette[256];
    unsigned char **a;
} BMP_BITMAP;

void bmp_srtm_write
(
    const SRTM_TILE *srtm,
    const char      *filename,
    int              num_viewpoints,
    int             *pi,
    int             *pj
);

void bmp_srtm_v_write
(
    const SRTM_TILE *srtm,
    char           **visible,
    const char      *filename,
    int              num_viewpoints,
    int             *pi,
    int             *pj
);

void bmp_cvis_wang_write
(
    const CVIS_WANG *v,
    const char      *filename
);

void bmp_int_array_write
(
    int            **v,
    const char      *filename,
    int              h_min,
    int              h_max,
    int              i_min,
    int              i_max,
    int              j_min,
    int              j_max
);

void bmp_bitmap_read
(
    BMP_BITMAP *bmp,
    const char *filename
);

void bmp_bitmap_write_matlab_matrix
(
    BMP_BITMAP *bmp,
    const char *filename
);

