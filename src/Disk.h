/**************************************************************************

File:           Disk.h

Class:          Disk

Description:    A circular region and a method that tests whether
                a point is inside the region.

                Note that the object stores radius^2 instead of radius so
                that the radius comparison avoids a call to sqrt().

Methods:        pt_is_inside()

**************************************************************************/

class Disk
{
    public:
        Disk() {};
        Disk(int _i, int _j, int _r)
        {
            i         = _i;
            j         = _j;
            r_squared = (long) _r * _r;
        };
        bool pt_is_inside(int pt_i, int pt_j);
    private:
        int i;
        int j;
        long r_squared;
};


