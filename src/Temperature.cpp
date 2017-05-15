/**************************************************************************

File:           Temperature.cpp

Class:          Temperature

Description:    See Tempereature.h

**************************************************************************/

#include <math.h>
#include <stdio.h>

#include "Statistics.h"
#include "Temperature.h"


/**************************************************************************

    Function:       next_huang()
  
    Purpose:        Compute the next temperature step based on
                    Huang, Romeo, and Sangiovanni-Vincentelli, "An
                    Efficient General Cooling Schedule for Simulated
                    Annealing", ICCAD-86.

                    Normally, just update T based on lambda and sigma, but
                    at some point, identify that it's time to freeze the
                    system, and then set the temperature to 0.

                    Freezing is identified by comparing the range of
                    utility to its largest change.  If equal, then set T =
                    0.

                    lambda <= 1.0   Controls the rate of utility change.
                                    Try lambda = 0.7

                    sigma           Ss the measured standard deviation of
                                    utility.

**************************************************************************/

void Temperature::next_huang(double lambda, Statistics stats_utility)
{
    double prev_T = T;

    stats_utility.print();

    // Do we meet the freezing condition from p. 383, section (D) of article?
    if (stats_utility.x_max() - stats_utility.x_min() ==
        stats_utility.diff_max())
    {
        T = 0.0;
    }
    else 
    {
        // Use the standard deviation of utility
        // to compute the temperature change.
        double sigma = stats_utility.standard_deviation();
        double T_next = T * exp(-lambda * T / sigma);

        // exp(-something / 0.0) == 0.0, but I don't know if
        // this is true in C++.  So force this result here.
        if (sigma == 0.0)
        {
            T = 0.0;
        }
        else
        {
            // No need to worry about special case.
            if (T_next < 0.5 * T)
            {
                // Prevent drastic decrease from flat annealing curve.
                T = 0.5 * T;
            }
            else
            {
                T = T_next;
            }
        }
    }

    printf("T: %f --> %f\n", prev_T, T);
}


