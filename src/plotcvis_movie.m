clear;
[x, y] = meshgrid(1:360, 1:360);
braemoor_height_2
braemoor_limited_50_cvis_2

i = 1;

for az = 0 : 1 : 359
    surfc(x,y,z,c,'edgecolor','none');
    colormap copper;
    %view(70,60);
    view(az, 60);
    
    M(i) = getframe;
    i = i + 1;
end
