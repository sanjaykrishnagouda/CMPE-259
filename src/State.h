/**************************************************************************

    File:           State.h

    Class:          State

    Description:    This object holds a set of viewpoints.  All of its
                    data fields are public, but it provides a few access
                    methods.

                    The int arrays pi[] and pj[] contain coordinates of
                    viewpoints.  The int num_viewpoints stores the number
                    of valid viewpoints in the array (the greatest valid
                    array index is num_viewpoints - 1).

                    sa_rand_next_state()    Helper function with the wrong
                                            prefix.

    Methods:        delete_viewpoint(k)     Reduce number of viewpoints.
                    print(s)                Send debugging info to stdout.

**************************************************************************/

class State
{
    public:
        int num_viewpoints;                     // TODO Rework as a vector
        int pi[MAX_NUM_VIEWPOINTS];             // TODO Rework as a vector
        int pj[MAX_NUM_VIEWPOINTS];             // TODO Rework as a vector
        bool pcommunicating[MAX_NUM_VIEWPOINTS];    // TODO Rework as a vector
        State() {};
        State(int n, int *pi, int *pj, bool *pcom = NULL);
        void delete_viewpoint(int k);
        void print(const char *prefix);
};


State sa_rand_next_state
(
    State       S,
    int         sensor_radius_max,
    int         jump_radius_max,
    Disk        exploration_region,
    CVIS_WANG  *v,
    bool        force_viewpoint = false,
    int         forced_k = 0
);


