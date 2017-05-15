/**************************************************************************

    File:           Agent.h

    Class:          Agent

    Description:    Store all info needed for an agent to anneal its
                    state.

    Methods:        None.

**************************************************************************/

class Agent
{
public:
    Agent(State _S, double _temp)
    {
        S       = _S;
        S_best  = _S;
        T       = Temperature(_temp);

        stats_utility.clear();
        utility_best        = 0;
        time                = 0;
        num_cycles_at_temp  = 0.0;
    };

    State       S;
    State       S_best;
    Statistics  stats_utility;
    int         utility_best;
    int         time;
    double      num_cycles_at_temp;
    Temperature T;
};

