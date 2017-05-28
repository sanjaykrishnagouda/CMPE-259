#include <limits>
#include <string>
#include <vector>

#include <math.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

extern "C"
{
#include "srtm.h"
#include "cvis_wang.h"
#include "bmp.h"
#include "data.h"
#include "msg.h"
#include "visibility.h"
}

using std::string;
using std::vector;

#include "ge.h"
#include "Args.h"
#include "Statistics.h"
#include "Disk.h"
#include "State.h"
#include "pg.h"

extern "C"
{
#include "grd.h"
#include "sa.h"
}

#define SQRT_INT_MAX    46340   // SQRT_INT_MAX^2 fits in a 32-bit int


// TODO move these global variables into a CVIS object
SRTM_TILE  *srtm = NULL;
CVIS_WANG  *v    = NULL;
int       **z    = NULL;


void cleanup(void)
{
    cvis_wang_free(&v, &z);
    srtm_free(&srtm);
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


void usage_init(Args &args)
{
    args.define_usage(
        "Usage: visibility [options]\n"
        "Options:\n"
        "    -hgt infile.hgt                        HGT input file\n"
        "    -hgt-latlon latitude longitude         position of HGT file\n"
        "    -bmp outfile.bmp                       BMP output file\n"
        "    -bmp-sequence basename                 sequence of BMPs\n"
        "    -txt outfile.txt                       TXT output file\n"
        "    -w lat_min lon_min lat_max lon_max     window\n"
        "    -v latitude longitude                  viewpoint\n"
        "    -vrand num_rand_viewpoints             random viewpoints\n"
        "    -vh viewpoint_height_above_terrain     same units as HGT file\n"
        "    -r radius_max                          radius for cumulative visibility\n"
        "    -s unsigned_seed                       init random number generator\n"
        "    -V                                     compute visibility\n"
        "    -C                                     compute cumulative visibility\n"
        "    -H                                     write heights BMP\n"
        "Gradient Ascent options:\n"
        "    -G method                              compute results of gradient ascent\n"
        "    -v longitude latitude                  viewpoint(s)\n"
        "    -t num_iterations                      number of iterations\n"
        "    -delta pattern_search_delta            integer\n"
        "Simulated Annealing options:\n"
        "    -S                                     compute results of S.A.\n"
        "    -v longitude latitude                  viewpoint(s)\n"
        "    -T                                     initial temperature\n"
        "    -M                                     initial iterations at temp\n"
        "    -a                                     alpha\n"
        "    -b                                     beta\n"
        "    -l                                     lambda\n"
        "    -d                                     dist_max\n"
        "    -t                                     max_time\n"
        "    -Sd                                    use distributed algorithm\n"
        "    -er                                    exploration radius\n"
        "    -cr                                    communication radius\n"
        "Potential Games options:\n"
        "    -P                                     compute results of P.G.\n"
        "    -b                                     beta\n"
        "    -d                                     dist_max\n"
        "    -t                                     max_time\n"
        );
}


int main(int argc, char **argv)
{
    Args args;

    usage_init(args);

    // Required parameters.
    // Check their requirements farther below.
    string              filename_hgt;
    vector<ArgLatlon>   latlon_hgt;
    string              filename_bmp;

    args.define("-hgt", &filename_hgt);
    args.define_latlon("-hgt-latlon", &latlon_hgt);
    args.define("-bmp", &filename_bmp);

    // Optional parameters
    vector<ArgLatlon>   viewpoints;
    int                 num_rand_viewpoints;
    int                 viewpoint_height_above_terrain;
    bool                write_heights_bmp;
    bool                write_visibility_bmp;
    bool                compute_cumulative_visibility;
    int                 radius_max;
    int                 exploration_radius_max;
    int                 communication_radius_max;
    bool                use_distributed_algorithm;
    vector<ArgLatlon>   window;
    bool                optimize_pg;
    bool                optimize_sa;
    bool                optimize_ts;
    int                 temp_initial;
    int                 M_initial;
    int                 dist_max;
    double              alpha;
    double              beta;
    double              lambda;
    int                 num_iterations;
    int                 gradient_ascent_method;
    int                 delta;
    int                 srand_value;
    string              filename_txt;
    string              bmp_sequence_basename;


    args.define_latlon_vector("-v", &viewpoints);
    args.define("-vrand", &num_rand_viewpoints);
    args.define("-vh", &viewpoint_height_above_terrain);
    args.define("-H", &write_heights_bmp),
    args.define("-V", &write_visibility_bmp);
    args.define("-C", &compute_cumulative_visibility);
    args.define("-r", &radius_max,                  SQRT_INT_MAX);
    args.define("-er", &exploration_radius_max,     SQRT_INT_MAX);
    args.define("-cr", &communication_radius_max,   SQRT_INT_MAX);
    args.define("-Sd", &use_distributed_algorithm),
    args.define_window("-w", &window,       -90.01, -180.01, 90.01, 180.01);
    args.define("-P", &optimize_pg);
    args.define("-S", &optimize_sa);
    args.define("-TS", &optimize_ts);
    args.define("-T", &temp_initial);
    args.define("-t", &num_iterations);
    args.define("-M", &M_initial,           10);
    args.define("-a", &alpha,               0.9);
    args.define("-b", &beta,                1.0);
    args.define("-l", &lambda,              0.7);
    args.define("-d", &dist_max,            10);
    args.define("-G", &gradient_ascent_method);
    args.define("-delta", &delta);
    args.define("-s", &srand_value,         1);
    args.define("-txt", &filename_txt,      "");
    args.define("-bmp-sequence", &bmp_sequence_basename);

    args.parse(argc, argv);

    // These are the required parameters.
    if (filename_hgt == "") msg_error ("must specify an HGT input file");
    if (filename_bmp == "") msg_error ("must specify an BMP output file");

    int     h_min, h_max;
    int     i, j;

    int     window_left_edge, window_right_edge;
    int     window_bottom_edge, window_top_edge;

    int     num_dash_v_viewpoints;
    int     num_viewpoints;     // total viewpoints
    double  viewpoint_longitude[MAX_NUM_VIEWPOINTS];
    double  viewpoint_latitude[MAX_NUM_VIEWPOINTS];
    int     viewpoint_i[MAX_NUM_VIEWPOINTS];
    int     viewpoint_j[MAX_NUM_VIEWPOINTS];
    bool    viewpoint_is_active[MAX_NUM_VIEWPOINTS];

    time_t  t1;     // used by loop timer; start of loop
    time_t  t2;     // used by loop timer; end of current iteration
    time_t  t3;     // used by loop timer; estimated completion
    int     cumulative_visibility;

printf("begin main()\n");
    ge_srand(srand_value);

    if (argc <= 1) args.print_usage();

    srtm = srtm_malloc(filename_hgt.c_str(),
                       latlon_hgt[0].lon, latlon_hgt[0].lat);

    for (auto w : window)
    {
        printf("    w.lat = %f\n", w.lat);
        printf("    w.lon = %f\n", w.lon);
    }

    srtm_find_limits(srtm,
                     window[0].lat,        window[0].lon,
                     window[1].lat,        window[1].lon,
                     &h_min,               &h_max,
                     &window_left_edge,    &window_right_edge,
                     &window_bottom_edge,  &window_top_edge);

    printf("window_left_edge = %d\n"
           "window_right_edge = %d\n"
           "window_bottom_edge = %d\n"
           "window_top_edge = %d\n"
           "h_min = %d\n"
           "h_max = %d\n",
           window_left_edge,
           window_right_edge,
           window_bottom_edge,
           window_top_edge,
           h_min,
           h_max);


    // Convert the viewpoints object into i and j arrays.
    // Also create random viewpoints.
    // TODO Pass the viewpoints object or its reference directly.
    num_dash_v_viewpoints = viewpoints.size();
    num_viewpoints = num_dash_v_viewpoints + num_rand_viewpoints;

    printf("num_dash_v_viewpoints = %d\n",  num_dash_v_viewpoints);
    printf("num_rand_viewpoints = %d\n",    num_rand_viewpoints);
    printf("num__viewpoints = %d\n",        num_viewpoints);

    if (num_viewpoints >= MAX_NUM_VIEWPOINTS)
    {
        msg_error("Too many viewpoints.  Only %d allowed.",
                  MAX_NUM_VIEWPOINTS);
    }

    i = 0;

    for (auto pt : viewpoints)
    {
        srtm_find_viewpoint(pt.lon, pt.lat, &viewpoint_i[i], &viewpoint_j[i]);
        viewpoint_is_active[i] = true;
        printf("viewpoint lat=%f lon=%f i=%d j=%d\n",
                pt.lat, pt.lon, viewpoint_i[i], viewpoint_j[i]);
        ++i;
    }

    for (/* current i */ ; i < num_viewpoints; ++i)
    {
        viewpoint_i[i] = ge_rand_uniform_int(window_left_edge,
                                             window_right_edge);
        viewpoint_j[i] = ge_rand_uniform_int(window_bottom_edge,
                                             window_top_edge);
    }

    for (i = 0; i < num_viewpoints; ++i)
    {
        printf("viewpoint %d = %d %d\n", i, viewpoint_i[i], viewpoint_j[i]);
    }


    if (write_heights_bmp)
    {
        printf("heights --> %s\n", filename_bmp.c_str());
        bmp_srtm_write(srtm, filename_bmp.c_str(), 0, NULL, NULL);
    }

    if (write_visibility_bmp)
    {
        cvis_wang_malloc(&v, &z, srtm,
                         num_viewpoints, viewpoint_i, viewpoint_j,
                         viewpoint_is_active,
                         radius_max, viewpoint_height_above_terrain);

        bmp_cvis_wang_write(v, filename_bmp.c_str());
    }

    if (compute_cumulative_visibility)
    {
        int **c;     // cumulative visibility of each point

        // Prepare to record limits of c array's values.
        int c_min = INT_MAX;
        int c_max = 0;

        c = (int **) calloc(MAX_INDEX + 1, sizeof(c[0]));

        for (i = 0; i <= MAX_INDEX; ++i)
        {
            c[i] = (int *) calloc(MAX_INDEX + 1, sizeof(int));
        }

        time(&t1);
        printf("Start       %s", ctime(&t1));

        for (j = window_bottom_edge; j <= window_top_edge; ++j)
        {
            for (i = window_left_edge; i <= window_right_edge; ++i)
            {
                int a, b;

                bool is_active = true;

                cvis_wang_malloc(&v, &z, srtm,
                                 1, &i, &j, &is_active,
                                 radius_max, viewpoint_height_above_terrain);

                // count number of visible pixels
                int n = 0;

                for (b = window_bottom_edge; b <= window_top_edge; ++b)
                {
                    for (a = window_left_edge; a <= window_right_edge; ++a)
                    {
                        if (v->visible[a][b] > 0) ++n;
                    }
                }

                c[i][j] = n;

                if (n < c_min) c_min = n;
                if (n > c_max) c_max = n;
            }

            time(&t2);

            t3 = trunc(1.0 *
                      t2 + (t2 - t1) *
                      (1 + window_top_edge - j) /
                      (1 + j - window_bottom_edge) + 0.5);

            printf("%ld %ld %d %d %d ",
                   t2 - t1,
                   t3 - t1,
                   window_bottom_edge,
                   j,
                   window_top_edge);

            printf("Est. finish %s", ctime(&t3));
        }

        // TODO free memory for c

        bmp_int_array_write(c, filename_bmp.c_str(),
                       c_min,
                       c_max,
                       window_left_edge,
                       window_right_edge,
                       window_bottom_edge,
                       window_top_edge);
    }

    if (gradient_ascent_method > 0)
    {
        printf("gradient_ascent_method = %d\n", gradient_ascent_method);

        cumulative_visibility = grd_ascend(num_viewpoints,
                                           viewpoint_i,
                                           viewpoint_j,
                                           radius_max,
                                           viewpoint_height_above_terrain,
                                           num_iterations,
                                           filename_bmp.c_str(),
                                           gradient_ascent_method,
                                           delta,
                                           bmp_sequence_basename.c_str(),
                                           window_left_edge,
                                           window_right_edge,
                                           window_bottom_edge,
                                           window_top_edge);

        for (i = 0; i < num_viewpoints; ++i)
        {
            printf("viewpoint %d = %d %d\n", i, viewpoint_i[i], viewpoint_j[i]);
        }

        State S = State(num_viewpoints, viewpoint_i, viewpoint_j);

        printf("write %s\n", filename_bmp.c_str());
        bmp_srtm_v_write(srtm, v->visible,
            filename_bmp.c_str(),
            S.num_viewpoints, S.pi, S.pj);

        printf("cumulative visibility = %d\n", cumulative_visibility);

        create_txt_file(filename_txt,
                        "cumulative visibility = %d\n",
                        cumulative_visibility);
    }

    if (optimize_pg)
    {
        State S = State(num_viewpoints, viewpoint_i, viewpoint_j);

        cumulative_visibility =
            pg_rsap(S,
                    radius_max,
                    viewpoint_height_above_terrain,
                    dist_max,
                    beta,
                    num_iterations,
                    bmp_sequence_basename.c_str());

        printf("write %s\n", filename_bmp.c_str());
        bmp_srtm_v_write(srtm, v->visible,
            filename_bmp.c_str(),
            S.num_viewpoints, S.pi, S.pj);

        printf("cumulative visibility = %d\n", cumulative_visibility);

        create_txt_file(filename_txt,
                        "cumulative visibility = %d\n",
                        cumulative_visibility);
    }

    if (optimize_sa)
    {
        State S = State(num_viewpoints, viewpoint_i, viewpoint_j);

        cumulative_visibility =
            sa_simulated_annealing(temp_initial,
                                   S,
                                   radius_max,
                                   viewpoint_height_above_terrain,
                                   dist_max,
                                   exploration_radius_max,
                                   communication_radius_max,
                                   alpha,
                                   beta,
                                   lambda,
                                   M_initial,
                                   num_iterations,
                                   use_distributed_algorithm,
                                   bmp_sequence_basename.c_str());

        printf("write %s\n", filename_bmp.c_str());
        bmp_srtm_v_write(srtm, v->visible,
            filename_bmp.c_str(),
            S.num_viewpoints, S.pi, S.pj);

        printf("cumulative visibility = %d\n", cumulative_visibility);

        create_txt_file(filename_txt,
                        "cumulative visibility = %d\n",
                        cumulative_visibility);
    }

    if (optimize_ts)
    {
        State S = State(num_viewpoints, viewpoint_i, viewpoint_j);

        cumulative_visibility =
            ts_simulated_annealing(temp_initial,
                                   S,
                                   radius_max,
                                   viewpoint_height_above_terrain,
                                   dist_max,
                                   exploration_radius_max,
                                   communication_radius_max,
                                   alpha,
                                   beta,
                                   lambda,
                                   M_initial,
                                   num_iterations,
                                   use_distributed_algorithm,
                                   bmp_sequence_basename.c_str());

        printf("write %s\n", filename_bmp.c_str());
        bmp_srtm_v_write(srtm, v->visible,
            filename_bmp.c_str(),
            S.num_viewpoints, S.pi, S.pj);

        printf("cumulative visibility = %d\n", cumulative_visibility);

        create_txt_file(filename_txt,
                        "cumulative visibility = %d\n",
                        cumulative_visibility);
    }

    cleanup();
printf("end main()\n");
    return 0;
}
