/*
File:       ts.cpp
Purpose:    Tabu Search algorithm
Author:     Naishil Shah
	    Sanjay Krishna Gouda

-------------------
Tabu Search
-------------------

*/


//  Description:    Simulated Annealing Algorithm
//

#define INFINITE_TEMPERATURE    999999
#define INFINITE_RADIUS         999999


int ts_simulated_annealing
(
    int     temp_initial,
    State  &S,                          // initial state (initial viewpoints)
    int     sensor_radius_max,
    int     viewpoint_height_above_terrain,
    int     jump_radius_max,
    int     exploration_radius_max,
    int     communication_radius_max,
    double  alpha,
    double  beta,
    double  lambda,
    int     M_initial,
    int     time_max,
    bool    use_distributed_algorithm,
    const char *bmp_sequence_basename
);