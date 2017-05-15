<?php

// ============================================================================
// Plot database coordinates on a BMP file.
//
// The BMP file is

$fname = 'images/USGS-7p5-min-aligned-cropped.bmp';

// ============================================================================

require '../map_password.inc.php';


// ----------------------------------------------------------------------------
// BMP-writing Functions
//
// Write integer values to stdout, representing them as little-endian binary
// numbers.
// ----------------------------------------------------------------------------

// 8-bit int
function W8($int_val) {
    printf("%c", $int_val);
}

// 16-bit int
function W16($int_val) {
    W8(($int_val) & 0xff);
    W8((($int_val) >> 8) & 0xff);
}

// 32-bit int
function W32($int_val) {
    W16(($int_val) & 0xffff);
    W16((($int_val) >> 16) & 0xffff);
}


// ----------------------------------------------------------------------------
// BMP-reading Functions
//
// Read bytes from BMP file $f.  Interprete them as a single-character string
// or as little-endian binary numbers.
// ----------------------------------------------------------------------------

// char
function C8($f) {
    global $fname;

    if (($ch = fgetc($f)) === false) {
        exit("$fname is truncated");
    }

    return $ch;
}

// 8-bit int
function R8($f) {
    return ord(C8($f));
}

// 16-bit int
function R16($f) {
    $L = R8($f);
    $H = R8($f);

    return $L + 0x100 * $H;
}

// 32-bit int
function R32($f) {
    $L = R16($f);
    $H = R16($f);

    return $L + 0x10000 * $H;
}


/*
*  Convet matricies $a and $palette into a BMP file with 256 indexed colors.
*
*  BMP files are stored with pixel (0,0) in the lower-left corner.
*/
function write_bmp($a, $num_bmp_rows, $num_columns, $palette) {
    /* Compute the header data. */
    $height          = $num_bmp_rows;
    $width           = $num_columns;
    $rounded_width   = ($width + 3) & ~3;     // rounded up to next mult of 4
    $image_size      = $height * $rounded_width;

    $header_size     = 1 + 1 + 4 + 2 + 2 + 4;
    $info_header_size= 4 + 4 + 4 + 2 + 2 + 4 + 4 + 4 + 4 + 4 + 4;
    $bits            = 8;        // per pixel, indexes into palette of 256
    $num_colors      = 256;
    $palette_size    = $num_colors * 4;
    $offset          = $header_size + $info_header_size + $palette_size;
    $size            = $offset + $image_size;


    header('Content-Type: image/bmp');

    /* write header */
    /* type1            */  W8(ord('B'));
    /* type2            */  W8(ord('M'));
    /* size             */  W32($size);
    /* reserved1        */  W16(0);
    /* reserved2        */  W16(0);
    /* offset           */  W32($offset);

    /* infoheadersize   */  W32($info_header_size);
    /* width            */  W32($width);
    /* height           */  W32($height);
    /* planes           */  W16(1);
    /* bits             */  W16($bits);
    /* compression      */  W32(0);
    /* imagesize        */  W32($image_size);
    /* xresolution      */  W32(2835);     // What is this?  I'm guessing.
    /* yresolution      */  W32(2835);     // What is this?  I'm guessing.
    /* ncolors          */  W32(0);
    /* importantcolors  */  W32(0);

    /* Write the palette, four bytes per entry, 0xXXRRGGBB (X is ignored). */
    for ($i = 0; $i < $num_colors; ++$i) {
        W32($palette[$i]);

//      // ---------------------------------------------------------
//      // Set of colors that is unambiguous both to colorblinds and
//      // non-colorblinds.  See http://jfly.iam.u-tokyo.ac.jp/color
//      // ---------------------------------------------------------
//
//      switch ($i) {
//          case BLACK:             W32((  0 * 256 +   0) * 256 +   0); break;
//          case ORANGE:            W32((230 * 256 + 159) * 256 +   0); break;
//          case SKY_BLUE:          W32(( 86 * 256 + 180) * 256 + 233); break;
//          case BLUISH_GREEN:      W32((  0 * 256 + 158) * 256 + 115); break;
//          case YELLOW:            W32((240 * 256 + 228) * 256 +  66); break;
//          case BLUE:              W32((  0 * 256 + 114) * 256 + 178); break;
//          case VERMILLION:        W32((213 * 256 +  94) * 256 +   0); break;
//          case REDDISH_PURPLE:    W32((204 * 256 + 121) * 256 + 167); break;
//          case GRAY:              W32((128 * 256 + 128) * 256 + 128); break;
//          case WHITE:             W32((255 * 256 + 255) * 256 + 255); break;
//
//          default:                W32(0xffffff);                      break;
//      }

    }


    /* Write the pixel data. */
    /* Each data row is padded to a 4-byte boundary */
    /* so write extra bytes at the end of the row, if necessary. */
    for ($y = 0; $y < $height; ++$y) {
        for ($x = 0; $x < $width; ++$x) {
            W8(ord($a[$x][$y]));
        }

        /* padding */
        for ($x = $width; $x < $rounded_width; ++$x) {
            W8(0);
        }
    }
}


/*
*  This function reads a 256 indexed-color BMP file into matrices
*  $a and $palette.
*
*  Pixel (0,0) is in the lower-left corner.
*/
function read_bmp(&$a, &$height, &$width, &$palette, &$fname) {

    $fname = 'images/USGS-7p5-min-aligned-cropped.bmp';

    $f = fopen($fname, 'r');

    if (!$f) {
        print "Could not open file $fname";
    }


    // -----------
    // READ HEADER
    // -----------

    /* type1            */  if (R8($f) != ord('B')) exit("$fname: not a BMP");
    /* type2            */  if (R8($f) != ord('M')) exit("$fname: not a BMP");
    /* size             */  R32($f);
    /* reserved1        */  R16($f);
    /* reserved2        */  R16($f);
    /* offset           */  R32($f);
    /* infoheadersize   */  R32($f);
      $width  =             R32($f);
      $height =             R32($f);
      $planes =             R16($f);
      $bits   =             R16($f);
    /* compression      */  R32($f);
    /* imagesize        */  R32($f);
    /* xresolution      */  R32($f);
    /* yresolution      */  R32($f);
    /* ncolors          */  R32($f);
    /* importantcolors  */  R32($f);

    if ($planes != 1) exit("$fname: must have one plane");
    if ($bits   != 8) exit("$fname: must have 256 indexed colors");


    // ------------
    // READ PALETTE
    // ------------

    for ($i = 0; $i < 256; ++$i) {
        $palette[$i] = R32($f);
    }


    // -----------
    // READ PIXELS
    // -----------

    // Pixel rows always are stored in multiples of four bytes.
    // Round "width" up to next multiple of 4.
    $rounded_width = ($width + 3) & ~3;

    // To save memory, represent each column as a character string instead
    // of an array of ints.  Note that a string represents a *column* of
    // pixels so that the first index will be "x", and the second index
    // will be "y", as in $a[$x][$y].
    for ($x = 0; $x < $rounded_width; ++$x) {
        $a[$x] = "xxxxxxxxx";  // force string representation
    }

    for ($y = 0; $y < $height; ++$y) {
        for ($x = 0; $x < $rounded_width; ++$x) {
            $a[$x][$y] = C8($f);
        }
    }
}


function plot_segments(&$a, &$height, &$width, &$palette, &$dbcnx) {

    // KLUDGE:  Repurpose the two least used colors of palette[].
    // WARNING:  the colors of some existing pixels will change.

    for ($i = 0; $i < 256; ++$i) $num_pixels[$i] = 0;

    for ($y = 0; $y < $height; ++$y) {
        for ($x = 0; $x < $width; ++$x) {
            ++$num_pixels[ord($a[$x][$y])];
        }
    }

    $index1             = 0;
    $index2             = 0;
    $index3             = 0;
    $lowest_pixel_count = $num_pixels[$index1];

    for ($i = 1; $i < 256; ++$i) {
        if ($num_pixels[$i] < $lowest_pixel_count) {
            $index3              = $index2;
            $index2              = $index1;
            $index1              = $i;
            $lowest_pixel_count = $num_pixels[$index1];
        }
    }

    // Usability:  best colors on this map for color-blind individuals.
    // These colors contrast well on the www.vischeck.com color simulations.
    $palette[$index1] = 0x00ffffff;  // White
    $palette[$index2] = 0x000037ff;  // Blue
    $palette[$index3] = 0x00ffff00;  // Yellow


    $SQL = <<<_SQL_
select p1.x as x1, p1.y as y1, p2.x as x2, p2.y as y2
from segments s, points p1, points p2
where s.pointid1 = p1.pointid
and   s.pointid2 = p2.pointid

_SQL_;

    $result = @mysql_query($SQL);

    if (!$result) {
        internal_error(__FILE__, __LINE__);
    } else {
        while ($row = mysql_fetch_array($result)) {
            $x1 = $row['x1'];
            $y1 = $row['y1'];
            $x2 = $row['x2'];
            $y2 = $row['y2'];

            // plot a line parametrically
            $x = $x1;
            $y = $y1;

            $dx = $x2 - $x1;
            $dy = $y2 - $y1;

            $n  =  max(abs($dx), abs($dy));
            $dx /= $n;
            $dy /= $n;

            for ($i = 1; $i <= $n; ++$i) {
                // start relative width $w at 1.0 and decrease towards 0.0
                $w = 5 * ($n - $i + 1) / $n;

                for ($wx = -$w; $wx <= $w; ++$wx) {
                    for ($wy = -$w; $wy <= $w; ++$wy) {
                        $a[$x + $wx][$y + $wy] = chr($index2);
                    }
                }

                $x += $dx;
                $y += $dy;
            }
        }
    }


    $SQL = <<<_SQL_
select x, y, selected
from markers m, points p
where m.pointid = p.pointid

_SQL_;

    $result = @mysql_query($SQL);

    if (!$result) {
        internal_error(__FILE__, __LINE__);
    } else {
        while ($row = mysql_fetch_array($result)) {
            $x          = $row['x'];
            $y          = $row['y'];
            $selected   = $row['selected'];

            // plot a target
            for ($dy = -18; $dy < 18; ++$dy) {
                for ($dx = -18; $dx < 18; ++$dx) {
                    $r = sqrt($dx * $dx + $dy * $dy);

                    // Background color
                    $index = $selected ? $index3 : $index1;

                    if ($r <= 18.1 || $selected) {
                        if ($r <= 17.2) {
                            // inner rings
                            if ((floor($r / 3)) % 2 != 0) {
                                $index = $index2;
                            }
                        } else if ($r <= 18.1) {
                            // outer blue ring
                            $index = $index2;
                        } else {
                            // show corners of background square
                        }

                        $a[$x + $dx][$y + $dy] = chr($index);
                    }
                }
            }
        }
    }
}


// -------------------------
// Log into the BTS database
// -------------------------

function open_database(&$dbcnx) {
    global $hostname, $username, $password, $database;

    $dbcnx = @mysql_connect($hostname, $username, $password);

    if (!$dbcnx) {
        exit('<p>Database error 1.</p>');
    }

    if (!@mysql_select_db($database, $dbcnx)) {
        exit('<p>Database error 3.</p>');
    }
    return $dbcnx;
}


open_database($dbcnx);
read_bmp($a, $height, $width, $palette, $fname);
plot_segments($a, $height, $width, $palette, $dbcnx);
write_bmp($a, $height, $width, $palette);

?>
