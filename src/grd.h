int grd_ascend
(
    int     num_viewpoints,
    int    *viewpoint_initial_i,
    int    *viewpoint_initial_j,
    int     radius_max,
    int     viewpoint_height_above_terrain,
    int     iterations_max,
    const char *filename,
    int     movement_method,
    int     delta,
    const char *bmp_sequence_basename,
    int     window_left_edge,
    int     window_right_edge,
    int     window_bottom_edge,
    int     window_top_edge
);
