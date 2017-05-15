#include <stdio.h>
#include <stdlib.h>

extern "C"
{
#include "srtm.h"
#include "data.h"
}


int main(int argc, char **argv)
{
    SRTM_TILE  *srtm = srtm_malloc(W123N37, -123, 37);
    // srtm_malloc(W123N36, -123, 36);

    srtm_free(&srtm);

    return 0;
}
