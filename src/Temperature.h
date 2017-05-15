/**************************************************************************

File:           Temperature.h

Class:          Temperature

Description:    This object holds a temperature value for a simulated
                annealing algorithm.  It includes methods to compute the
                next temperature step.

                One method follows the basic rule

                    T_next = T * alpha

                where alpha < 1.0.
                
                The other method is more complicated and considers the
                standard deviation of the utility function.

Methods:        current()
                next_simple()
                next_huang()

**************************************************************************/

class Temperature
{
public:
    Temperature()                       {T = 0.0;}
    Temperature(double T_initial)       {T = T_initial;}
    double current()                    {return T;}
    void next_simple(double alpha)      {T *= alpha;}
    void next_huang(double lambda, Statistics stats_utility);
private:
    double T;
};


