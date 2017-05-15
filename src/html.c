/*
*   This string should be used with fprintf() and the following parameters:
*
*       %f  center latitude
*       %f  center longitude
*       %d  zoom level
*/
const char html_start[] =
"<!DOCTYPE html>\n"
"<html>\n"
"<head>\n"
"<meta name=\"viewport\" content=\"initial-scale=1.0, user-scalable=no\" />\n"
"<meta http-equiv=\"content-type\" content=\"text/html; charset=UTF-8\"/>\n"
"<title>Google Maps JavaScript API v3 Example: Polygon Simple</title>\n"
"<link href=\"http://code.google.com/apis/maps/documentation/javascript/examples/default.css\" rel=\"stylesheet\" type=\"text/css\" />\n"
"<script type=\"text/javascript\" src=\"http://maps.googleapis.com/maps/api/js?sensor=false\"></script>\n"
"<script type=\"text/javascript\">\n"
"\n"
"  function initialize() {\n"
"    var myLatLng = new google.maps.LatLng(%.6f, %.6f);\n"
"    var myOptions = {\n"
"      zoom: %d,\n"
"      center: myLatLng,\n"
"      mapTypeId: google.maps.MapTypeId.ROADMAP\n"
"    };\n"
"\n"
"    var map = new google.maps.Map(document.getElementById(\"map_canvas\"),\n"
"        myOptions);\n"
"\n";

/*
*   This string should be used with fprintf() and the following parameters:
*
*       %d  polygon index
*       %d  polygon index (twice because it's needed in two places)
*/
const char html_before_polygon[] =
"    var polygons%d;\n"
"    var polygonCoords%d = new Array();\n"
"\n";

/*
*   This string should be used with fprintf() and the following parameters:
*
*       %d  polygon index
*       %d  coordinate index, starting from 0
*/
const char html_before_coord[] =
"polygonCoords%d[%d]=[";

/*
*   This string should be used with fprintf() and the following parameters:
*
*       %f  coordinate latitude
*       %f  coordinate longitude
*/
const char html_coord[] =
"new google.maps.LatLng(%.6f,%.6f),";

/*
*   This string should be used with fprintf().
*
*   There are no parameters.
*/
const char html_after_coord[] =
"];\n";

/*
*   This string should be used with fprintf().
*
*       %d  polygon index
*       %d  polygon index (again)
*       %s  strokeColor (e.g. "#FF0000");
*       %f  strokeOpacity (0.0 to 1.0)
*       %d  strokeWeight (in pixels)
*       %s  fillColor (e.g. "#FF0000")
*       %f  fillOpacity (0.0 to 1.0)
*       %d  polygon index (again because it's needed in three places)
*/
const char html_after_polygon[] =
"    // Construct the polygon\n"
"    polygons%d = new google.maps.Polygon({\n"
"      paths: polygonCoords%d,\n"
"      strokeColor: \"%s\",\n"
"      strokeOpacity: %.2f,\n"
"      strokeWeight: %d,\n"
"      fillColor: \"%s\",\n"
"      fillOpacity: %.2f\n"
"    });\n"
"\n"
"   polygons%d.setMap(map);\n"
"\n";


/*
*   This string should be used with fprintf().
*
*   There are no parameters.
*/
const char html_finish[] =
"  }\n"
"</script>\n"
"</head>\n"
"<body onload=\"initialize()\">\n"
"  <div id=\"map_canvas\"></div>\n"
"</body>\n"
"</html>\n";


struct
{
    double longitude;
    double latitude;
} html_county_point[] =
{
    -122.295471, 37.106506,
    -122.291161, 37.114773,
    -122.313255, 37.149635,
    -122.320465, 37.187565,
    -122.280609, 37.188034,
    -122.262810, 37.191166,
    -122.245461, 37.191105,
    -122.244682, 37.216969,
    -122.153893, 37.216270,
    -122.152000, 37.228104,
    -122.151749, 37.286160,
    -122.142609, 37.273209,
    -122.144814, 37.269985,
    -122.131676, 37.258480,
    -122.116669, 37.259258,
    -122.108192, 37.248558,
    -122.103287, 37.240498,
    -122.100723, 37.233299,
    -122.094658, 37.225266,
    -122.082405, 37.221897,
    -122.079559, 37.223320,
    -122.073654, 37.219818,
    -122.071266, 37.217598,
    -122.068176, 37.211769,
    -122.058388, 37.212883,
    -122.044785, 37.204102,
    -122.042366, 37.200981,
    -122.034615, 37.193886,
    -122.036034, 37.184788,
    -122.019272, 37.167450,
    -122.005722, 37.159569,
    -121.997398, 37.152481,
    -121.991394, 37.145805,
    -121.986778, 37.145901,
    -121.978073, 37.144718,
    -121.967476, 37.138584,
    -121.961533, 37.133263,
    -121.953926, 37.130241,
    -121.946304, 37.126770,
    -121.934647, 37.123375,
    -121.927132, 37.123074,
    -121.914764, 37.115612,
    -121.899117, 37.113655,
    -121.893272, 37.111504,
    -121.866447, 37.102962,
    -121.860611, 37.100807,
    -121.847801, 37.097427,
    -121.839043, 37.093971,
    -121.824402, 37.087452,
    -121.820816, 37.083439,
    -121.817245, 37.079880,
    -121.809479, 37.071415,
    -121.803040, 37.068363,
    -121.786758, 37.064137,
    -121.780823, 37.058807,
    -121.772011, 37.053532,
    -121.760994, 37.051468,
    -121.754074, 37.051598,
    -121.754440, 37.044788,
    -121.746147, 37.037231,
    -121.743088, 37.031395,
    -121.716614, 37.013744,
    -121.711990, 37.013374,
    -121.710556, 37.003876,
    -121.717224, 36.995590,
    -121.711884, 36.990246,
    -121.703712, 36.986767,
    -121.696144, 36.984184,
    -121.697571, 36.973728,
    -121.689911, 36.967972,
    -121.680695, 36.968140,
    -121.680107, 36.967697,
    -121.669472, 36.964432,
    -121.663765, 36.964100,
    -121.662529, 36.951897,
    -121.660797, 36.950981,
    -121.656448, 36.950401,
    -121.652664, 36.951054,
    -121.651596, 36.949642,
    -121.652649, 36.946064,
    -121.651649, 36.939636,
    -121.645767, 36.935658,
    -121.644142, 36.933006,
    -121.637085, 36.939022,
    -121.624367, 36.940948,
    -121.608925, 36.926018,
    -121.589531, 36.926243,
    -121.589600, 36.918842,
    -121.580154, 36.918980,
    -121.580330, 36.899548,
    -121.594742, 36.902546,
    -121.599815, 36.898830,
    -121.610809, 36.900906,
    -121.619682, 36.909367,
    -121.627243, 36.911953,
    -121.642830, 36.893536,
    -121.643410, 36.893528,
    -121.645966, 36.902100,
    -121.646553, 36.902542,
    -121.649925, 36.899761,
    -121.650505, 36.899750,
    -121.651093, 36.900192,
    -121.652916, 36.903790,
    -121.651978, 36.911060,
    -121.657249, 36.914143,
    -121.662430, 36.914051,
    -121.664719, 36.913555,
    -121.680511, 36.902386,
    -121.684067, 36.905949,
    -121.685257, 36.907288,
    -121.698593, 36.910675,
    -121.700867, 36.909725,
    -121.703705, 36.908314,
    -121.706093, 36.910992,
    -121.700417, 36.913818,
    -121.699409, 36.918823,
    -121.709663, 36.915009,
    -121.713524, 36.909496,
    -121.724037, 36.914291,
    -121.729691, 36.911011,
    -121.734215, 36.908207,
    -121.745750, 36.908901,
    -121.754189, 36.902393,
    -121.757011, 36.900524,
    -121.758064, 36.897331,
    -121.761978, 36.893631,
    -121.768074, 36.885803,
    -121.770912, 36.884392,
    -121.775467, 36.882946,
    -121.777771, 36.882900,
    -121.784767, 36.885944,
    -121.792671, 36.880806,
    -121.802628, 36.867916,
    -121.803757, 36.866989,
    -121.801201, 36.858871,
    -121.807442, 36.856030,
    -121.810883, 36.855511,
    -121.812576, 36.854572,
    -121.813736, 36.855003,
    -121.814919, 36.855888,
    -121.816109, 36.857227,
    -121.818520, 36.860809,
    -121.820374, 36.864853,
    -121.822205, 36.868446,
    -121.824036, 36.871586,
    -121.825264, 36.874283,
    -121.830101, 36.881447,
    -121.833130, 36.886379,
    -121.836166, 36.891308,
    -121.839165, 36.895332,
    -121.842140, 36.898449,
    -121.845177, 36.903381,
    -121.848221, 36.908764,
    -121.851257, 36.913692,
    -121.854904, 36.919971,
    -121.860313, 36.927120,
    -121.865723, 36.934269,
    -121.876457, 36.945850,
    -121.880630, 36.950302,
    -121.887756, 36.956966,
    -121.894264, 36.962280,
    -121.899559, 36.965801,
    -121.904266, 36.968884,
    -121.909538, 36.971500,
    -121.917702, 36.974510,
    -121.922379, 36.976685,
    -121.924713, 36.977547,
    -121.927032, 36.977951,
    -121.928200, 36.978382,
    -121.931679, 36.979221,
    -121.934578, 36.979614,
    -121.937469, 36.980011,
    -121.940895, 36.979034,
    -121.942581, 36.977638,
    -121.944839, 36.976234,
    -121.948250, 36.974804,
    -121.951065, 36.972931,
    -121.953339, 36.971977,
    -121.955055, 36.971489,
    -121.958450, 36.969604,
    -121.959557, 36.968224,
    -121.961784, 36.965912,
    -121.962891, 36.964527,
    -121.965103, 36.961761,
    -121.967926, 36.959888,
    -121.970215, 36.959389,
    -121.971321, 36.958004,
    -121.973030, 36.957516,
    -121.974724, 36.956573,
    -121.977028, 36.956528,
    -121.979347, 36.956932,
    -121.982857, 36.958221,
    -121.984032, 36.959106,
    -121.986427, 36.961777,
    -121.988174, 36.962196,
    -121.990456, 36.961693,
    -121.995049, 36.961147,
    -121.999138, 36.962875,
    -122.004364, 36.964127,
    -122.007294, 36.965427,
    -122.009605, 36.965836,
    -122.016518, 36.965691,
    -122.024475, 36.962349,
    -122.026634, 36.958221,
    -122.026573, 36.956409,
    -122.027634, 36.953667,
    -122.028755, 36.952736,
    -122.033363, 36.952637,
    -122.035652, 36.952137,
    -122.037964, 36.952541,
    -122.039711, 36.952957,
    -122.041451, 36.953377,
    -122.043739, 36.952873,
    -122.046013, 36.951920,
    -122.050003, 36.950928,
    -122.054008, 36.949936,
    -122.055733, 36.949898,
    -122.058037, 36.949852,
    -122.059204, 36.950279,
    -122.061523, 36.950684,
    -122.063820, 36.950634,
    -122.064957, 36.950157,
    -122.066673, 36.949665,
    -122.068413, 36.950081,
    -122.069565, 36.950058,
    -122.072456, 36.950451,
    -122.074203, 36.950867,
    -122.077126, 36.952164,
    -122.079491, 36.953930,
    -122.081245, 36.954800,
    -122.082962, 36.954308,
    -122.085258, 36.954258,
    -122.086975, 36.953770,
    -122.088715, 36.954185,
    -122.089897, 36.955067,
    -122.092789, 36.955460,
    -122.096855, 36.956276,
    -122.099762, 36.957123,
    -122.104973, 36.957916,
    -122.108459, 36.958748,
    -122.111977, 36.960487,
    -122.114326, 36.961796,
    -122.116676, 36.963108,
    -122.117844, 36.963535,
    -122.118996, 36.963509,
    -122.120178, 36.964394,
    -122.121346, 36.964821,
    -122.122528, 36.965702,
    -122.124275, 36.966118,
    -122.125443, 36.966545,
    -122.126595, 36.966518,
    -122.127747, 36.966496,
    -122.128899, 36.966469,
    -122.130669, 36.967793,
    -122.132431, 36.968658,
    -122.134750, 36.969063,
    -122.135902, 36.969040,
    -122.137070, 36.969467,
    -122.137695, 36.970814,
    -122.139496, 36.973042,
    -122.141289, 36.974819,
    -122.143661, 36.976578,
    -122.145416, 36.977448,
    -122.147179, 36.978317,
    -122.149498, 36.978722,
    -122.151207, 36.978230,
    -122.152916, 36.977737,
    -122.154663, 36.978153,
    -122.155846, 36.979034,
    -122.156487, 36.980835,
    -122.157097, 36.981728,
    -122.157715, 36.983074,
    -122.158920, 36.984409,
    -122.160713, 36.986183,
    -122.162483, 36.987507,
    -122.166008, 36.989243,
    -122.170074, 36.990059,
    -122.173080, 36.993622,
    -122.176636, 36.996262,
    -122.183647, 36.998829,
    -122.187790, 37.001911,
    -122.190208, 37.005035,
    -122.194344, 37.007664,
    -122.196709, 37.009422,
    -122.198471, 37.010292,
    -122.199677, 37.011627,
    -122.202583, 37.012466,
    -122.203773, 37.013348,
    -122.205536, 37.014217,
    -122.206688, 37.014191,
    -122.207870, 37.015072,
    -122.209633, 37.015938,
    -122.209663, 37.016846,
    -122.210846, 37.017727,
    -122.212067, 37.019512,
    -122.213249, 37.020393,
    -122.216789, 37.022583,
    -122.217964, 37.023010,
    -122.219177, 37.024796,
    -122.220367, 37.025677,
    -122.222092, 37.025635,
    -122.223244, 37.025612,
    -122.226173, 37.026905,
    -122.227409, 37.029144,
    -122.228661, 37.031837,
    -122.229897, 37.034077,
    -122.231163, 37.037224,
    -122.231827, 37.039478,
    -122.232483, 37.041733,
    -122.234230, 37.042145,
    -122.236008, 37.043465,
    -122.237801, 37.045238,
    -122.240768, 37.047440,
    -122.243767, 37.050545,
    -122.247360, 37.054092,
    -122.248611, 37.056786,
    -122.250374, 37.057652,
    -122.253304, 37.058949,
    -122.256271, 37.061146,
    -122.256882, 37.062042,
    -122.257492, 37.062935,
    -122.258698, 37.064266,
    -122.259911, 37.066055,
    -122.259964, 37.067413,
    -122.261169, 37.068745,
    -122.261780, 37.069633,
    -122.263557, 37.070957,
    -122.264847, 37.074554,
    -122.265472, 37.075901,
    -122.266083, 37.076794,
    -122.267845, 37.077660,
    -122.269012, 37.078087,
    -122.270790, 37.079407,
    -122.272049, 37.082100,
    -122.271538, 37.083927,
    -122.272163, 37.085274,
    -122.273338, 37.085701,
    -122.275131, 37.087471,
    -122.276321, 37.088352,
    -122.278664, 37.089207,
    -122.279274, 37.090099,
    -122.280525, 37.092793,
    -122.282356, 37.095470,
    -122.285362, 37.098576,
    -122.287735, 37.100334,
    -122.290123, 37.102551,
    -122.295471, 37.106506,
};

#define NUM_COUNTY_POINTS (sizeof(html_county_point) / sizeof(html_county_point[0]))

#define FILL_COLOR      "#5500ff"
#define FILL_OPACITY    0.4

/*
*   Write a bitmap to a text file as an HTML file for Google Maps.
*
*   Pixel (0,0) is in the lower-left corner.
*/
void bmp_bitmap_write_google_map_html
(
    BMP_BITMAP *bmp,
    const char *filename
)
{
    int i, x, y;

    int coord_index = 0;

    FILE *f = fopen(filename, "w");

    if (f == NULL)
    {
        printf("Can't create %s\n", filename);
        exit(1);
    }

    // Compute the center from the county boundary.
    fprintf(f, html_start,
            (  36.8546 +  37.2862) / 2, // center_latitude
            (-122.3205 - 121.5802) / 2, // center_longitude
              11);      // zoom_level

    fprintf(f, html_before_polygon, 1, 1);
    fprintf(f, html_before_polygon, 2, 2);

    for (y = 0; y < bmp->height; ++y)
    {
        for (x = 0; x < bmp->width; ++x)
        {
            if (bmp->a[x][y])
            {
                int x2     = x;
                int next_x = x + 1;

                fprintf(f, html_before_coord, 1, coord_index++);

                // Find rightmost contiguous pixel.
                while (next_x < bmp->width && bmp->a[next_x][y])
                {
                    x2 = next_x;
                    ++next_x;
                }

                fprintf(f, html_coord,
                        bmp->latitude  + (y - 0.5) / 3600,
                        bmp->longitude + (x - 0.5) / 3600);

                fprintf(f, html_coord,
                        bmp->latitude  + (y  - 0.5) / 3600,
                        bmp->longitude + (x2 + 0.5) / 3600);    // uses x2

                fprintf(f, html_coord,
                        bmp->latitude  + (y  + 0.5) / 3600,
                        bmp->longitude + (x2 + 0.5) / 3600);    // uses x2

                fprintf(f, html_coord,
                        bmp->latitude  + (y + 0.5) / 3600,
                        bmp->longitude + (x - 0.5) / 3600);

                fprintf(f, html_after_coord);

                // Let "for" loop know that we've done this part already.
                x = x2;
            }
        }
    }

    fprintf(f, html_before_coord, 2, 0);

    for (i = 0; i < NUM_COUNTY_POINTS; ++i)
    {
        fprintf(f, html_coord,
                html_county_point[i].latitude,
                html_county_point[i].longitude);
    }

    fprintf(f, html_after_coord);

    fprintf(f, html_after_polygon, 1, 1, "#000000", 0.0, 0, FILL_COLOR, FILL_OPACITY, 1);
    fprintf(f, html_after_polygon, 2, 2, "#000000", 0.6, 2, "#000000", 0.0, 2);

    fprintf(f, html_finish);

    if (fclose(f) == EOF) msg_error("can't close %s", filename);
}

