The county boundary data is held in three files.  The .dbf file is a
database file that lists counties and associated data.  One only needs to
know the index of the county of interest in this file (starting with 1).
Given this index, then one looks for the corresponding shape in the .shp
file.  One may find the shape more quickly using teh .shx index file.

co1980p020.dbf  - attribute format, dBase IV format
co1980p020.shp  - feature geometries
co1980p020.shx  - index


----------------
.dbf File Format
----------------

The file is in dBase IV format, but we don't need most of the data.  We
need just the record ID.  Find it using this procedure:

1. Create a hex dump of the .dbf file with "od -a".
2. In the hex dump find the county name.
3. Immediately before the county name is a two-character state code.
4. Immediately before the state code is the record ID + 1.

Example:  In the text dump one sees

1452120   sp   3   7   7   0   C   A   S   a   n   t   a  sp   C   r   u
1452140    z  sp   C   o   u   n   t   y  sp  sp  sp  sp  sp  sp  sp  sp

Interpreting the first line, the record ID is 3769:

1452120   sp   3   7   7   0   C   A   S   a   n   t   a  sp   C   r   u
               ^^^^^^^^^^^^^   ^^^^^   ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
               Record ID + 1   State             County Name
                               Code


----------------
.shp File Format
----------------

Find the coordinates of the desired county's boundary using this procedure:

1. Create a hex dump of the .shp file using od.

   Example:  od -A x -t x1 co1980p020.shp > co1980p020.shp.hex

2. Convert the record ID into hex.

   Example:  3769 = 0x00000eb9.

3. Find this value in the hex dump.  Be sure that this you find the record
   ID and not another value.  Perhaps confirm that the previous record ID
   is before the one that you find.

   07d7050    0e  a4  42  40  00  00  0e  b9  00  00  0a  f0  05  00  00  00
                              ^^^^^^^^^^^^^^
                                Record ID

4. Once you have the record ID located, the data points are easy to find
   relative to it:

   4 bytes      record ID
   44 bytes     (skip)
   4 bytes      N = number of points in big-endian format
   4 bytes      (skip)
   2*N bytes    array of points, two 8-byte doubles per point, little endian.

   Example point:

   07d7080    ..  ..  ..  ..  ..  ..  ..  ..  ..  ..  ..  ..  00  00  00  00
                                                              ^^^^^^^^^^^^^^
                                                                longitude
   07d7090    e9  92  5e  c0  00  00  00  00  a2  8d  42  40  ..  ..  ..  ..
              ^^^^^^^^^^^^^^  ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
                longitude                latitude

