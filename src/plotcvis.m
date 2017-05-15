clear;
[x, y] = meshgrid(1:360, 1:360);
braemoor_height_2

braemoor_limited_50_cvis_2
surfc(x,y,z,c,'edgecolor','none');
colormap copper;
view(70,60);

braemoor_limited_100_cvis_2
surfc(x,y,z,c,'edgecolor','none');
colormap copper;
view(70,60);

braemoor_limited_150_cvis_2
surfc(x,y,z,c,'edgecolor','none');
colormap copper;
view(70,60);

braemoor_limited_150_cvis_2
surfc(x,y,c,c,'edgecolor','none');
colormap copper;
view(70,60);
