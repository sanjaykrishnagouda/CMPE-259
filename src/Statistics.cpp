/**************************************************************************

File:           Statistics.cpp

Class:          Statistics

Description:    Compute and return several statistics for a sequence
                of integers:  standard devation, min, max, and largest
                absolute change.

                Rather than storing all of the values to compute the
                standard deviation, use the equations

                    E[x]                = sum(x) / n
                    E[x^2]              = sum(x^2) / n
                    standard deviation  = sqrt(E[x^2] - (E[x])^2)

Methods:        clear()
                summation(int x)
                standard_deviation()
                print()

**************************************************************************/

#include <limits>

#include <math.h>
#include <stdio.h>

#include "ge.h"
#include "Statistics.h"


void Statistics::clear()
{
    n       = 0;
    sum_x   = 0;
    sum_x2  = 0;
    _x_max   = INT_MIN;
    _x_min   = INT_MAX;
    _diff_max= INT_MIN;
}


void Statistics::summation(int x)
{
    ++n;
    sum_x  += x;
    sum_x2 += (long long) x * x;

    if (x > _x_max) _x_max = x;
    if (x < _x_min) _x_min = x;

    if (n > 1)
    {
        int diff_abs = x - x_previous;
        if (diff_abs < 0) diff_abs *= -1;
        if (diff_abs > _diff_max) _diff_max = diff_abs;
    }

    x_previous = x;
}


double Statistics::standard_deviation()
{
    long long E_x  = sum_x  / n;
    long long E_x2 = sum_x2 / n;
    double variance = E_x2 - (E_x * E_x);
    printf("n = %d, E_x = %lld, E_x2 = %lld, variance = %f\n",
           n, E_x, E_x2, variance);
    return sqrt(variance);
}


void Statistics::print()
{
    printf("n=%d, sum_x=%lld, sum_x2=%lld, x_max=%d, x_min=%d, diff_max=%d\n",
        n, sum_x, sum_x2, _x_max, _x_min, _diff_max);
}


