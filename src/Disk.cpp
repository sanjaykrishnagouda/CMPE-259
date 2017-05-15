/**************************************************************************

File:           Disk.cpp

Class:          Disk

Description:    A circular region and a method that tests whether
                a point is inside the region.

                Note that the object stores radius^2 instead of radius so
                that the radius comparison avoids a call to sqrt().

Methods:        pt_is_inside()

**************************************************************************/

#include <stdio.h>
#include <stdlib.h>

#include "Disk.h"


bool Disk::pt_is_inside(int pt_i, int pt_j)
{
    int di = pt_i - i;
    int dj = pt_j - j;

    return (long) di * di + dj * dj <= r_squared;
}

