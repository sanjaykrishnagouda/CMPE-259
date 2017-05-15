/**************************************************************************

File:           ge.h

Description:    Some general-purpose utility functions.

Global Functions:

                double ge_rand_uniform_double()      0 < rand_value < 1
                int    ge_rand_uniform_int()         v1 <= rand_value <= v2
                void   ge_srand(unsigned int seed)

**************************************************************************/

#ifndef INT_MAX
#define INT_MAX std::numeric_limits<int>::max()
#endif

#ifndef INT_MIN
#define INT_MIN std::numeric_limits<int>::min()
#endif

double ge_rand_uniform_double(double v1, double v2);
int ge_rand_uniform_int(int v1, int v2);
void ge_srand(unsigned int seed);

