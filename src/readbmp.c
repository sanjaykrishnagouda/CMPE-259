/*
*  Read a 256 indexed-color BMP file into structure *bmp.
*
*  Pixel (0,0) is in the lower-left corner.
*/
bmp_bitmap_read
(
    BMP_BITMAP *bmp,
    const char *filename
)
{
    int i;

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

    /* type1 */  if (R8(f) != ord('B')) msg_error("%s: bad BMP", filename);
    /* type2 */  if (R8(f) != ord('M')) msg_error("%s: bad BMP", filename);
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

    bmp->a = malloc(rounded_width * sizeof(bmp->a[0]));

    for (x = 0; x < rounded_width; ++x)
    {
        bmp->a[x] = malloc(height * sizeof(a[x][0]));
    }

    for (y = 0; y < bmp->height; ++y)
    {
        for (x = 0; x < rounded_width; ++x)
        {
            a[x][y] = R8(f);
        }
    }
}


/*
*  Write a bitmap to a text file as a MATLAB matrix.
*
*  Pixel (0,0) is in the lower-left corner.
*/
bmp_bitmap_write_matlab_matrix
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
            printf("%4d", a[x][y]);
        }

        fprintf(f, "\n");
    }

    fprintf(f, " ];\n");

    if (fclose(f) == EOF) msg_error("can't close %s", filename);
}

