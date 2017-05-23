<<<<<<< HEAD
/******************************************************************************


/*
File:       ts.cpp
Purpose:    Tabu Search algorithm
Author:     Naishil Shah
	    Sanjay Krishna Gouda
>>>>>>> 01cabb93c0e2e2dc8207067badf1a18c3b59eaff

-------------------
Simulated Annealing
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
#include "sa.h"
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

<<<<<<< HEAD
We use the Simulated Annealing Algorithm as described in Chapter 2 of Sait
and Youssef [1].  We follow the algorithm listing on p. 54 directly, except
for the cooling schedule.  Instead of using the simple cooling schedule, we
use the dynamic temperature and Markov-chain length adjuster from Section
2.4.3.


----------------
Tabu List
----------------


******************************************************************************/

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
#include "sa.h"
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

/*
//  Function:       sa_metropolis_loop
//
//  Description:    Inner loop of a Simulated Annealing algorithm.
//
//                  Given references to the system's current and best
//                  states, anneal at temperature T for M times.
//
//                  From p. 54 of Sait and Youssef's book "Iterative
//                  Computer Algorithms with Applications in Engineering:
//                  Solving Combinatorial Optimization Problems", ISBN
//                  0-7695-0100-1.
//
Statistics sa_metropolis_loop
(
    State  &S,
    int    &utility,
    State  &S_best,
    int    &utility_best,
    double  T,
    int     M,
    int     sensor_radius_max,
    int     viewpoint_height_above_terrain,
    int     jump_radius_max,
    int     exploration_radius_max,
    bool    use_distributed_algorithm = false,
    int     forced_k                  = 0       // if using dist. algo.
)
{
    Disk        exploration_region;
    int         k;
    Statistics  stats_utility;


        // Select random agent.
        k                   = ge_rand_uniform_int(0, S.num_viewpoints - 1);
        exploration_region  = Disk(0, 0, INFINITE_RADIUS);

        int last = 1; //created this as last index of array of states
        int i =0;

    do
    {
        // Generate a state and check its utility.
        State S_new = sa_rand_next_state(S,
                                         sensor_radius_max,
                                         jump_radius_max,
                                         exploration_region,
                                         v,
                                         use_distributed_algorithm,
                                         k);

        list[i] = S_new;
        int tabu = 0; //for indication whether tabu or not

        for (int i=0; i< l; i++)
        {
            if list[i] == S_new
            tabu = 1;
        }

        if (tabu == 1)
        {
            //write aspiration criteria
        }
        else
        {

            int utility_new     = cvis_wang_malloc_count(&v, &z, srtm,
                                     S_new.num_viewpoints,
                                     S_new.pi, S_new.pj, S_new.pcommunicating,
                                     sensor_radius_max,
                                     viewpoint_height_above_terrain);
*/
            //int delta_utility   = utility_new - utility;

            if (utility_new > utility ||
                /*(
                 T > 0.0 &&
                 ge_rand_uniform_double(0.0, 1.0) < exp(delta_utility / T)
             )*/
               )
            {
                //printf("accept delta_utility %7d utility %7d T %5.0f M %5d k %2d\n",
                //       delta_utility, utility_new, T, M, k);

                S       = S_new;
                utility = utility_new;
            }

            stats_utility.summation(utility);

            if (utility_new > utility_best)
            {
                S_best       = S_new;
                utility_best = utility_new;
            }
        }


        M = M - 1;
    } while (M > 0);

    return stats_utility;
}


/**************************************************************************
Purpose:    Evolve the positions of several viewpoints by simulated
            annealing.  Use a utility function that tends to maximize the
            total number of map pixels that are visible to any of the
            viewpoints.

            Simulate a centralized algorithm:  Optimize the locations of
            all viewpoints.  This approach is closest to classic simulated
            annealing.  It should give the best results.

            Original algorithm from p. 54 of Sait and Youssef's book
            "Iterative Computer Algorithms with Applications in
            Engineering: Solving Combinatorial Optimization Problems", ISBN
            0-7695-0100-1.

Returns:    Utility of final configuration.
**************************************************************************/
int sa_simulated_annealing_centralized
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
    int     time_max
)
{
    const int k = 20;   // Recommended value from reference.

    printf("temp_initial = %d\n", temp_initial);
    printf("sensor_radius_max = %d\n", sensor_radius_max);
    printf("jump_radius_max = %d\n", jump_radius_max);
    printf("exploration_radius_max = %d\n", exploration_radius_max);
    printf("alpha = %f\n", alpha);
    printf("beta = %f\n", beta);
    printf("M_initial = %d\n", M_initial);
    printf("time_max = %d\n", time_max);

    // Initialize v and compute utility.
    int utility = cvis_wang_malloc_count(&v, &z, srtm,
                      S.num_viewpoints, S.pi, S.pj, S.pcommunicating,
                      sensor_radius_max,
                      viewpoint_height_above_terrain);

    printf("utility = %d\n", utility);

    // The simulated-annealing loop:
    State   S_best              = S;
    int     utility_best        = utility;
    int     time                = 0;
    double  num_cycles_at_temp  = M_initial;

    // Determine an initial temperature that is based on sigma.

    Temperature T(INFINITE_TEMPERATURE);   // Accept all generated states.

    Statistics stats_utility =
        sa_metropolis_loop(S, utility, S_best, utility_best,
                           T.current(), (int) num_cycles_at_temp,
                           sensor_radius_max, viewpoint_height_above_terrain,
                           jump_radius_max,
                           exploration_radius_max);

    T = Temperature(k * stats_utility.standard_deviation());


    // Now anneal.

    do
    {
        stats_utility = sa_metropolis_loop(S, utility, S_best, utility_best,
                           T.current(), (int) num_cycles_at_temp,
                           sensor_radius_max, viewpoint_height_above_terrain,
                           jump_radius_max,
                           exploration_radius_max);

        time                += num_cycles_at_temp;
        num_cycles_at_temp  *= beta;

        if (T.current() == 0.0) break;

        T.next_huang(lambda, stats_utility);
    } while (time < time_max);

    S = S_best;

    // Oops.  We've been saving the best S seen, but we've not been
    // maintaining the best v.  Restore v to match the best S.
    utility = cvis_wang_malloc_count(&v, &z, srtm,
                   S.num_viewpoints, S.pi, S.pj, S.pcommunicating,
                   sensor_radius_max, viewpoint_height_above_terrain);

    return utility;
}


/**************************************************************************
Purpose:    Evolve the positions of several viewpoints by simulated
            annealing.  Use a utility function that tends to maximize the
            total number of map pixels that are visible to any of the
            viewpoints.

            Emulate a distributed algorithm:  Each node optimizes its own
            state individually, assuming that all other nodes are
            stationary.  However if the node can communicate with any
            nearby nodes, then it will consider the states of those nodes
            (their simulated locations) after each Metropolis loop.  The
            nature of internode communication is limited to the node's
            portion of its state vector.  Each node computes its own
            annealing schedule.

            Original algorithm from p. 54 of Sait and Youssef's book
            "Iterative Computer Algorithms with Applications in
            Engineering: Solving Combinatorial Optimization Problems", ISBN
            0-7695-0100-1.

Returns:    Utility of final configuration.
**************************************************************************/
int sa_simulated_annealing_distributed
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
    int     time_max
)
{
    const int k = 20;   // Recommended value from reference.

    printf("temp_initial = %d\n", temp_initial);
    printf("sensor_radius_max = %d\n", sensor_radius_max);
    printf("jump_radius_max = %d\n", jump_radius_max);
    printf("exploration_radius_max = %d\n", exploration_radius_max);
    printf("alpha = %f\n", alpha);
    printf("beta = %f\n", beta);
    printf("M_initial = %d\n", M_initial);
    printf("time_max = %d\n", time_max);

    int utility;
    int utility_best;

    int time = 0;


    // Create an agent for each viewpoint.
    std::vector<Agent> agents;

    for (int i = 0; i < S.num_viewpoints; ++i)
    {
        agents.push_back(Agent(S, INFINITE_TEMPERATURE));
    }

    sa_communicate_locations(agents, communication_radius_max);


    // For each agent, determine an initial temperature that is based
    // on sigma.
    int a_index = 0;

    for (auto &a : agents)
    {
        utility = cvis_wang_malloc_count(&v, &z, srtm,
                          a.S.num_viewpoints, a.S.pi, a.S.pj,
                          a.S.pcommunicating,
                          sensor_radius_max,
                          viewpoint_height_above_terrain);

        printf("agent = %d, utility = %d\n", a_index, utility);

        a.S_best              = a.S;
        a.utility_best        = utility;
        a.num_cycles_at_temp  = M_initial;

        // Accept all generated states.
        a.T = Temperature(INFINITE_TEMPERATURE);

        a.stats_utility =
            sa_metropolis_loop(a.S,
                               utility,
                               a.S_best,
                               a.utility_best,
                               a.T.current(),
                               (int) a.num_cycles_at_temp,
                               sensor_radius_max,
                               viewpoint_height_above_terrain,
                               jump_radius_max,
                               exploration_radius_max,
                               true,    // use_distributed_algorithm
                               a_index);

        // Compute an initial temperature.
        a.T = Temperature(k * a.stats_utility.standard_deviation());

        ++a_index;
    }


    //
    // Now anneal.
    //

    do
    {
        // Anneal each agent for *one* Metropolis loop.
        a_index = 0;

        for (auto &a : agents)
        {
            a.stats_utility = sa_metropolis_loop(a.S,
                                  utility,
                                  a.S_best,
                                  a.utility_best,
                                  a.T.current(),
                                  (int) a.num_cycles_at_temp,
                                  sensor_radius_max,
                                  viewpoint_height_above_terrain,
                                  jump_radius_max,
                                  exploration_radius_max,
                                  true,    // use_distributed_algorithm
                                  a_index);

            a.time                  += a.num_cycles_at_temp;
            a.num_cycles_at_temp    *= beta;

            ++a_index;
        }


        // Agents have moved.
        sa_communicate_locations(agents, communication_radius_max);


        // Merge all of the agents' S's into S.
        a_index = 0;

        for (auto &a : agents)
        {
            S.pi[a_index] = a.S.pi[a_index];
            S.pj[a_index] = a.S.pj[a_index];

            ++a_index;
        }


        // Compute the utility of the merged state.
        utility_best = cvis_wang_malloc_count(&v, &z, srtm,
                            S.num_viewpoints, S.pi, S.pj, S.pcommunicating,
                            sensor_radius_max,
                            viewpoint_height_above_terrain);


        // Terminate loop if all agents are frozen.
        bool all_agents_are_frozen = true;

        for (auto &a : agents)
        {
            if (a.T.current() > 0.0) all_agents_are_frozen = false;
        }

        if (all_agents_are_frozen) break;


        // Compute agents' next temperatures and advance global time.
        for (auto &a : agents)
        {
            a.T.next_huang(lambda, a.stats_utility);

            if (time < a.time)
            {
                time = a.time;
            }
        }

    } while (time < time_max);

    return utility_best;
}

/**************************************************************************
Purpose:    Evolve the positions of several viewpoints by simulated
            annealing.  Use a utility function that tends to maximize the
            total number of map pixels that are visible to any of the
            viewpoints.

            You can direct this algorithm to proceed in either of two ways.

            (1) Emulate a centralized algorithm:  Optimize the locations of
                all viewpoints.  This approach is closest to classic
                simulated annealing.  It should give the best results.

            (2) Emulate a distributed algorithm:  Each node optimizes
                its own state individually, assuming that all other nodes
                are stationary.  However if the node can communicate with
                any nearby nodes, then it will consider the states of those
                nodes (their simulated locations) after each Metropolis
                loop.  The nature of internode communication is limited to
                the node's portion of its state vector.  Each node computes
                its own annealing schedule.

            Original algorithm from p. 54 of Sait and Youssef's book
            "Iterative Computer Algorithms with Applications in
            Engineering: Solving Combinatorial Optimization Problems", ISBN
            0-7695-0100-1.

Returns:    Utility of final configuration.
**************************************************************************/
extern "C" int sa_simulated_annealing
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
)
{
    if (use_distributed_algorithm)
    {
        return sa_simulated_annealing_distributed
        (
            temp_initial, S, sensor_radius_max,
            viewpoint_height_above_terrain, jump_radius_max,
            exploration_radius_max, communication_radius_max,
            alpha, beta, lambda, M_initial, time_max
        );
    }
    else
    {
        return sa_simulated_annealing_centralized
        (
            temp_initial, S, sensor_radius_max,
            viewpoint_height_above_terrain, jump_radius_max,
            exploration_radius_max, communication_radius_max,
            alpha, beta, lambda, M_initial, time_max
        );
    }
}
int ts_tabu_search()
{}
=======
>>>>>>> 01cabb93c0e2e2dc8207067badf1a18c3b59eaff
