clear;
[x, y] = meshgrid(1:360, 1:360);

braemoor_height_2
braemoor_limited_150_cvis_2

%                    left bottom width height
subplot('Position', [0.0   0.0    0.5   1.0]);
surfc(x,y,z,c,'edgecolor','none');
colormap copper;
view(70,60);

%                    left bottom width height
subplot('Position', [0.5   0.0    0.5   1.0]);
surfc(x,y,z,c,'edgecolor','none');
colormap copper;
view(72,60);
