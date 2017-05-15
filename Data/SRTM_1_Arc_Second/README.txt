============================================
SRTM (Shuttle Radar Topography Mission) Data
============================================

This document describes how to use *.hgt (height) files.

by Kerry Veenstra


------------
File Purpose
------------

SRTM One-Arc-Second topography files contain the elevation in meters of
1-arc-second tiles in the United States.  Each file has elevation data for
3,601 rows of 3,601 tiles each, for a total of 12,967,201 data values.


-------------
File Location
-------------

Files that contain 1-arc-second data are available from a USGS web site.
The data is organized into seven directories based on the region number
found in this key:

http://dds.cr.usgs.gov/srtm/version2_1/SRTM1/Region_definition.jpg


Region                         Directory
------   ------------------------------------------------------
  1      http://dds.cr.usgs.gov/srtm/version2_1/SRTM1/Region_01
  2      http://dds.cr.usgs.gov/srtm/version2_1/SRTM1/Region_02
  3      http://dds.cr.usgs.gov/srtm/version2_1/SRTM1/Region_03
  4      http://dds.cr.usgs.gov/srtm/version2_1/SRTM1/Region_04
  5      http://dds.cr.usgs.gov/srtm/version2_1/SRTM1/Region_05
  6      http://dds.cr.usgs.gov/srtm/version2_1/SRTM1/Region_06
  7      http://dds.cr.usgs.gov/srtm/version2_1/SRTM1/Region_07


Each SRTM filename indicates the longitude and latitude of the lower-left
corner of the segment.  For example, UCSC is found on two one-degree
segments covering W123 to W122 and N36 to N38.  Santa Cruz county contains
the point North 37, West 122 (about 200 feet from the softball fields of
DeLaveaga Park), and so one needs to use four SRTM tiles to cover the
entire county.


                  Longitude     Longitude     Longitude
                  West 123      West 122      West 121
                      |             |             |
Latitude  North 38 ---|-------------|-------------|---
                      |             |             |
                      |             |             |
                      | N37W123.hgt | N37W122.hgt |
                      |             |             |
                      |*            |*            |
Latitude  North 37 ---|-------------|-------------|---
                      |             |             |
                      |             |             |
                      | N36W123.hgt | N36W122.hgt |
                      |             |             |
                      |*            |*            |
Latitude  North 36 ---|-------------|-------------|---
                      |             |             |


-----------
File Format
-----------

The data values of an SRTM elevation file are stored as 16-bit signed
binary integers in big-endian format.  After fetching a pair of bytes from
an SRTM file, one calculates the elevation value of the corresponding tile
with

        elevation = 256 * first_byte_fetched + second_byte_fetched;

The 12,967,201 data values contained within each file are organized into
several west-to-east rows, with the rows arranged from north to south.
Therefore, the first line of data represents elevations from the file's
northmost border.


-------------------------
Reading an SRTM Data File
-------------------------

The following example of C code demonstrates one way to read the elevation
data from an SRTM file.


    #define MAX_INDEX 3600

    int     elevation_in_meters;
    FILE   *f;
    int     high_byte;
    int     i;
    int     j;
    int     low_byte;

    f = fopen(filename, "rb");

    if (f != NULL)
    {
        /* north to south */
        for (j = MAX_INDEX; j >= 0; --j)
        {
            /* west to east */
            for (i = 0; i <= MAX_INDEX; ++i)
            {
                /* get 16-bit int; big-endian byte order */
                high_byte = getc(f);
                low_byte  = getc(f);

                elevation_in_meters = 256 * high_byte + low_byte;

                /* ADD CODE HERE TO DO SOMETHING WITH THE ELEVATION */

            }
        }

        close(f);                                       
    }
    else
    {
        printf("Error opening %s\n", filename);
        exit(1);
    } 


