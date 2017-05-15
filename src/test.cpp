#include <stdio.h>
#include <stdlib.h>
#include <string>

using std::string;

/**************************************************************************

Random Number Generator

Return Type:        int
Return Range:       1 .. RAND_MAX - 1

We define ge_rand() like this because some implementations of rand()
do not return 0, and some do not return RAND_MAX.  In this way we know
what the range will be.

**************************************************************************/
int ge_rand()
{
    int r;

    do
    {
        r = rand();
    } while (r < 1 || r > RAND_MAX - 1);

    return r;
}


/**************************************************************************

Random Number Generator

Return Type:        double
Return Range:       v1 .. v2

Since ge_rand() returns between 1 and RAND_MAX - 1, we need to map

    1            --> v1
    RAND_MAX - 1 --> v2

**************************************************************************/
double ge_rand_uniform_double(double v1, double v2)
{
    return v1 + (v2 - v1) * (ge_rand() - 1) / (RAND_MAX - 2);
}


/**************************************************************************

Random Number Generator

Return Type:        int
Return Range:       v1 .. v2

Bugs:               The distribution is not exactly uniform, but this
                    is apparent only when v2 - v1 is close to about
                    RAND_MAX / 100.

**************************************************************************/
int ge_rand_uniform_int(int v1, int v2)
{
    int n;

    // Ensure uniformity.
    int d = v2 - v1 + 1;
    int m = (RAND_MAX - 1) / d;
    int max_allowed_rand_value = m * d - 1;

    if (m < 1)
    {
        return v1 + (ge_rand() - 1) % (v2 - v1 + 1);
    }
    else
    {
        do
        {
            n = ge_rand() - 1;
        } while (n > max_allowed_rand_value);

        return v1 + n % d;
    }
}


int test_rand_double()
{
    double min_v = 1000000000.0;
    double max_v = -1.0;

    for (long i = 1; i < 10000000000; ++i)
    {
        double r = ge_rand_uniform_double(0.0, 100.0);

        if (r < min_v)
        {
            min_v = r;
            printf("%20.16f\n", min_v);
        }

        if (r > max_v)
        {
            max_v = r;
            printf("               %20.16f\n", max_v);
        }
    }

    return 0;
}


int test_rand_int()
{
    int min_v = RAND_MAX;
    int max_v = -RAND_MAX;

    for (long i = 1; i < 10000000000; ++i)
    {
        int r = ge_rand_uniform_int(1, RAND_MAX - 1);

        if (r < min_v)
        {
            min_v = r;
            printf("%x\n", min_v);
        }

        if (r > max_v)
        {
            max_v = r;
            printf("               %x\n", max_v);
        }
    }

    return 0;
}

void create_txt_file(string filename, const char *format, ...)
{
    va_list args;
    va_start(args, format);

    printf("create_txt_file(%s, %s)\n", filename.c_str(), format);

    if (!filename.empty())
    {
        printf("filename is not empty\n");

        FILE *f = fopen(filename.c_str(), "w");

        if (f == NULL)
        {
            printf("Can't create %s\n", filename.c_str());
            exit(1);
        }

        vfprintf(f, format, args);
        fclose(f);
    }

    va_end(args);
}

int main(int argc, char **argv)
{
    string filename("test.txt");
    create_txt_file(filename, "this is a test\n");
    //test_rand_int();
    //test_rand_double();
}

