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

Methods:        summation(int x)
                standard_deviation()
                print()

**************************************************************************/

class Statistics
{
public:
    void clear();
    Statistics() {clear();}
    void summation(int x);
    double standard_deviation();
    int diff_max() {return _diff_max;}
    int x_max() {return _x_max;}
    int x_min() {return _x_min;}
    void print();
private:
    int         n;
    long long   sum_x;
    long long   sum_x2;
    int         _x_max;
    int         _x_min;
    int         _diff_max;
    int         x_previous;
};


