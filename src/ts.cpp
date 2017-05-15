/*
File:       ts.cpp
Purpose:    Tabu Search algorithm
Author:     Naishil Shah
			Sanjay Krishna Gouda

-------------------
Tabu Search
-------------------
We retain some of the functions in the Simulate Annealing (sa.cpp and sa.h) algorithm by Keery Veenstra.


*/


#include <limits>
#include <vector>

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

extern "C"
{
#include "srtm.h"
#include "cvis_wang.h"
#include "bmp.h"
#include "visibility.h"
}

#include "ge.h"
#include "Disk.h"
#include "State.h"
#include "Statistics.h"
#include "Temperature.h"
#include "Agent.h"

extern "C"
{
#include "ts.h"
}


// Merge agents' states with other agents that are in
// communication range.  We're going to use a simple
// O(n^2) algorithm.

// Agent x stores its own state in the x'th position
// of its state vector.  We copy this information to the
// x'th position of other agents that are in communication
// range.
void sa_communicate_locations
(
    std::vector<Agent> &agents,
    int                 communication_radius_max
)
{
    int a_index = 0;

    for (auto &a : agents)
    {
        int b_index = 0;

        for (auto &b : agents)
        {
            if (a_index != b_index)
            {
                printf("%2d %2d :", a_index, b_index);

                // Is agent b close to agent a?
                double di = b.S.pi[b_index] - a.S.pi[a_index];
                double dj = b.S.pj[b_index] - a.S.pj[a_index];
                int distance = (int) sqrt(di * di + dj * dj);

                if (distance > communication_radius_max)
                {
                    b.S.pcommunicating[a_index] = false;
                }
                else
                {
                    b.S.pcommunicating[a_index] = true;

                    // Copy agent a's position to agent b.
                    printf(" copy position");
                    b.S.pi[a_index] = a.S.pi[a_index];
                    b.S.pj[a_index] = a.S.pj[a_index];
                }

                printf("\n");
            }

            ++b_index;
        }

        ++a_index;
    }
}

