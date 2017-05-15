/**************************************************************************

File:           ge.h

Description:    Some general-purpose utility functions.

Global Functions:

                ge_rand_uniform_double01()      0 < rand_value < 1
                ge_rand_uniform_int(v1, v2)     v1 <= rand_value <= v2

**************************************************************************/

#include <stdlib.h>

#include "ge.h"

/**************************************************************************

Initialize Random Number Generator

Initialize the main random number generator with an integer seed.
By default, the main random number generator is initialized with 1.

**************************************************************************/
void ge_srand(unsigned int seed)
{
    srand(seed);
}


/**************************************************************************

Random Number Generator

Return Type:        int
Return Range:       1 .. RAND_MAX - 1

We define ge_rand() like this because some implementations of rand()
do not return 0, and some do not return RAND_MAX.  In this way we know
what the range will be.

**************************************************************************/
int ge_rand()
{
    int r;

    do
    {
        r = rand();
    } while (r < 1 || r > RAND_MAX - 1);

    return r;
}


/**************************************************************************

Random Number Generator

Return Type:        double
Return Range:       v1 .. v2

Since ge_rand() returns between 1 and RAND_MAX - 1, we need to map

    1            --> v1
    RAND_MAX - 1 --> v2

**************************************************************************/
double ge_rand_uniform_double(double v1, double v2)
{
    return v1 + (v2 - v1) * (ge_rand() - 1) / (RAND_MAX - 2);
}


/**************************************************************************

Random Number Generator

Return Type:        int
Return Range:       v1 .. v2    (v1 < v2 < RAND_MAX)

                    The range of ge_rand() is wrapped into v1 .. v2.
                    To avoid a non-uniform distribution, the tail of the
                    ge_rand() range is ignored.

                    0 .. d-1
                    ######## 1
                    ######## 2
                    ######## ...
                    ######## m
                    ###      m+1

**************************************************************************/
int ge_rand_uniform_int(int v1, int v2)
{
    int n;

    // Ensure uniformity.
    int d = v2 - v1 + 1;
    int m = (RAND_MAX - 1) / d;
    int max_allowed_rand_value = m * d - 1;

    if (m < 1)
    {
        return v1 + (ge_rand() - 1) % (v2 - v1 + 1);
    }
    else
    {
        do
        {
            n = ge_rand() - 1;
        } while (n > max_allowed_rand_value);

        return v1 + n % d;
    }
}


