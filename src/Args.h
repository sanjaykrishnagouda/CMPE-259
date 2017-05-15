/**************************************************************************

File:           Args.h

Class:          Args

Description:    Record a pointer to the variable that each command-line
                argument affects and then parse argc and argv.

Methods:        These methods define command-line options:

                Method                      Example Command-Line Option
                ----------------------      ---------------------------
                define()                    -p
                                            -p 1
                                            -p 1.0

                define_latlon()             -p 1 2

                define_latlon_vector()      -p 1 2  -p 1 2 ...

                define_window()             -p 1 2 3 4

                define()                    -p abc


                These remaining methods parse the arguments and deal with
                the usage string.

                parse()
                define_usage()
                print_usage()

**************************************************************************/


// Here are the various styles of command-line options
//
enum ARG_OPTION_TYPE                    // Example          Variable Type
{                                       // -----------      -----------------
    ARG_OPTION_TYPE_BOOL,               // -p               bool var = true
    ARG_OPTION_TYPE_DOUBLE,             // -p 1.0           double
    ARG_OPTION_TYPE_INT,                // -p 1             int
    ARG_OPTION_TYPE_LATLON,             // -p 1 2           vector<ArgLatlon>
    ARG_OPTION_TYPE_LATLON_VECTOR,      // ( -p 1 2 )+      vector<ArgLatlon>
    ARG_OPTION_TYPE_STRING,             // -p abc           string
    ARG_OPTION_TYPE_WINDOW              // -p 1 2 3 4       vector<ArgLatlon>
};


class ArgLatlon
{
    public:
        ArgLatlon(double _lat, double _lon)
        {
            lat= _lat;
            lon= _lon;
        }
    public:     // TODO this should be private. Use friends?
        double lat;
        double lon;
};


// Each description object records the command-line argument (like "-v") along
// with a pointer to the variable that records the command-line argument's
// value.
//
// All pointed-to variables are set to initial values.
//
class ArgDescription
{
    public:
        ArgDescription(string _dash, double *_p_d)
        {
            option_type = ARG_OPTION_TYPE_DOUBLE;
            dash        = _dash;
            p_d         = _p_d;

            *p_d        = 0.0;
        }

        ArgDescription(string _dash, int *_p_i)
        {
            option_type = ARG_OPTION_TYPE_INT;
            dash        = _dash;
            p_i         = _p_i;

            *p_i        = 0;
        }

        // _option_type = ARG_OPTION_LATLON, ARG_OPT_LATLON_VECTOR,
        // or ARG_OPTION_WINDOW.
        ArgDescription(string _dash,
                       vector<ArgLatlon> *_p_latlons,
                       ARG_OPTION_TYPE _option_type)
        {
            option_type = _option_type;
            dash        = _dash;
            p_latlons   = _p_latlons;

            p_latlons->clear();
        }

        ArgDescription(string _dash, string *_p_str)
        {
            option_type = ARG_OPTION_TYPE_STRING;
            dash        = _dash;
            p_str       = _p_str;

            *p_str      = "";
        }

        ArgDescription(string _dash, bool *_p_b)
        {
            option_type = ARG_OPTION_TYPE_BOOL;
            dash        = _dash;
            p_b         = _p_b;

            *p_b        = false;
        }

        void debug_print();
    public:
        string                  dash;           // like "-v" or "--output"
        ARG_OPTION_TYPE         option_type;

        union
        {
            double              *p_d;
            int                 *p_i;
            vector<ArgLatlon>   *p_latlons;
            string              *p_str;
            bool                *p_b;
        };
};


class Args
{
    public:
        void define(string dash, double *p_d, double val = 0.0)
        {
            descriptions.push_back(ArgDescription(dash, p_d));
            *p_d = val;
        }

        void define(string dash, int *p_i, int val = 0)
        {
            descriptions.push_back(ArgDescription(dash, p_i));
            *p_i = val;
        }

        void define_latlon(string dash, vector<ArgLatlon> *p_latlons,
                           double lat = 0.0, double lon = 0.0)
        {
            descriptions.push_back(
                ArgDescription(dash, p_latlons, ARG_OPTION_TYPE_LATLON)
            );

            (*p_latlons).push_back(ArgLatlon(lat, lon));
        }

        void define_latlon_vector(string dash, vector<ArgLatlon> *p_latlons)
        {
            descriptions.push_back(
                ArgDescription(dash, p_latlons, ARG_OPTION_TYPE_LATLON_VECTOR)
            );
        }

        void define_window(string dash, vector<ArgLatlon> *p_latlons,
                           double a = 0.0, double b = 0.0,
                           double c = 0.0, double d = 0.0)
        {
            descriptions.push_back(
                ArgDescription(dash, p_latlons, ARG_OPTION_TYPE_WINDOW)
            );

            (*p_latlons).push_back(ArgLatlon(a, b));
            (*p_latlons).push_back(ArgLatlon(c, d));
        }

        void define(string dash, string *p_str, string val = "")
        {
            descriptions.push_back(ArgDescription(dash, p_str));
            *p_str = val;
        }

        void define(string dash, bool *p_b)
                {descriptions.push_back(ArgDescription(dash, p_b));}

        void define_usage(string _usage) {usage = _usage;}
        void print_usage() {printf("%s", usage.c_str()); exit(0);}
        void parse(int argc, char **argv);

        void debug_print()
             {
                 printf("ArgDescriptions:\n");
                 for (auto a : descriptions)
                 {
                     a.debug_print();
                 }
             }
    private:
        vector<ArgDescription>  descriptions;
        string                  usage;
};


#include <cctype>
#include <iostream>
#include <string.h>
#include <cstring>
#include <vector>

#include <stdio.h>

extern "C"
{
#include "msg.h"
}
using namespace std;
using std::string;
using std::vector;

//#include "Args.h"


// After Args::define...() have been called to specify valid command-line
// options, call this method to parse argc/argv into the previosly identified
// variables.
//
void Args::parse(int argc, char **argv)
{
    char   *suffix;
    double  lat, lat_min, lat_max;
    double  lon, lon_min, lon_max;

    if (argc == 1) print_usage();

    for (int i = 1; i < argc; ++i)
    {
        for (auto a : descriptions)
        {
            if (strcmp(a.dash.c_str(), argv[i]) == 0)
            {
                switch (a.option_type)
                {
                    case ARG_OPTION_TYPE_BOOL:
                        // -p
                        *a.p_b = true;
                        break;

                    case ARG_OPTION_TYPE_DOUBLE:
                        // -p 1.0
                        if (i + 1 >= argc)
                        {
                            msg_error("%s option requires a number", argv[i]);
                        }

                        ++i;    // next argv should be a double

                        *a.p_d = strtod(argv[i], &suffix);

                        if (suffix == argv[i] || *suffix != '\0')
                        {
                            msg_error("%s option: \"%s\" is not a number",
                                      a.dash.c_str(), argv[i]);
                        }
                        break;

                    case ARG_OPTION_TYPE_INT:
                        // -p 1
                        if (i + 1 >= argc)
                        {
                            msg_error("%s option requires an integer", argv[i]);
                        }

                        ++i;    // next argv should be an int

                        *a.p_i = (int) strtol(argv[i], &suffix, 10);

                        if (suffix == argv[i] || *suffix != '\0')
                        {
                            msg_error("%s option: \"%s\" is not an integer",
                                      a.dash.c_str(), argv[i]);
                        }
                        break;

                    case ARG_OPTION_TYPE_LATLON:
                        // -p 1 2
                        // If respecified, overwrite the data.
                        if ((*a.p_latlons).size() != 0)
                        {
                            (*a.p_latlons).clear();
                        }

                        // no break; fall through

                    case ARG_OPTION_TYPE_LATLON_VECTOR:
                        // ( -p 1 2 )+
                        if (i + 2 >= argc)
                        {
                            msg_error("%s option requires latitude and"
                                      " longitude", argv[i]);
                        }

                        ++i;    // next argv should be a double

                        lat = strtod(argv[i], &suffix);

                        if (suffix == argv[i] || *suffix != '\0')
                        {
                            msg_error("%s option: \"%s\" is not a number",
                                      a.dash.c_str(), argv[i]);
                        }

                        ++i;    // next argv should be a double

                        lon = strtod(argv[i], &suffix);

                        if (suffix == argv[i] || *suffix != '\0')
                        {
                            msg_error("%s option: \"%s\" is not a number",
                                      a.dash.c_str(), argv[i]);
                        }

                        (*a.p_latlons).push_back(ArgLatlon(lat, lon));
                        break;

                    case ARG_OPTION_TYPE_STRING:
                        // -p abc
                        if (i + 1 >= argc)
                        {
                            msg_error("%s option requires a parameter",
                                      argv[i]);
                        }

                        ++i;    // next argv

                        *a.p_str = argv[i];
                        break;

                    case ARG_OPTION_TYPE_WINDOW:
                        // -p 1 2 3 4
                        if (i + 4 >= argc)
                        {
                            msg_error("%s option requires latitude min/max and"
                                      " longitude min/max", argv[i]);
                        }

                        ++i;    // next argv should be a double

                        lat_min = strtod(argv[i], &suffix);

                        if (suffix == argv[i] || *suffix != '\0')
                        {
                            msg_error("%s option: \"%s\" is not a number",
                                      a.dash.c_str(), argv[i]);
                        }

                        ++i;    // next argv should be a double

                        lon_min = strtod(argv[i], &suffix);

                        if (suffix == argv[i] || *suffix != '\0')
                        {
                            msg_error("%s option: \"%s\" is not a number",
                                      a.dash.c_str(), argv[i]);
                        }

                        ++i;    // next argv should be a double

                        lat_max = strtod(argv[i], &suffix);

                        if (suffix == argv[i] || *suffix != '\0')
                        {
                            msg_error("%s option: \"%s\" is not a number",
                                      a.dash.c_str(), argv[i]);
                        }

                        ++i;    // next argv should be a double

                        lon_max = strtod(argv[i], &suffix);

                        if (suffix == argv[i] || *suffix != '\0')
                        {
                            msg_error("%s option: \"%s\" is not a number",
                                      a.dash.c_str(), argv[i]);
                        }

                        // If respecified, overwrite the data.
                        if ((*a.p_latlons).size() != 0)
                        {
                            (*a.p_latlons).clear();
                        }

                        (*a.p_latlons).push_back(ArgLatlon(lat_min, lon_min));
                        (*a.p_latlons).push_back(ArgLatlon(lat_max, lon_max));
                        break;
                }

                goto next_arg;
            }
        }

        msg_error("unknown option %s", argv[i]);
next_arg: ;
    }
}


void ArgDescription::debug_print()
{
    switch (option_type)
    {
        case ARG_OPTION_TYPE_BOOL:
            printf("    %s bool\n", dash.c_str());
            break;

        case ARG_OPTION_TYPE_DOUBLE:
            printf("    %s double\n", dash.c_str());
            break;

        case ARG_OPTION_TYPE_INT:
            printf("    %s int\n", dash.c_str());
            break;

        case ARG_OPTION_TYPE_LATLON:
            printf("    %s latlon\n", dash.c_str());
            break;

        case ARG_OPTION_TYPE_LATLON_VECTOR:
            printf("    %s latlon vector\n", dash.c_str());
            break;

        case ARG_OPTION_TYPE_STRING:
            printf("    %s string\n", dash.c_str());
            break;

        case ARG_OPTION_TYPE_WINDOW:
            printf("    %s window\n", dash.c_str());
            break;

        default:
            printf("    %s option_type %d\n", dash.c_str(), option_type);
            break;
    }
}