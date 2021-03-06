
/******************************************************************************



File:       ts.cpp
Purpose:    Tabu Search algorithm
Author:     Naishil Shah
	    Sanjay Krishna Gouda
>>>>>>> 01cabb93c0e2e2dc8207067badf1a18c3b59eaff

-------------------
Simulated Annealing
-------------------
We retain some of the functions in the Simulate Annealing (sa.cpp and sa.h) algorithm by Keery Veenstra

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
#include "sa.h"
}
using namespace std;
//intializing the tabu list
    
/*vector< pair<int,int>> tabu_list{};
    
tabu_list.push_back(make_pair(*S.pi,*S.pj)); //adding initial states to the tabu list
*/

/*TRYING TWO ARRAY METHOD FOR TABU LIST

int* new_arr=new int[new_size];
copy(oldArr,oldArr+min(oldSize,newSize),newArr);
delete[] oldArr;
oldArr=newArr;
*/

int oldSize=200;

int* tabu_list_i = (int *)malloc(oldSize); 
int* tabu_list_j = (int *)malloc(oldSize);


int* tabu_first=NULL;
int* tabu_second=NULL;



// Merge agents' states with other agents that are in
// communication range.  We're going to use a simple
// O(n^2) algorithm.

// Agent x stores its own state in the x'th position
// of its state vector.  We copy this information to the
// x'th position of other agents that are in communication
// range.
void sa_communicate_locations
(
    vector<Agent> &agents,
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
*/
Statistics ts_metropolis_loop
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

    	if (use_distributed_algorithm)
    {
        // Select specified agent.
        k                   = forced_k;
        exploration_region  = Disk(S.pi[k], S.pj[k], exploration_radius_max);
    }
        
    else
    {	
    	// Select random agent.
    	k                   = ge_rand_uniform_int(0, S.num_viewpoints - 1);
        exploration_region  = Disk(0, 0, INFINITE_RADIUS);

        int last = 1; //created this as last index of array of states
        int i =0;
    }




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


        bool tabu; //for indication whether tabu or not
		int count=1;
		int i=0;	
	//  C H E C K I N G I F T H E N O D E W A S V I S I T E D
        for(i=0; i<=sizeof(tabu_list_i)/sizeof(int);++i){
        	if((tabu_list_i[i]==*S_new.pi) && (tabu_list_j[i]==*S_new.pj)){
        		tabu=true;
        		break;
        	}
        	else
        		tabu=false;
        }


        /*//checking if S_new exists in tabu list
        for(auto &i : tabu_list){

        	//if (make_pair(S_new.pi,S_new.pj)==tabu_list<(i.first,i.second)>)
        	if (*S_new.pi==i.first && *S_new.pj==i.second){
        		tabu = true;
        		break;
        	}
        	else {

        		tabu = false;}

        }*/

        if (tabu==true)
        {
        	int utility_tabu     = cvis_wang_malloc_count(&v, &z, srtm,
                                     S_new.num_viewpoints,
                                     S_new.pi, S_new.pj, S_new.pcommunicating,
                                     sensor_radius_max,
                                     viewpoint_height_above_terrain);

        	if (utility_tabu > utility_best)
            {
                S_best       = S_new;
                utility_best = utility_tabu;
            }
        	goto l1;
        	//AC checking to be done here
        }
        else
        {
        	 //tabu_list.push_back(make_pair(*S_new.pi,*S_new.pj));

        	if (i==oldSize)
        	{
        		/*//int newSize = oldSize*2;
				int* tabu_first=new int[newSize];
				copy(tabu_list_i,oldSize,tabu_first);
				//delete[] tabu_list_i;
				//for(int j=0;j<=sizeof(tabu_list_i)/sizeof(int);++j) tabu_first[j]=tabu_list_i[j];

				int* tabu_second=new int[newSize];
				copy(tabu_list_j,tabu_list_j+oldSize,tabu_second);
				//delete[] tabu_list_j;
				//for(int j=0;j<=sizeof(tabu_list_j)/sizeof(int);++j) tabu_list_j[j]=tabu_second[j];
				//tabu_list_j=tabu_second;*/

        		count++;
        		
        		tabu_first = (int *)realloc(tabu_list_i, sizeof(tabu_list_i)*sizeof(int));
        		tabu_list_i = tabu_first;
        		//tabu_list_i[sizeof(tabu_list_i)-1]=tabu_first


        		tabu_second = (int *)realloc(tabu_list_j, sizeof(tabu_list_j)*sizeof(int));
        		tabu_list_j = tabu_second;



        	}

        	else
        	{
             tabu_list_i[i]=*S_new.pi;
             tabu_list_j[i]=*S_new.pj;
			}
             int utility_new     = cvis_wang_malloc_count(&v, &z, srtm,
                                     S_new.num_viewpoints,
                                     S_new.pi, S_new.pj, S_new.pcommunicating,
                                     sensor_radius_max,
                                     viewpoint_height_above_terrain);

            //int delta_utility   = utility_new - utility;

            if (utility_new > utility
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


    l1:    M = M - 1;
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
int ts_centralized
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
    


    const int k = 20;        


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


    // Add the initial S into the tabu_list
    tabu_list_i[0] = *S.pi; 
    tabu_list_j[0] = *S.pj; 

    printf("Initial tabu I = %d\n", tabu_list_i[0]);

    // The simulated-annealing loop:
    State   S_best              = S;
    int     utility_best        = utility;
    int     time                = 0;
    double  num_cycles_at_temp  = M_initial;

    // Determine an initial temperature that is based on sigma.

    Temperature T(INFINITE_TEMPERATURE);   // Accept all generated states.


    Statistics stats_utility =
        ts_metropolis_loop(S, utility, S_best, utility_best,
                           T.current(), (int) num_cycles_at_temp,
                           sensor_radius_max, viewpoint_height_above_terrain,
                           jump_radius_max,
                           exploration_radius_max);

    T = Temperature(k * stats_utility.standard_deviation());


    // Now anneal.

    do
    {
        stats_utility = ts_metropolis_loop(S, utility, S_best, utility_best,
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

int ts_simulated_annealing_distributed
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
            ts_metropolis_loop(a.S,
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
            a.stats_utility = ts_metropolis_loop(a.S,
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

extern "C" int ts_simulated_annealing
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
        return ts_simulated_annealing_distributed
        (
            temp_initial, S, sensor_radius_max,
            viewpoint_height_above_terrain, jump_radius_max,
            exploration_radius_max, communication_radius_max,
            alpha, beta, lambda, M_initial, time_max
        );
    }
    else
    {
        return ts_centralized
        (
            temp_initial, S, sensor_radius_max,
            viewpoint_height_above_terrain, jump_radius_max,
            exploration_radius_max, communication_radius_max,
            alpha, beta, lambda, M_initial, time_max
        );
    }
}
