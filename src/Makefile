# Uncomment one of the lines below to build a prior version.
#COFLAGS = -rver1_0
#COFLAGS = -rver1_1

# Makefile quick reference for %.x style rules.
#
# $@    target
# $*    basename of target
# $+    all prerequisites (including duplicates)
# $^    all prerequisites (omitting duplicates)
# $?    all prerequisites that are newer than the target (no duplicates?)
# $<    just the first prerequisite
# $$$$  $  (when secondary expansion is enabled)
# $$$$  $$ (when secondary expansion is disabled)

EXECUTABLES = \
    visibility \
#LD_LIBRARY_PATH=/usr/lib/x86_64-linux-gnu



# For automatic include-file dependency generation.
C_FILES = \
    Agent.cpp \
    Disk.cpp \
    State.cpp \
    Statistics.cpp \
    Temperature.cpp \
    bmp.cpp \
    corners2.cpp \
    cvis_wang.cpp \
    ge.cpp \
    grd.cpp \
    msg.cpp \
    pg.cpp \
    sa.cpp \
    srtm.cpp \
    srtm_test.cpp \
    test.cpp \
    ucsclim.cpp \
    visibility.cpp \
    voids.cpp \
		ts.cpp \


GENERATED_DATA_FILES = \
   	pahoa-height.bmp \
		sa-real30-s-1.bmp \
		sa-real30-s-2.bmp \
		sa-real30-s-3.bmp \
		sa-real30-s-4.bmp \
	#    ps-wavy-vrand-s12.bmp \
#    ps-wavy-vrand-s13.bmp \
#    ps-wavy-vrand-s14.bmp \
#    ps-wavy-vrand-s15.bmp \
#    ps-wavy-vrand-s16.bmp \
#    ps-wavy-vrand-s17.bmp \
#    ps-wavy-vrand-s18.bmp \
#    ps-wavy-vrand-s19.bmp \
#    ps-wavy-vrand-s20.bmp \
#    ps-wavy2-vrand-s11.bmp \
#    ps-wavy2-vrand-s12.bmp \
#    ps-wavy2-vrand-s13.bmp \
#    ps-wavy2-vrand-s14.bmp \
#    ps-wavy2-vrand-s15.bmp \
#    ps-wavy2-vrand-s16.bmp \
#    ps-wavy2-vrand-s17.bmp \
#    ps-wavy2-vrand-s18.bmp \
#    ps-wavy2-vrand-s19.bmp \
#    ps-wavy2-vrand-s20.bmp \
#    ga-real-vrand-s11.bmp \
#    ga-real-vrand-s12.bmp \
#    ga-real-vrand-s13.bmp \
#    ga-real-vrand-s14.bmp \
#    ga-real-vrand-s15.bmp \
#    ga-real-vrand-s16.bmp \
#    ga-real-vrand-s17.bmp \
#    ga-real-vrand-s18.bmp \
#    ga-real-vrand-s19.bmp \
#    ga-real-vrand-s20.bmp \
#    ga-flat-vrand-s11.bmp \
#    ga-flat-vrand-s12.bmp \
#    ga-flat-vrand-s13.bmp \
#    ga-flat-vrand-s14.bmp \
#    ga-flat-vrand-s15.bmp \
#    ga-flat-vrand-s16.bmp \
#    ga-flat-vrand-s17.bmp \
#    ga-flat-vrand-s18.bmp \
#    ga-flat-vrand-s19.bmp \
#    ga-flat-vrand-s20.bmp \
#    ga-dish-vrand-s11.bmp \
#    ga-dish-vrand-s12.bmp \
#    ga-dish-vrand-s13.bmp \
#    ga-dish-vrand-s14.bmp \
#    ga-dish-vrand-s15.bmp \
#    ga-dish-vrand-s16.bmp \
#    ga-dish-vrand-s17.bmp \
#    ga-dish-vrand-s18.bmp \
#    ga-dish-vrand-s19.bmp \
#    ga-dish-vrand-s20.bmp \
#    ga-wavy-vrand-s11.bmp \
#    ga-wavy-vrand-s12.bmp \
#    ga-wavy-vrand-s13.bmp \
#    ga-wavy-vrand-s14.bmp \
#    ga-wavy-vrand-s15.bmp \
#    ga-wavy-vrand-s16.bmp \
#    ga-wavy-vrand-s17.bmp \
#    ga-wavy-vrand-s18.bmp \
#    ga-wavy-vrand-s19.bmp \
#    ga-wavy-vrand-s20.bmp \
#    ga-wavy2-vrand-s11.bmp \
#    ga-wavy2-vrand-s12.bmp \
#    ga-wavy2-vrand-s13.bmp \
#    ga-wavy2-vrand-s14.bmp \
#    ga-wavy2-vrand-s15.bmp \
#    ga-wavy2-vrand-s16.bmp \
#    ga-wavy2-vrand-s17.bmp \
#    ga-wavy2-vrand-s18.bmp \
#    ga-wavy2-vrand-s19.bmp \
#    ga-wavy2-vrand-s20.bmp \

#    dsa-real-cr-130-s-11.bmp \
#    dsa-real-cr-140-s-11.bmp \
#    dsa-real-cr-150-s-11.bmp \
#    dsa-real-cr-160-s-11.bmp \
#    dsa-real-cr-170-s-11.bmp \
#    dsa-real-cr-130-s-12.bmp \
#    dsa-real-cr-140-s-12.bmp \
#    dsa-real-cr-150-s-12.bmp \
#    dsa-real-cr-160-s-12.bmp \
#    dsa-real-cr-170-s-12.bmp \
#    dsa-real-cr-130-s-13.bmp \
#    dsa-real-cr-140-s-13.bmp \
#    dsa-real-cr-150-s-13.bmp \
#    dsa-real-cr-160-s-13.bmp \
#    dsa-real-cr-170-s-13.bmp \
#    dsa-real-cr-130-s-14.bmp \
#    dsa-real-cr-140-s-14.bmp \
#    dsa-real-cr-150-s-14.bmp \
#    dsa-real-cr-160-s-14.bmp \
#    dsa-real-cr-170-s-14.bmp \
#    dsa-real-cr-130-s-15.bmp \
#    dsa-real-cr-140-s-15.bmp \
#    dsa-real-cr-150-s-15.bmp \
#    dsa-real-cr-160-s-15.bmp \
#    dsa-real-cr-170-s-15.bmp \
#    dsa-real-cr-130-s-16.bmp \
#    dsa-real-cr-140-s-16.bmp \
#    dsa-real-cr-150-s-16.bmp \
#    dsa-real-cr-160-s-16.bmp \
#    dsa-real-cr-170-s-16.bmp \
#    dsa-real-cr-130-s-17.bmp \
#    dsa-real-cr-140-s-17.bmp \
#    dsa-real-cr-150-s-17.bmp \
#    dsa-real-cr-160-s-17.bmp \
#    dsa-real-cr-170-s-17.bmp \
#    dsa-real-cr-130-s-18.bmp \
#    dsa-real-cr-140-s-18.bmp \
#    dsa-real-cr-150-s-18.bmp \
#    dsa-real-cr-160-s-18.bmp \
#    dsa-real-cr-170-s-18.bmp \
#    dsa-real-cr-130-s-19.bmp \
#    dsa-real-cr-140-s-19.bmp \
#    dsa-real-cr-150-s-19.bmp \
#    dsa-real-cr-160-s-19.bmp \
#    dsa-real-cr-170-s-19.bmp \
#    dsa-real-cr-130-s-20.bmp \
#    dsa-real-cr-140-s-20.bmp \
#    dsa-real-cr-150-s-20.bmp \
#    dsa-real-cr-160-s-20.bmp \
#    dsa-real-cr-170-s-20.bmp \



# It usually takes a while to generate these, and so I comment them out.
# Place one of the file names under the GENERATE_DATA_FILES variable, above.

#    dsa-real80-cr-120-s-1.bmp \
#    dsa-real80-cr-120-s-2.bmp \
#    dsa-real80-cr-120-s-3.bmp \
#    dsa-real80-cr-120-s-4.bmp \
#    dsa-real80-cr-120-s-5.bmp \
#    dsa-real80-cr-120-s-6.bmp \
#    dsa-real80-cr-120-s-7.bmp \
#    dsa-real80-cr-120-s-8.bmp \
#    dsa-real80-cr-120-s-9.bmp \
#    dsa-real80-cr-120-s-10.bmp \
#    dsa-real80-cr-130-s-1.bmp \
#    dsa-real80-cr-130-s-2.bmp \
#    dsa-real80-cr-130-s-3.bmp \
#    dsa-real80-cr-130-s-4.bmp \
#    dsa-real80-cr-130-s-5.bmp \
#    dsa-real80-cr-130-s-6.bmp \
#    dsa-real80-cr-130-s-7.bmp \
#    dsa-real80-cr-130-s-8.bmp \
#    dsa-real80-cr-130-s-9.bmp \
#    dsa-real80-cr-130-s-10.bmp \
#    dsa-real80-cr-140-s-1.bmp \
#    dsa-real80-cr-140-s-2.bmp \
#    dsa-real80-cr-140-s-3.bmp \
#    dsa-real80-cr-140-s-4.bmp \
#    dsa-real80-cr-140-s-5.bmp \
#    dsa-real80-cr-140-s-6.bmp \
#    dsa-real80-cr-140-s-7.bmp \
#    dsa-real80-cr-140-s-8.bmp \
#    dsa-real80-cr-140-s-9.bmp \
#    dsa-real80-cr-140-s-10.bmp \
#    dsa-real80-cr-150-s-1.bmp \
#    dsa-real80-cr-150-s-2.bmp \
#    dsa-real80-cr-150-s-3.bmp \
#    dsa-real80-cr-150-s-4.bmp \
#    dsa-real80-cr-150-s-5.bmp \
#    dsa-real80-cr-150-s-6.bmp \
#    dsa-real80-cr-150-s-7.bmp \
#    dsa-real80-cr-150-s-8.bmp \
#    dsa-real80-cr-150-s-9.bmp \
#    dsa-real80-cr-150-s-10.bmp \
#    dsa-real80-cr-160-s-1.bmp \
#    dsa-real80-cr-160-s-2.bmp \
#    dsa-real80-cr-160-s-3.bmp \
#    dsa-real80-cr-160-s-4.bmp \
#    dsa-real80-cr-160-s-5.bmp \
#    dsa-real80-cr-160-s-6.bmp \
#    dsa-real80-cr-160-s-7.bmp \
#    dsa-real80-cr-160-s-8.bmp \
#    dsa-real80-cr-160-s-9.bmp \
#    dsa-real80-cr-160-s-10.bmp \
#    dsa-real80-cr-170-s-1.bmp \
#    dsa-real80-cr-170-s-2.bmp \
#    dsa-real80-cr-170-s-3.bmp \
#    dsa-real80-cr-170-s-4.bmp \
#    dsa-real80-cr-170-s-5.bmp \
#    dsa-real80-cr-170-s-6.bmp \
#    dsa-real80-cr-170-s-7.bmp \
#    dsa-real80-cr-170-s-8.bmp \
#    dsa-real80-cr-170-s-9.bmp \
#    dsa-real80-cr-170-s-10.bmp \
#    dsa-real80-cr-180-s-1.bmp \
#    dsa-real80-cr-180-s-2.bmp \
#    dsa-real80-cr-180-s-3.bmp \
#    dsa-real80-cr-180-s-4.bmp \
#    dsa-real80-cr-180-s-5.bmp \
#    dsa-real80-cr-180-s-6.bmp \
#    dsa-real80-cr-180-s-7.bmp \
#    dsa-real80-cr-180-s-8.bmp \
#    dsa-real80-cr-180-s-9.bmp \
#    dsa-real80-cr-180-s-10.bmp \
#    dsa-real80-cr-190-s-1.bmp \
#    dsa-real80-cr-190-s-2.bmp \
#    dsa-real80-cr-190-s-3.bmp \
#    dsa-real80-cr-190-s-4.bmp \
#    dsa-real80-cr-190-s-5.bmp \
#    dsa-real80-cr-190-s-6.bmp \
#    dsa-real80-cr-190-s-7.bmp \
#    dsa-real80-cr-190-s-8.bmp \
#    dsa-real80-cr-190-s-9.bmp \
#    dsa-real80-cr-190-s-10.bmp \
#    dsa-real80-cr-200-s-1.bmp \
#    dsa-real80-cr-200-s-2.bmp \
#    dsa-real80-cr-200-s-3.bmp \
#    dsa-real80-cr-200-s-4.bmp \
#    dsa-real80-cr-200-s-5.bmp \
#    dsa-real80-cr-200-s-6.bmp \
#    dsa-real80-cr-200-s-7.bmp \
#    dsa-real80-cr-200-s-8.bmp \
#    dsa-real80-cr-200-s-9.bmp \
#    dsa-real80-cr-200-s-10.bmp \
#    dsa-real40-cr-120-s-1.bmp \
#    dsa-real40-cr-120-s-2.bmp \
#    dsa-real40-cr-120-s-3.bmp \
#    dsa-real40-cr-120-s-4.bmp \
#    dsa-real40-cr-120-s-5.bmp \
#    dsa-real40-cr-120-s-6.bmp \
#    dsa-real40-cr-120-s-7.bmp \
#    dsa-real40-cr-120-s-8.bmp \
#    dsa-real40-cr-120-s-9.bmp \
#    dsa-real40-cr-120-s-10.bmp \
#    dsa-real40-cr-130-s-1.bmp \
#    dsa-real40-cr-130-s-2.bmp \
#    dsa-real40-cr-130-s-3.bmp \
#    dsa-real40-cr-130-s-4.bmp \
#    dsa-real40-cr-130-s-5.bmp \
#    dsa-real40-cr-130-s-6.bmp \
#    dsa-real40-cr-130-s-7.bmp \
#    dsa-real40-cr-130-s-8.bmp \
#    dsa-real40-cr-130-s-9.bmp \
#    dsa-real40-cr-130-s-10.bmp \
#    dsa-real40-cr-140-s-1.bmp \
#    dsa-real40-cr-140-s-2.bmp \
#    dsa-real40-cr-140-s-3.bmp \
#    dsa-real40-cr-140-s-4.bmp \
#    dsa-real40-cr-140-s-5.bmp \
#    dsa-real40-cr-140-s-6.bmp \
#    dsa-real40-cr-140-s-7.bmp \
#    dsa-real40-cr-140-s-8.bmp \
#    dsa-real40-cr-140-s-9.bmp \
#    dsa-real40-cr-140-s-10.bmp \
#    dsa-real40-cr-150-s-1.bmp \
#    dsa-real40-cr-150-s-2.bmp \
#    dsa-real40-cr-150-s-3.bmp \
#    dsa-real40-cr-150-s-4.bmp \
#    dsa-real40-cr-150-s-5.bmp \
#    dsa-real40-cr-150-s-6.bmp \
#    dsa-real40-cr-150-s-7.bmp \
#    dsa-real40-cr-150-s-8.bmp \
#    dsa-real40-cr-150-s-9.bmp \
#    dsa-real40-cr-150-s-10.bmp \
#    dsa-real40-cr-160-s-1.bmp \
#    dsa-real40-cr-160-s-2.bmp \
#    dsa-real40-cr-160-s-3.bmp \
#    dsa-real40-cr-160-s-4.bmp \
#    dsa-real40-cr-160-s-5.bmp \
#    dsa-real40-cr-160-s-6.bmp \
#    dsa-real40-cr-160-s-7.bmp \
#    dsa-real40-cr-160-s-8.bmp \
#    dsa-real40-cr-160-s-9.bmp \
#    dsa-real40-cr-160-s-10.bmp \
#    dsa-real40-cr-170-s-1.bmp \
#    dsa-real40-cr-170-s-2.bmp \
#    dsa-real40-cr-170-s-3.bmp \
#    dsa-real40-cr-170-s-4.bmp \
#    dsa-real40-cr-170-s-5.bmp \
#    dsa-real40-cr-170-s-6.bmp \
#    dsa-real40-cr-170-s-7.bmp \
#    dsa-real40-cr-170-s-8.bmp \
#    dsa-real40-cr-170-s-9.bmp \
#    dsa-real40-cr-170-s-10.bmp \
#    dsa-real40-cr-180-s-1.bmp \
#    dsa-real40-cr-180-s-2.bmp \
#    dsa-real40-cr-180-s-3.bmp \
#    dsa-real40-cr-180-s-4.bmp \
#    dsa-real40-cr-180-s-5.bmp \
#    dsa-real40-cr-180-s-6.bmp \
#    dsa-real40-cr-180-s-7.bmp \
#    dsa-real40-cr-180-s-8.bmp \
#    dsa-real40-cr-180-s-9.bmp \
#    dsa-real40-cr-180-s-10.bmp \
#    dsa-real40-cr-190-s-1.bmp \
#    dsa-real40-cr-190-s-2.bmp \
#    dsa-real40-cr-190-s-3.bmp \
#    dsa-real40-cr-190-s-4.bmp \
#    dsa-real40-cr-190-s-5.bmp \
#    dsa-real40-cr-190-s-6.bmp \
#    dsa-real40-cr-190-s-7.bmp \
#    dsa-real40-cr-190-s-8.bmp \
#    dsa-real40-cr-190-s-9.bmp \
#    dsa-real40-cr-190-s-10.bmp \
#    dsa-real40-cr-200-s-1.bmp \
#    dsa-real40-cr-200-s-2.bmp \
#    dsa-real40-cr-200-s-3.bmp \
#    dsa-real40-cr-200-s-4.bmp \
#    dsa-real40-cr-200-s-5.bmp \
#    dsa-real40-cr-200-s-6.bmp \
#    dsa-real40-cr-200-s-7.bmp \
#    dsa-real40-cr-200-s-8.bmp \
#    dsa-real40-cr-200-s-9.bmp \
#    dsa-real40-cr-200-s-10.bmp \



#    dsa-real20-cr-120-s-1.bmp \
#    dsa-real20-cr-120-s-2.bmp \
#    dsa-real20-cr-120-s-3.bmp \
#    dsa-real20-cr-120-s-4.bmp \
#    dsa-real20-cr-120-s-5.bmp \
#    dsa-real20-cr-120-s-6.bmp \
#    dsa-real20-cr-120-s-7.bmp \
#    dsa-real20-cr-120-s-8.bmp \
#    dsa-real20-cr-120-s-9.bmp \
#    dsa-real20-cr-120-s-10.bmp \
#    dsa-real30-cr-120-s-1.bmp \
#    dsa-real30-cr-120-s-2.bmp \
#    dsa-real30-cr-120-s-3.bmp \
#    dsa-real30-cr-120-s-4.bmp \
#    dsa-real30-cr-120-s-5.bmp \
#    dsa-real30-cr-120-s-6.bmp \
#    dsa-real30-cr-120-s-7.bmp \
#    dsa-real30-cr-120-s-8.bmp \
#    dsa-real30-cr-120-s-9.bmp \
#    dsa-real30-cr-120-s-10.bmp \

#    sa-real30-s-5.bmp \
#    sa-real30-s-6.bmp \
#    sa-real30-s-7.bmp \
#    sa-real30-s-8.bmp \
#    sa-real30-s-9.bmp \
#    sa-real30-s-10.bmp \
#    dsa-real30-cr-130-s-1.bmp \
#    dsa-real30-cr-130-s-2.bmp \
#    dsa-real30-cr-130-s-3.bmp \
#    dsa-real30-cr-130-s-4.bmp \
#    dsa-real30-cr-130-s-5.bmp \
#    dsa-real30-cr-130-s-6.bmp \
#    dsa-real30-cr-130-s-7.bmp \
#    dsa-real30-cr-130-s-8.bmp \
#    dsa-real30-cr-130-s-9.bmp \
#    dsa-real30-cr-130-s-10.bmp \
#    dsa-real30-cr-140-s-1.bmp \
#    dsa-real30-cr-140-s-2.bmp \
#    dsa-real30-cr-140-s-3.bmp \
#    dsa-real30-cr-140-s-4.bmp \
#    dsa-real30-cr-140-s-5.bmp \
#    dsa-real30-cr-140-s-6.bmp \
#    dsa-real30-cr-140-s-7.bmp \
#    dsa-real30-cr-140-s-8.bmp \
#    dsa-real30-cr-140-s-9.bmp \
#    dsa-real30-cr-140-s-10.bmp \
#    dsa-real30-cr-150-s-1.bmp \
#    dsa-real30-cr-150-s-2.bmp \
#    dsa-real30-cr-150-s-3.bmp \
#    dsa-real30-cr-150-s-4.bmp \
#    dsa-real30-cr-150-s-5.bmp \
#    dsa-real30-cr-150-s-6.bmp \
#    dsa-real30-cr-150-s-7.bmp \
#    dsa-real30-cr-150-s-8.bmp \
#    dsa-real30-cr-150-s-9.bmp \
#    dsa-real30-cr-150-s-10.bmp \
#    dsa-real30-cr-160-s-1.bmp \
#    dsa-real30-cr-160-s-2.bmp \
#    dsa-real30-cr-160-s-3.bmp \
#    dsa-real30-cr-160-s-4.bmp \
#    dsa-real30-cr-160-s-5.bmp \
#    dsa-real30-cr-160-s-6.bmp \
#    dsa-real30-cr-160-s-7.bmp \
#    dsa-real30-cr-160-s-8.bmp \
#    dsa-real30-cr-160-s-9.bmp \
#    dsa-real30-cr-160-s-10.bmp \
#    dsa-real30-cr-170-s-1.bmp \
#    dsa-real30-cr-170-s-2.bmp \
#    dsa-real30-cr-170-s-3.bmp \
#    dsa-real30-cr-170-s-4.bmp \
#    dsa-real30-cr-170-s-5.bmp \
#    dsa-real30-cr-170-s-6.bmp \
#    dsa-real30-cr-170-s-7.bmp \
#    dsa-real30-cr-170-s-8.bmp \
#    dsa-real30-cr-170-s-9.bmp \
#    dsa-real30-cr-170-s-10.bmp \
#    dsa-real30-cr-180-s-1.bmp \
#    dsa-real30-cr-180-s-2.bmp \
#    dsa-real30-cr-180-s-3.bmp \
#    dsa-real30-cr-180-s-4.bmp \
#    dsa-real30-cr-180-s-5.bmp \
#    dsa-real30-cr-180-s-6.bmp \
#    dsa-real30-cr-180-s-7.bmp \
#    dsa-real30-cr-180-s-8.bmp \
#    dsa-real30-cr-180-s-9.bmp \
#    dsa-real30-cr-180-s-10.bmp \
#    dsa-real30-cr-190-s-1.bmp \
#    dsa-real30-cr-190-s-2.bmp \
#    dsa-real30-cr-190-s-3.bmp \
#    dsa-real30-cr-190-s-4.bmp \
#    dsa-real30-cr-190-s-5.bmp \
#    dsa-real30-cr-190-s-6.bmp \
#    dsa-real30-cr-190-s-7.bmp \
#    dsa-real30-cr-190-s-8.bmp \
#    dsa-real30-cr-190-s-9.bmp \
#    dsa-real30-cr-190-s-10.bmp \
#    dsa-real30-cr-200-s-1.bmp \
#    dsa-real30-cr-200-s-2.bmp \
#    dsa-real30-cr-200-s-3.bmp \
#    dsa-real30-cr-200-s-4.bmp \
#    dsa-real30-cr-200-s-5.bmp \
#    dsa-real30-cr-200-s-6.bmp \
#    dsa-real30-cr-200-s-7.bmp \
#    dsa-real30-cr-200-s-8.bmp \
#    dsa-real30-cr-200-s-9.bmp \
#    dsa-real30-cr-200-s-10.bmp \



#    sa-real20-s-4.bmp \
#    sa-real20-s-5.bmp \
#    sa-real20-s-6.bmp \
#    sa-real20-s-7.bmp \
#    dsa-real20-cr-150-s-6.bmp \
#    dsa-real20-cr-150-s-7.bmp \
#    dsa-real20-cr-150-s-8.bmp \
#    dsa-real20-cr-150-s-9.bmp \
#    dsa-real20-cr-150-s-10.bmp \
#    dsa-real20-cr-160-s-6.bmp \
#    dsa-real20-cr-160-s-7.bmp \
#    dsa-real20-cr-160-s-8.bmp \
#    dsa-real20-cr-160-s-9.bmp \
#    dsa-real20-cr-160-s-10.bmp \
#    dsa-real20-cr-170-s-6.bmp \
#    dsa-real20-cr-170-s-7.bmp \
#    dsa-real20-cr-170-s-8.bmp \
#    dsa-real20-cr-170-s-9.bmp \
#    dsa-real20-cr-170-s-10.bmp \
#    dsa-real20-cr-180-s-6.bmp \
#    dsa-real20-cr-180-s-7.bmp \
#    dsa-real20-cr-180-s-8.bmp \
#    dsa-real20-cr-180-s-9.bmp \
#    dsa-real20-cr-180-s-10.bmp \
#    dsa-real20-cr-190-s-6.bmp \
#    dsa-real20-cr-190-s-7.bmp \
#    dsa-real20-cr-190-s-8.bmp \
#    dsa-real20-cr-190-s-9.bmp \
#    dsa-real20-cr-190-s-10.bmp \
#    dsa-real20-cr-200-s-6.bmp \
#    dsa-real20-cr-200-s-7.bmp \
#    dsa-real20-cr-200-s-8.bmp \
#    dsa-real20-cr-200-s-9.bmp \
#    dsa-real20-cr-200-s-10.bmp \
#    sa-real20-s-8.bmp \
#    sa-real20-s-9.bmp \
#    sa-real20-s-10.bmp \

#    sa-real20-s-1.bmp \
#    sa-real20-s-2.bmp \
#    sa-real20-s-3.bmp \
#    dsa-real20-cr-130-s-1.bmp \
#    dsa-real20-cr-130-s-2.bmp \
#    dsa-real20-cr-130-s-3.bmp \
#    dsa-real20-cr-130-s-4.bmp \
#    dsa-real20-cr-130-s-5.bmp \
#    dsa-real20-cr-130-s-6.bmp \
#    dsa-real20-cr-130-s-7.bmp \
#    dsa-real20-cr-130-s-8.bmp \
#    dsa-real20-cr-130-s-9.bmp \
#    dsa-real20-cr-130-s-10.bmp \
#    dsa-real20-cr-140-s-1.bmp \
#    dsa-real20-cr-140-s-2.bmp \
#    dsa-real20-cr-140-s-3.bmp \
#    dsa-real20-cr-140-s-4.bmp \
#    dsa-real20-cr-140-s-5.bmp \
#    dsa-real20-cr-140-s-6.bmp \
#    dsa-real20-cr-140-s-7.bmp \
#    dsa-real20-cr-140-s-8.bmp \
#    dsa-real20-cr-140-s-9.bmp \
#    dsa-real20-cr-140-s-10.bmp \
#    dsa-real20-cr-150-s-1.bmp \
#    dsa-real20-cr-150-s-2.bmp \
#    dsa-real20-cr-150-s-3.bmp \
#    dsa-real20-cr-150-s-4.bmp \
#    dsa-real20-cr-150-s-5.bmp \
#    dsa-real20-cr-160-s-1.bmp \
#    dsa-real20-cr-160-s-2.bmp \
#    dsa-real20-cr-160-s-3.bmp \
#    dsa-real20-cr-160-s-4.bmp \
#    dsa-real20-cr-160-s-5.bmp \
#    dsa-real20-cr-170-s-1.bmp \
#    dsa-real20-cr-170-s-2.bmp \
#    dsa-real20-cr-170-s-3.bmp \
#    dsa-real20-cr-170-s-4.bmp \
#    dsa-real20-cr-170-s-5.bmp \
#    dsa-real20-cr-180-s-1.bmp \
#    dsa-real20-cr-180-s-2.bmp \
#    dsa-real20-cr-180-s-3.bmp \
#    dsa-real20-cr-180-s-4.bmp \
#    dsa-real20-cr-180-s-5.bmp \
#    dsa-real20-cr-190-s-1.bmp \
#    dsa-real20-cr-190-s-2.bmp \
#    dsa-real20-cr-190-s-3.bmp \
#    dsa-real20-cr-190-s-4.bmp \
#    dsa-real20-cr-190-s-5.bmp \
#    dsa-real20-cr-200-s-1.bmp \
#    dsa-real20-cr-200-s-2.bmp \
#    dsa-real20-cr-200-s-3.bmp \
#    dsa-real20-cr-200-s-4.bmp \
#    dsa-real20-cr-200-s-5.bmp \

 #    braemoor-limited-50-cvis-2.bmp \
#    braemoor-height-2.bmp \
#    braemoor-viewshed-2.bmp \
#    braemoor-cvis-2.bmp \  commented out to avoid 17-hour re-run
#    braemoor-gradient-2.txt \
#    braemoor-nudge-limited-50-pts-10.txt \
#    braemoor-nudge-limited-100-pts-10.txt \
#    braemoor-nudge-limited-100-pts-sequential-100.txt \
#    braemoor-gradient-limited-100-pts-sequential-100.txt \
#    braemoor-pattern-search-limited-100-pts-sequential-100.txt \
#    braemoor-pattern-search-limited-100-pts-sequential-100b.txt \
#    braemoor-pattern-search-limited-100-pts-sequential-100c.txt \
#    braemoor-pattern-search-limited-100-pts-sequential-50.txt \
#    braemoor-pattern-search-limited-100-pts-sequential-50b.txt \
#    braemoor-pattern-search-limited-100-pts-sequential-50c.txt \
#    braemoor-pattern-search-limited-100-pts-sequential-33.txt \
#    braemoor-pattern-search-limited-100-pts-sequential-33b.txt \
#    braemoor-pattern-search-limited-100-pts-sequential-33c.txt \
#    braemoor-pattern-search-limited-100-pts-sequential-25.txt \
#    braemoor-pattern-search-limited-100-pts-sequential-25b.txt \
#    braemoor-pattern-search-limited-100-pts-sequential-25c.txt \
#    braemoor-pattern-search-limited-100-pts-sequential-20.txt \
#    braemoor-pattern-search-limited-100-pts-sequential-20b.txt \
#    braemoor-pattern-search-limited-100-pts-sequential-20c.txt \
#    braemoor-pattern-search-limited-100-pts-sequential-15.txt \
#    braemoor-pattern-search-limited-100-pts-sequential-15b.txt \
#    braemoor-pattern-search-limited-100-pts-sequential-15c.txt \


.PHONY: all
all : $(EXECUTABLES) $(GENERATED_DATA_FILES)


.PHONY: clean
clean:
	rm -f *.o *.d $(EXECUTABLES)


# Object files of each executable:
corners2    : corners2.o
ucsclim     : ucsclim.o
voids       : voids.o
test        : test.o
srtm_test   : srtm_test.o  srtm.o
mk_flat_srtm : mk_flat_srtm.o
mk_dish_srtm : mk_dish_srtm.o
mk_wavy_srtm : mk_wavy_srtm.o
mk_wavy2_srtm : mk_wavy2_srtm.o

visibility  : visibility.o srtm.o cvis_wang.o bmp.o msg.o grd.o pg.o ts.o sa.o \
              State.o Statistics.o Temperature.o ge.o Args.o Disk.o


# C++11 on Mac OS X requires clang instead of gcc.
CC          = clang
CXX         = clang++
CXXFLAGS    = -Wno-c++11-extensions -std=c++11
LDFLAGS     = -lstdc++ -lm

#-stdlib=libc++

include $(subst .c,.d,$(C_FILES))

%.d: %.c
	$(CC) -MM -MG $(CPPCFLAGS) $< > $@.$$$$; \
	sed 's,/($*/)/.o[ :]*,/1.o $@ : ,g' < $@.$$$$ > $@; \
	rm -f $@.$$$$


%.dpp: %.cpp
	$(CC) -MM -MG $(CPPCFLAGS) $< > $@.$$$$; \
	sed 's,/($*/)/.o[ :]*,/1.o $@ : ,g' < $@.$$$$ > $@; \
	rm -f $@.$$$$

# elevation data files
HGT     = ../Data/SRTM_1_Arc_Second/N37W123.hgt
REAL    = ../Data/SRTM_1_Arc_Second/N37W123.hgt
FLAT    = ../Data/SRTM_1_Arc_Second/flat.hgt
DISH    = ../Data/SRTM_1_Arc_Second/dish.hgt
WAVY    = ../Data/SRTM_1_Arc_Second/wavy.hgt
WAVY2   = ../Data/SRTM_1_Arc_Second/wavy2.hgt
BRC     = ../Data/SRTM_1_Arc_Second/N40W120.hgt
MAUI_NW = ../Data/SRTM_1_Arc_Second/N21W157.hgt
MAUI_SE = ../Data/SRTM_1_Arc_Second/N20W156.hgt
MAUI_SW = ../Data/SRTM_1_Arc_Second/N20W157.hgt
PAHOA   = ../Data/SRTM_1_Arc_Second/N19W155.hgt

WIN_480x360  = 37.1 -122.2 37.2 -122.0666666666667
WIN_480x360A = 37.1 -122.0666666666667 37.2 -121.9333333333333
WIN_PAHOA    = 19.49 -154.96 19.50 -154.95

# pitch = 72
VIEWPOINTS_10 =  37.11 -122.13 \
              -v 37.11 -122.15 \
              -v 37.11 -122.17 \
              -v 37.11 -122.19 \
              -v 37.13 -122.15 \
              -v 37.13 -122.17 \
              -v 37.13 -122.19 \
              -v 37.15 -122.15 \
              -v 37.15 -122.17 \
              -v 37.15 -122.19


VIEWPOINTS_10B = 37.13 -122.11 \
              -v 37.13 -122.13 \
              -v 37.13 -122.15 \
              -v 37.13 -122.17 \
              -v 37.15 -122.13 \
              -v 37.15 -122.15 \
              -v 37.15 -122.17 \
              -v 37.17 -122.13 \
              -v 37.17 -122.15 \
              -v 37.17 -122.17


VIEWPOINTS_10C = 37.15 -122.09 \
              -v 37.15 -122.11 \
              -v 37.15 -122.13 \
              -v 37.15 -122.15 \
              -v 37.17 -122.11 \
              -v 37.17 -122.13 \
              -v 37.17 -122.15 \
              -v 37.19 -122.11 \
              -v 37.19 -122.13 \
              -v 37.19 -122.15

WIN_240x180A = 37.1 -122.2 37.15 -122.1333333333333
VP_240x180A_10 = 37.11 -122.145 \
              -v 37.11 -122.16 \
              -v 37.11 -122.175 \
              -v 37.11 -122.19 \
              -v 37.125 -122.16 \
              -v 37.125 -122.175 \
              -v 37.125 -122.19 \
              -v 37.14 -122.16 \
              -v 37.14 -122.175 \
              -v 37.14 -122.19

WIN_240x180B = 37.1 -122.1333333333333 37.15 -122.0666666666667
VP_240x180B_10 = 37.11 -122.078 \
              -v 37.11 -122.093 \
              -v 37.11 -122.108 \
              -v 37.11 -122.123 \
              -v 37.125 -122.093 \
              -v 37.125 -122.108 \
              -v 37.125 -122.123 \
              -v 37.14 -122.093 \
              -v 37.14 -122.108 \
              -v 37.14 -122.123

# ALREADY UPDATED
braemoor-viewshed-2.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -v -122.1489 37.1158 -v -122.19 37.11 -V -bmp $@


# First example of a gradient ascent algorithm going the wrong
# direction when merging independent computations.
# This one oscillates between n=3724 and n=3611.
braemoor-nudge-limited-100-pts-10.txt : visibility
	./visibility -h $(HGT) -123 37 -w $(WIN_480x360) -r 100 -G 0 $@ $(VIEWPOINTS_10) -t 10


# ======
# Hawaii
# ======

pahoa-height.bmp : visibility
	./visibility -hgt $(PAHOA) -hgt-latlon 19 -155 -w $(WIN_PAHOA) -H -bmp $@


# ==============

# ps-real-vrand

ps-real-vrand-s1.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 1

ps-real-vrand-s2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 2

ps-real-vrand-s3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 3

ps-real-vrand-s4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 4

ps-real-vrand-s5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 5

ps-real-vrand-s6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 6

ps-real-vrand-s7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 7

ps-real-vrand-s8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 8

ps-real-vrand-s9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 9

ps-real-vrand-s10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 10

ps-real-vrand-s11.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 11

ps-real-vrand-s12.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 12

ps-real-vrand-s13.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 13

ps-real-vrand-s14.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 14

ps-real-vrand-s15.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 15

ps-real-vrand-s16.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 16

ps-real-vrand-s17.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 17

ps-real-vrand-s18.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 18

ps-real-vrand-s19.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 19

ps-real-vrand-s20.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 20

# ps-flat-vrand

ps-flat-vrand-s11.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 11

ps-flat-vrand-s12.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 12

ps-flat-vrand-s13.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 13

ps-flat-vrand-s14.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 14

ps-flat-vrand-s15.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 15

ps-flat-vrand-s16.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 16

ps-flat-vrand-s17.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 17

ps-flat-vrand-s18.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 18

ps-flat-vrand-s19.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 19

ps-flat-vrand-s20.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 20

# ps-dish-vrand

ps-dish-vrand-s11.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 11

ps-dish-vrand-s12.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 12

ps-dish-vrand-s13.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 13

ps-dish-vrand-s14.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 14

ps-dish-vrand-s15.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 15

ps-dish-vrand-s16.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 16

ps-dish-vrand-s17.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 17

ps-dish-vrand-s18.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 18

ps-dish-vrand-s19.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 19

ps-dish-vrand-s20.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 20

# ps-wavy-vrand

ps-wavy-vrand-s11.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 11

ps-wavy-vrand-s12.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 12

ps-wavy-vrand-s13.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 13

ps-wavy-vrand-s14.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 14

ps-wavy-vrand-s15.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 15

ps-wavy-vrand-s16.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 16

ps-wavy-vrand-s17.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 17

ps-wavy-vrand-s18.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 18

ps-wavy-vrand-s19.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 19

ps-wavy-vrand-s20.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 20

# ps-wavy2-vrand

ps-wavy2-vrand-s11.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 11

ps-wavy2-vrand-s12.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 12

ps-wavy2-vrand-s13.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 13

ps-wavy2-vrand-s14.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 14

ps-wavy2-vrand-s15.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 15

ps-wavy2-vrand-s16.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 16

ps-wavy2-vrand-s17.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 17

ps-wavy2-vrand-s18.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 18

ps-wavy2-vrand-s19.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 19

ps-wavy2-vrand-s20.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 20

# ==============

# ga-real-vrand

ga-real-vrand-s11.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 11

ga-real-vrand-s12.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 12

ga-real-vrand-s13.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 13

ga-real-vrand-s14.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 14

ga-real-vrand-s15.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 15

ga-real-vrand-s16.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 16

ga-real-vrand-s17.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 17

ga-real-vrand-s18.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 18

ga-real-vrand-s19.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 19

ga-real-vrand-s20.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 20

# ga-flat-vrand

ga-flat-vrand-s11.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 11

ga-flat-vrand-s12.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 12

ga-flat-vrand-s13.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 13

ga-flat-vrand-s14.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 14

ga-flat-vrand-s15.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 15

ga-flat-vrand-s16.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 16

ga-flat-vrand-s17.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 17

ga-flat-vrand-s18.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 18

ga-flat-vrand-s19.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 19

ga-flat-vrand-s20.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 20

# ga-dish-vrand

ga-dish-vrand-s11.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 11

ga-dish-vrand-s12.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 12

ga-dish-vrand-s13.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 13

ga-dish-vrand-s14.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 14

ga-dish-vrand-s15.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 15

ga-dish-vrand-s16.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 16

ga-dish-vrand-s17.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 17

ga-dish-vrand-s18.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 18

ga-dish-vrand-s19.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 19

ga-dish-vrand-s20.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 20

# ga-wavy-vrand

ga-wavy-vrand-s11.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 11

ga-wavy-vrand-s12.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 12

ga-wavy-vrand-s13.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 13

ga-wavy-vrand-s14.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 14

ga-wavy-vrand-s15.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 15

ga-wavy-vrand-s16.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 16

ga-wavy-vrand-s17.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 17

ga-wavy-vrand-s18.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 18

ga-wavy-vrand-s19.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 19

ga-wavy-vrand-s20.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 20

# ga-wavy2-vrand

ga-wavy2-vrand-s11.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 11

ga-wavy2-vrand-s12.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 12

ga-wavy2-vrand-s13.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 13

ga-wavy2-vrand-s14.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 14

ga-wavy2-vrand-s15.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 15

ga-wavy2-vrand-s16.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 16

ga-wavy2-vrand-s17.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 17

ga-wavy2-vrand-s18.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 18

ga-wavy2-vrand-s19.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 19

ga-wavy2-vrand-s20.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 20

# ==============

# n-real-vrand

n-real-vrand-s1.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 30 -s 1

n-real-vrand-s2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 30 -s 2

n-real-vrand-s3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 30 -s 3

n-real-vrand-s4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 30 -s 4

n-real-vrand-s5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 30 -s 5

n-real-vrand-s6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 30 -s 6

n-real-vrand-s7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 30 -s 7

n-real-vrand-s8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 30 -s 8

n-real-vrand-s9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 30 -s 9

n-real-vrand-s10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 30 -s 10

# n-flat-vrand

n-flat-vrand-s1.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 30 -s 1

n-flat-vrand-s2.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 30 -s 2

n-flat-vrand-s3.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 30 -s 3

n-flat-vrand-s4.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 30 -s 4

n-flat-vrand-s5.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 30 -s 5

n-flat-vrand-s6.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 30 -s 6

n-flat-vrand-s7.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 30 -s 7

n-flat-vrand-s8.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 30 -s 8

n-flat-vrand-s9.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 30 -s 9

n-flat-vrand-s10.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 30 -s 10

# n-dish-vrand

n-dish-vrand-s1.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 30 -s 1

n-dish-vrand-s2.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 30 -s 2

n-dish-vrand-s3.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 30 -s 3

n-dish-vrand-s4.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 30 -s 4

n-dish-vrand-s5.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 30 -s 5

n-dish-vrand-s6.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 30 -s 6

n-dish-vrand-s7.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 30 -s 7

n-dish-vrand-s8.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 30 -s 8

n-dish-vrand-s9.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 30 -s 9

n-dish-vrand-s10.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 30 -s 10

# n-wavy-vrand

n-wavy-vrand-s1.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 30 -s 1

n-wavy-vrand-s2.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 30 -s 2

n-wavy-vrand-s3.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 30 -s 3

n-wavy-vrand-s4.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 30 -s 4

n-wavy-vrand-s5.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 30 -s 5

n-wavy-vrand-s6.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 30 -s 6

n-wavy-vrand-s7.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 30 -s 7

n-wavy-vrand-s8.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 30 -s 8

n-wavy-vrand-s9.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 30 -s 9

n-wavy-vrand-s10.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 30 -s 10

# n-wavy2-vrand

n-wavy2-vrand-s1.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 30 -s 1

n-wavy2-vrand-s2.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 30 -s 2

n-wavy2-vrand-s3.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 30 -s 3

n-wavy2-vrand-s4.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 30 -s 4

n-wavy2-vrand-s5.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 30 -s 5

n-wavy2-vrand-s6.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 30 -s 6

n-wavy2-vrand-s7.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 30 -s 7

n-wavy2-vrand-s8.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 30 -s 8

n-wavy2-vrand-s9.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 30 -s 9

n-wavy2-vrand-s10.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 30 -s 10


# ==============

# sa-real

sa-real-s-1.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 1

sa-real-s-2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 2

sa-real-s-3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 3

sa-real-s-4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 4

sa-real-s-5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 5

sa-real-s-6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 6

sa-real-s-7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 7

sa-real-s-8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 8

sa-real-s-9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 9

sa-real-s-10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 10


# ==============

# sa-real20

sa-real20-s-1.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 1

sa-real20-s-2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 2

sa-real20-s-3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 3

sa-real20-s-4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 4

sa-real20-s-5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 5

sa-real20-s-6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 6

sa-real20-s-7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 7

sa-real20-s-8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 8

sa-real20-s-9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 9

sa-real20-s-10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 10


# sa-real30

sa-real30-s-1.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 1

sa-real30-s-2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 2

sa-real30-s-3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 3

sa-real30-s-4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 4

sa-real30-s-5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 5

sa-real30-s-6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 6

sa-real30-s-7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 7

sa-real30-s-8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 8

sa-real30-s-9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 9

sa-real30-s-10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 10


# ==============

# sa-flat

sa-flat-s-1.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 1

sa-flat-s-2.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 2

sa-flat-s-3.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 3

sa-flat-s-4.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 4

sa-flat-s-5.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 5

sa-flat-s-6.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 6

sa-flat-s-7.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 7

sa-flat-s-8.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 8

sa-flat-s-9.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 9

sa-flat-s-10.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 10


# ==============

# sa-dish

sa-dish-s-1.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 1

sa-dish-s-2.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 2

sa-dish-s-3.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 3

sa-dish-s-4.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 4

sa-dish-s-5.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 5

sa-dish-s-6.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 6

sa-dish-s-7.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 7

sa-dish-s-8.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 8

sa-dish-s-9.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 9

sa-dish-s-10.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 10


# ==============

# sa-wavy

sa-wavy-s-1.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 1

sa-wavy-s-2.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 2

sa-wavy-s-3.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 3

sa-wavy-s-4.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 4

sa-wavy-s-5.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 5

sa-wavy-s-6.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 6

sa-wavy-s-7.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 7

sa-wavy-s-8.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 8

sa-wavy-s-9.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 9

sa-wavy-s-10.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 10


# ==============

# sa-wavy2

sa-wavy2-s-1.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 1

sa-wavy2-s-2.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 2

sa-wavy2-s-3.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 3

sa-wavy2-s-4.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 4

sa-wavy2-s-5.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 5

sa-wavy2-s-6.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 6

sa-wavy2-s-7.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 7

sa-wavy2-s-8.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 8

sa-wavy2-s-9.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 9

sa-wavy2-s-10.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 10



# ==============

# dsa-real-cr-120

dsa-real-cr-120-s-11.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 11

dsa-real-cr-120-s-12.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 12

dsa-real-cr-120-s-13.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 13

dsa-real-cr-120-s-14.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 14

dsa-real-cr-120-s-15.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 15

dsa-real-cr-120-s-16.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 16

dsa-real-cr-120-s-17.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 17

dsa-real-cr-120-s-18.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 18

dsa-real-cr-120-s-19.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 19

dsa-real-cr-120-s-20.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 20

# dsa-real-cr-130

dsa-real-cr-130-s-11.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 11

dsa-real-cr-130-s-12.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 12

dsa-real-cr-130-s-13.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 13

dsa-real-cr-130-s-14.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 14

dsa-real-cr-130-s-15.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 15

dsa-real-cr-130-s-16.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 16

dsa-real-cr-130-s-17.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 17

dsa-real-cr-130-s-18.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 18

dsa-real-cr-130-s-19.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 19

dsa-real-cr-130-s-20.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 20

# dsa-real-cr-140

dsa-real-cr-140-s-11.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 11

dsa-real-cr-140-s-12.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 12

dsa-real-cr-140-s-13.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 13

dsa-real-cr-140-s-14.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 14

dsa-real-cr-140-s-15.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 15

dsa-real-cr-140-s-16.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 16

dsa-real-cr-140-s-17.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 17

dsa-real-cr-140-s-18.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 18

dsa-real-cr-140-s-19.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 19

dsa-real-cr-140-s-20.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 20

# dsa-real-cr-150

dsa-real-cr-150-s-11.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 11

dsa-real-cr-150-s-12.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 12

dsa-real-cr-150-s-13.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 13

dsa-real-cr-150-s-14.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 14

dsa-real-cr-150-s-15.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 15

dsa-real-cr-150-s-16.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 16

dsa-real-cr-150-s-17.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 17

dsa-real-cr-150-s-18.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 18

dsa-real-cr-150-s-19.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 19

dsa-real-cr-150-s-20.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 20

# dsa-real-cr-160

dsa-real-cr-160-s-11.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 11

dsa-real-cr-160-s-12.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 12

dsa-real-cr-160-s-13.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 13

dsa-real-cr-160-s-14.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 14

dsa-real-cr-160-s-15.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 15

dsa-real-cr-160-s-16.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 16

dsa-real-cr-160-s-17.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 17

dsa-real-cr-160-s-18.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 18

dsa-real-cr-160-s-19.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 19

dsa-real-cr-160-s-20.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 20

# dsa-real-cr-170

dsa-real-cr-170-s-11.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 11

dsa-real-cr-170-s-12.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 12

dsa-real-cr-170-s-13.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 13

dsa-real-cr-170-s-14.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 14

dsa-real-cr-170-s-15.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 15

dsa-real-cr-170-s-16.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 16

dsa-real-cr-170-s-17.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 17

dsa-real-cr-170-s-18.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 18

dsa-real-cr-170-s-19.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 19

dsa-real-cr-170-s-20.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 20



# dsa-real-cr-180

dsa-real-cr-180-s-1.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 1

dsa-real-cr-180-s-2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 2

dsa-real-cr-180-s-3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 3

dsa-real-cr-180-s-4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 4

dsa-real-cr-180-s-5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 5

dsa-real-cr-180-s-6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 6

dsa-real-cr-180-s-7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 7

dsa-real-cr-180-s-8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 8

dsa-real-cr-180-s-9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 9

dsa-real-cr-180-s-10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 10



# dsa-real-cr-190

dsa-real-cr-190-s-1.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 1

dsa-real-cr-190-s-2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 2

dsa-real-cr-190-s-3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 3

dsa-real-cr-190-s-4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 4

dsa-real-cr-190-s-5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 5

dsa-real-cr-190-s-6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 6

dsa-real-cr-190-s-7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 7

dsa-real-cr-190-s-8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 8

dsa-real-cr-190-s-9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 9

dsa-real-cr-190-s-10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 10



# dsa-real-cr-200

dsa-real-cr-200-s-1.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 1

dsa-real-cr-200-s-2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 2

dsa-real-cr-200-s-3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 3

dsa-real-cr-200-s-4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 4

dsa-real-cr-200-s-5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 5

dsa-real-cr-200-s-6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 6

dsa-real-cr-200-s-7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 7

dsa-real-cr-200-s-8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 8

dsa-real-cr-200-s-9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 9

dsa-real-cr-200-s-10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 10


# dsa-real20-cr-120

dsa-real20-cr-120-s-1.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 1

dsa-real20-cr-120-s-2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 2

dsa-real20-cr-120-s-3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 3

dsa-real20-cr-120-s-4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 4

dsa-real20-cr-120-s-5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 5

dsa-real20-cr-120-s-6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 6

dsa-real20-cr-120-s-7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 7

dsa-real20-cr-120-s-8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 8

dsa-real20-cr-120-s-9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 9

dsa-real20-cr-120-s-10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 10


# dsa-real20-cr-130

dsa-real20-cr-130-s-1.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 1

dsa-real20-cr-130-s-2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 2

dsa-real20-cr-130-s-3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 3

dsa-real20-cr-130-s-4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 4

dsa-real20-cr-130-s-5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 5

dsa-real20-cr-130-s-6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 6

dsa-real20-cr-130-s-7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 7

dsa-real20-cr-130-s-8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 8

dsa-real20-cr-130-s-9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 9

dsa-real20-cr-130-s-10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 10

# dsa-real20-cr-140

dsa-real20-cr-140-s-1.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 1

dsa-real20-cr-140-s-2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 2

dsa-real20-cr-140-s-3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 3

dsa-real20-cr-140-s-4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 4

dsa-real20-cr-140-s-5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 5

dsa-real20-cr-140-s-6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 6

dsa-real20-cr-140-s-7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 7

dsa-real20-cr-140-s-8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 8

dsa-real20-cr-140-s-9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 9

dsa-real20-cr-140-s-10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 10

# dsa-real20-cr-150

dsa-real20-cr-150-s-1.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 1

dsa-real20-cr-150-s-2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 2

dsa-real20-cr-150-s-3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 3

dsa-real20-cr-150-s-4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 4

dsa-real20-cr-150-s-5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 5

dsa-real20-cr-150-s-6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 6

dsa-real20-cr-150-s-7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 7

dsa-real20-cr-150-s-8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 8

dsa-real20-cr-150-s-9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 9

dsa-real20-cr-150-s-10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 10

# dsa-real20-cr-160

dsa-real20-cr-160-s-1.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 1

dsa-real20-cr-160-s-2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 2

dsa-real20-cr-160-s-3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 3

dsa-real20-cr-160-s-4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 4

dsa-real20-cr-160-s-5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 5

dsa-real20-cr-160-s-6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 6

dsa-real20-cr-160-s-7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 7

dsa-real20-cr-160-s-8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 8

dsa-real20-cr-160-s-9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 9

dsa-real20-cr-160-s-10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 10

# dsa-real20-cr-170

dsa-real20-cr-170-s-1.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 1

dsa-real20-cr-170-s-2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 2

dsa-real20-cr-170-s-3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 3

dsa-real20-cr-170-s-4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 4

dsa-real20-cr-170-s-5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 5

dsa-real20-cr-170-s-6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 6

dsa-real20-cr-170-s-7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 7

dsa-real20-cr-170-s-8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 8

dsa-real20-cr-170-s-9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 9

dsa-real20-cr-170-s-10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 10



# dsa-real20-cr-180

dsa-real20-cr-180-s-1.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 1

dsa-real20-cr-180-s-2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 2

dsa-real20-cr-180-s-3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 3

dsa-real20-cr-180-s-4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 4

dsa-real20-cr-180-s-5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 5

dsa-real20-cr-180-s-6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 6

dsa-real20-cr-180-s-7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 7

dsa-real20-cr-180-s-8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 8

dsa-real20-cr-180-s-9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 9

dsa-real20-cr-180-s-10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 10



# dsa-real20-cr-190

dsa-real20-cr-190-s-1.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 1

dsa-real20-cr-190-s-2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 2

dsa-real20-cr-190-s-3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 3

dsa-real20-cr-190-s-4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 4

dsa-real20-cr-190-s-5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 5

dsa-real20-cr-190-s-6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 6

dsa-real20-cr-190-s-7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 7

dsa-real20-cr-190-s-8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 8

dsa-real20-cr-190-s-9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 9

dsa-real20-cr-190-s-10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 10



# dsa-real20-cr-200

dsa-real20-cr-200-s-1.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 1

dsa-real20-cr-200-s-2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 2

dsa-real20-cr-200-s-3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 3

dsa-real20-cr-200-s-4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 4

dsa-real20-cr-200-s-5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 5

dsa-real20-cr-200-s-6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 6

dsa-real20-cr-200-s-7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 7

dsa-real20-cr-200-s-8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 8

dsa-real20-cr-200-s-9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 9

dsa-real20-cr-200-s-10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 10



# dsa-real30-cr-120

dsa-real30-cr-120-s-1.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 1

dsa-real30-cr-120-s-2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 2

dsa-real30-cr-120-s-3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 3

dsa-real30-cr-120-s-4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 4

dsa-real30-cr-120-s-5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 5

dsa-real30-cr-120-s-6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 6

dsa-real30-cr-120-s-7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 7

dsa-real30-cr-120-s-8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 8

dsa-real30-cr-120-s-9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 9

dsa-real30-cr-120-s-10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 10


# dsa-real30-cr-130

dsa-real30-cr-130-s-1.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 1

dsa-real30-cr-130-s-2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 2

dsa-real30-cr-130-s-3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 3

dsa-real30-cr-130-s-4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 4

dsa-real30-cr-130-s-5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 5

dsa-real30-cr-130-s-6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 6

dsa-real30-cr-130-s-7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 7

dsa-real30-cr-130-s-8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 8

dsa-real30-cr-130-s-9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 9

dsa-real30-cr-130-s-10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 10

# dsa-real30-cr-140

dsa-real30-cr-140-s-1.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 1

dsa-real30-cr-140-s-2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 2

dsa-real30-cr-140-s-3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 3

dsa-real30-cr-140-s-4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 4

dsa-real30-cr-140-s-5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 5

dsa-real30-cr-140-s-6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 6

dsa-real30-cr-140-s-7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 7

dsa-real30-cr-140-s-8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 8

dsa-real30-cr-140-s-9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 9

dsa-real30-cr-140-s-10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 10

# dsa-real30-cr-150

dsa-real30-cr-150-s-1.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 1

dsa-real30-cr-150-s-2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 2

dsa-real30-cr-150-s-3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 3

dsa-real30-cr-150-s-4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 4

dsa-real30-cr-150-s-5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 5

dsa-real30-cr-150-s-6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 6

dsa-real30-cr-150-s-7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 7

dsa-real30-cr-150-s-8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 8

dsa-real30-cr-150-s-9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 9

dsa-real30-cr-150-s-10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 10

# dsa-real30-cr-160

dsa-real30-cr-160-s-1.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 1

dsa-real30-cr-160-s-2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 2

dsa-real30-cr-160-s-3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 3

dsa-real30-cr-160-s-4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 4

dsa-real30-cr-160-s-5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 5

dsa-real30-cr-160-s-6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 6

dsa-real30-cr-160-s-7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 7

dsa-real30-cr-160-s-8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 8

dsa-real30-cr-160-s-9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 9

dsa-real30-cr-160-s-10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 10

# dsa-real30-cr-170

dsa-real30-cr-170-s-1.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 1

dsa-real30-cr-170-s-2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 2

dsa-real30-cr-170-s-3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 3

dsa-real30-cr-170-s-4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 4

dsa-real30-cr-170-s-5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 5

dsa-real30-cr-170-s-6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 6

dsa-real30-cr-170-s-7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 7

dsa-real30-cr-170-s-8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 8

dsa-real30-cr-170-s-9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 9

dsa-real30-cr-170-s-10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 10



# dsa-real30-cr-180

dsa-real30-cr-180-s-1.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 1

dsa-real30-cr-180-s-2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 2

dsa-real30-cr-180-s-3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 3

dsa-real30-cr-180-s-4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 4

dsa-real30-cr-180-s-5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 5

dsa-real30-cr-180-s-6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 6

dsa-real30-cr-180-s-7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 7

dsa-real30-cr-180-s-8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 8

dsa-real30-cr-180-s-9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 9

dsa-real30-cr-180-s-10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 10



# dsa-real30-cr-190

dsa-real30-cr-190-s-1.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 1

dsa-real30-cr-190-s-2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 2

dsa-real30-cr-190-s-3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 3

dsa-real30-cr-190-s-4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 4

dsa-real30-cr-190-s-5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 5

dsa-real30-cr-190-s-6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 6

dsa-real30-cr-190-s-7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 7

dsa-real30-cr-190-s-8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 8

dsa-real30-cr-190-s-9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 9

dsa-real30-cr-190-s-10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 10



# dsa-real30-cr-200

dsa-real30-cr-200-s-1.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 1

dsa-real30-cr-200-s-2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 2

dsa-real30-cr-200-s-3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 3

dsa-real30-cr-200-s-4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 4

dsa-real30-cr-200-s-5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 5

dsa-real30-cr-200-s-6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 6

dsa-real30-cr-200-s-7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 7

dsa-real30-cr-200-s-8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 8

dsa-real30-cr-200-s-9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 9

dsa-real30-cr-200-s-10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 10



# ===============

# dsa-real80-cr-120

dsa-real80-cr-120-s-1.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 1

dsa-real80-cr-120-s-2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 2

dsa-real80-cr-120-s-3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 3

dsa-real80-cr-120-s-4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 4

dsa-real80-cr-120-s-5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 5

dsa-real80-cr-120-s-6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 6

dsa-real80-cr-120-s-7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 7

dsa-real80-cr-120-s-8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 8

dsa-real80-cr-120-s-9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 9

dsa-real80-cr-120-s-10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 10


# dsa-real80-cr-130

dsa-real80-cr-130-s-1.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 1

dsa-real80-cr-130-s-2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 2

dsa-real80-cr-130-s-3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 3

dsa-real80-cr-130-s-4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 4

dsa-real80-cr-130-s-5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 5

dsa-real80-cr-130-s-6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 6

dsa-real80-cr-130-s-7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 7

dsa-real80-cr-130-s-8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 8

dsa-real80-cr-130-s-9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 9

dsa-real80-cr-130-s-10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 10

# dsa-real80-cr-140

dsa-real80-cr-140-s-1.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 1

dsa-real80-cr-140-s-2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 2

dsa-real80-cr-140-s-3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 3

dsa-real80-cr-140-s-4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 4

dsa-real80-cr-140-s-5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 5

dsa-real80-cr-140-s-6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 6

dsa-real80-cr-140-s-7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 7

dsa-real80-cr-140-s-8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 8

dsa-real80-cr-140-s-9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 9

dsa-real80-cr-140-s-10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 10

# dsa-real80-cr-150

dsa-real80-cr-150-s-1.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 1

dsa-real80-cr-150-s-2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 2

dsa-real80-cr-150-s-3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 3

dsa-real80-cr-150-s-4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 4

dsa-real80-cr-150-s-5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 5

dsa-real80-cr-150-s-6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 6

dsa-real80-cr-150-s-7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 7

dsa-real80-cr-150-s-8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 8

dsa-real80-cr-150-s-9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 9

dsa-real80-cr-150-s-10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 10

# dsa-real80-cr-160

dsa-real80-cr-160-s-1.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 1

dsa-real80-cr-160-s-2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 2

dsa-real80-cr-160-s-3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 3

dsa-real80-cr-160-s-4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 4

dsa-real80-cr-160-s-5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 5

dsa-real80-cr-160-s-6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 6

dsa-real80-cr-160-s-7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 7

dsa-real80-cr-160-s-8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 8

dsa-real80-cr-160-s-9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 9

dsa-real80-cr-160-s-10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 10

# dsa-real80-cr-170

dsa-real80-cr-170-s-1.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 1

dsa-real80-cr-170-s-2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 2

dsa-real80-cr-170-s-3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 3

dsa-real80-cr-170-s-4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 4

dsa-real80-cr-170-s-5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 5

dsa-real80-cr-170-s-6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 6

dsa-real80-cr-170-s-7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 7

dsa-real80-cr-170-s-8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 8

dsa-real80-cr-170-s-9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 9

dsa-real80-cr-170-s-10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 10



# dsa-real80-cr-180

dsa-real80-cr-180-s-1.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 1

dsa-real80-cr-180-s-2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 2

dsa-real80-cr-180-s-3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 3

dsa-real80-cr-180-s-4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 4

dsa-real80-cr-180-s-5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 5

dsa-real80-cr-180-s-6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 6

dsa-real80-cr-180-s-7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 7

dsa-real80-cr-180-s-8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 8

dsa-real80-cr-180-s-9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 9

dsa-real80-cr-180-s-10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 10



# dsa-real80-cr-190

dsa-real80-cr-190-s-1.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 1

dsa-real80-cr-190-s-2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 2

dsa-real80-cr-190-s-3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 3

dsa-real80-cr-190-s-4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 4

dsa-real80-cr-190-s-5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 5

dsa-real80-cr-190-s-6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 6

dsa-real80-cr-190-s-7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 7

dsa-real80-cr-190-s-8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 8

dsa-real80-cr-190-s-9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 9

dsa-real80-cr-190-s-10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 10



# dsa-real80-cr-200

dsa-real80-cr-200-s-1.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 1

dsa-real80-cr-200-s-2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 2

dsa-real80-cr-200-s-3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 3

dsa-real80-cr-200-s-4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 4

dsa-real80-cr-200-s-5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 5

dsa-real80-cr-200-s-6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 6

dsa-real80-cr-200-s-7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 7

dsa-real80-cr-200-s-8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 8

dsa-real80-cr-200-s-9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 9

dsa-real80-cr-200-s-10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 10



# ===============

# dsa-real40-cr-120

dsa-real40-cr-120-s-1.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 1

dsa-real40-cr-120-s-2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 2

dsa-real40-cr-120-s-3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 3

dsa-real40-cr-120-s-4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 4

dsa-real40-cr-120-s-5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 5

dsa-real40-cr-120-s-6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 6

dsa-real40-cr-120-s-7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 7

dsa-real40-cr-120-s-8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 8

dsa-real40-cr-120-s-9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 9

dsa-real40-cr-120-s-10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 10


# dsa-real40-cr-130

dsa-real40-cr-130-s-1.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 1

dsa-real40-cr-130-s-2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 2

dsa-real40-cr-130-s-3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 3

dsa-real40-cr-130-s-4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 4

dsa-real40-cr-130-s-5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 5

dsa-real40-cr-130-s-6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 6

dsa-real40-cr-130-s-7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 7

dsa-real40-cr-130-s-8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 8

dsa-real40-cr-130-s-9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 9

dsa-real40-cr-130-s-10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 10

# dsa-real40-cr-140

dsa-real40-cr-140-s-1.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 1

dsa-real40-cr-140-s-2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 2

dsa-real40-cr-140-s-3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 3

dsa-real40-cr-140-s-4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 4

dsa-real40-cr-140-s-5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 5

dsa-real40-cr-140-s-6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 6

dsa-real40-cr-140-s-7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 7

dsa-real40-cr-140-s-8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 8

dsa-real40-cr-140-s-9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 9

dsa-real40-cr-140-s-10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 10

# dsa-real40-cr-150

dsa-real40-cr-150-s-1.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 1

dsa-real40-cr-150-s-2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 2

dsa-real40-cr-150-s-3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 3

dsa-real40-cr-150-s-4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 4

dsa-real40-cr-150-s-5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 5

dsa-real40-cr-150-s-6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 6

dsa-real40-cr-150-s-7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 7

dsa-real40-cr-150-s-8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 8

dsa-real40-cr-150-s-9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 9

dsa-real40-cr-150-s-10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 10

# dsa-real40-cr-160

dsa-real40-cr-160-s-1.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 1

dsa-real40-cr-160-s-2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 2

dsa-real40-cr-160-s-3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 3

dsa-real40-cr-160-s-4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 4

dsa-real40-cr-160-s-5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 5

dsa-real40-cr-160-s-6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 6

dsa-real40-cr-160-s-7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 7

dsa-real40-cr-160-s-8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 8

dsa-real40-cr-160-s-9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 9

dsa-real40-cr-160-s-10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 10

# dsa-real40-cr-170

dsa-real40-cr-170-s-1.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 1

dsa-real40-cr-170-s-2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 2

dsa-real40-cr-170-s-3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 3

dsa-real40-cr-170-s-4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 4

dsa-real40-cr-170-s-5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 5

dsa-real40-cr-170-s-6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 6

dsa-real40-cr-170-s-7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 7

dsa-real40-cr-170-s-8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 8

dsa-real40-cr-170-s-9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 9

dsa-real40-cr-170-s-10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 10



# dsa-real40-cr-180

dsa-real40-cr-180-s-1.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 1

dsa-real40-cr-180-s-2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 2

dsa-real40-cr-180-s-3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 3

dsa-real40-cr-180-s-4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 4

dsa-real40-cr-180-s-5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 5

dsa-real40-cr-180-s-6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 6

dsa-real40-cr-180-s-7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 7

dsa-real40-cr-180-s-8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 8

dsa-real40-cr-180-s-9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 9

dsa-real40-cr-180-s-10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 10



# dsa-real40-cr-190

dsa-real40-cr-190-s-1.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 1

dsa-real40-cr-190-s-2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 2

dsa-real40-cr-190-s-3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 3

dsa-real40-cr-190-s-4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 4

dsa-real40-cr-190-s-5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 5

dsa-real40-cr-190-s-6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 6

dsa-real40-cr-190-s-7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 7

dsa-real40-cr-190-s-8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 8

dsa-real40-cr-190-s-9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 9

dsa-real40-cr-190-s-10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 10



# dsa-real40-cr-200

dsa-real40-cr-200-s-1.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 1

dsa-real40-cr-200-s-2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 2

dsa-real40-cr-200-s-3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 3

dsa-real40-cr-200-s-4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 4

dsa-real40-cr-200-s-5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 5

dsa-real40-cr-200-s-6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 6

dsa-real40-cr-200-s-7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 7

dsa-real40-cr-200-s-8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 8

dsa-real40-cr-200-s-9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 9

dsa-real40-cr-200-s-10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 10



# ==============

# dsa-flat-cr-120

dsa-flat-cr-120-s-1.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 1

dsa-flat-cr-120-s-2.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 2

dsa-flat-cr-120-s-3.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 3

dsa-flat-cr-120-s-4.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 4

dsa-flat-cr-120-s-5.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 5

dsa-flat-cr-120-s-6.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 6

dsa-flat-cr-120-s-7.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 7

dsa-flat-cr-120-s-8.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 8

dsa-flat-cr-120-s-9.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 9

dsa-flat-cr-120-s-10.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 10

# dsa-flat-cr-130

dsa-flat-cr-130-s-1.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 1

dsa-flat-cr-130-s-2.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 2

dsa-flat-cr-130-s-3.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 3

dsa-flat-cr-130-s-4.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 4

dsa-flat-cr-130-s-5.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 5

dsa-flat-cr-130-s-6.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 6

dsa-flat-cr-130-s-7.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 7

dsa-flat-cr-130-s-8.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 8

dsa-flat-cr-130-s-9.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 9

dsa-flat-cr-130-s-10.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 10

# dsa-flat-cr-140

dsa-flat-cr-140-s-1.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 1

dsa-flat-cr-140-s-2.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 2

dsa-flat-cr-140-s-3.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 3

dsa-flat-cr-140-s-4.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 4

dsa-flat-cr-140-s-5.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 5

dsa-flat-cr-140-s-6.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 6

dsa-flat-cr-140-s-7.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 7

dsa-flat-cr-140-s-8.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 8

dsa-flat-cr-140-s-9.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 9

dsa-flat-cr-140-s-10.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 10

# dsa-flat-cr-150

dsa-flat-cr-150-s-1.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 1

dsa-flat-cr-150-s-2.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 2

dsa-flat-cr-150-s-3.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 3

dsa-flat-cr-150-s-4.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 4

dsa-flat-cr-150-s-5.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 5

dsa-flat-cr-150-s-6.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 6

dsa-flat-cr-150-s-7.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 7

dsa-flat-cr-150-s-8.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 8

dsa-flat-cr-150-s-9.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 9

dsa-flat-cr-150-s-10.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 10

# dsa-flat-cr-160

dsa-flat-cr-160-s-1.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 1

dsa-flat-cr-160-s-2.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 2

dsa-flat-cr-160-s-3.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 3

dsa-flat-cr-160-s-4.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 4

dsa-flat-cr-160-s-5.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 5

dsa-flat-cr-160-s-6.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 6

dsa-flat-cr-160-s-7.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 7

dsa-flat-cr-160-s-8.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 8

dsa-flat-cr-160-s-9.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 9

dsa-flat-cr-160-s-10.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 10

# dsa-flat-cr-170

dsa-flat-cr-170-s-1.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 1

dsa-flat-cr-170-s-2.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 2

dsa-flat-cr-170-s-3.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 3

dsa-flat-cr-170-s-4.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 4

dsa-flat-cr-170-s-5.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 5

dsa-flat-cr-170-s-6.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 6

dsa-flat-cr-170-s-7.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 7

dsa-flat-cr-170-s-8.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 8

dsa-flat-cr-170-s-9.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 9

dsa-flat-cr-170-s-10.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 10



# ==============

# dsa-dish-cr-120

dsa-dish-cr-120-s-1.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 1

dsa-dish-cr-120-s-2.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 2

dsa-dish-cr-120-s-3.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 3

dsa-dish-cr-120-s-4.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 4

dsa-dish-cr-120-s-5.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 5

dsa-dish-cr-120-s-6.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 6

dsa-dish-cr-120-s-7.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 7

dsa-dish-cr-120-s-8.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 8

dsa-dish-cr-120-s-9.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 9

dsa-dish-cr-120-s-10.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 10

# dsa-dish-cr-130

dsa-dish-cr-130-s-1.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 1

dsa-dish-cr-130-s-2.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 2

dsa-dish-cr-130-s-3.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 3

dsa-dish-cr-130-s-4.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 4

dsa-dish-cr-130-s-5.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 5

dsa-dish-cr-130-s-6.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 6

dsa-dish-cr-130-s-7.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 7

dsa-dish-cr-130-s-8.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 8

dsa-dish-cr-130-s-9.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 9

dsa-dish-cr-130-s-10.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 10

# dsa-dish-cr-140

dsa-dish-cr-140-s-1.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 1

dsa-dish-cr-140-s-2.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 2

dsa-dish-cr-140-s-3.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 3

dsa-dish-cr-140-s-4.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 4

dsa-dish-cr-140-s-5.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 5

dsa-dish-cr-140-s-6.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 6

dsa-dish-cr-140-s-7.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 7

dsa-dish-cr-140-s-8.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 8

dsa-dish-cr-140-s-9.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 9

dsa-dish-cr-140-s-10.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 10

# dsa-dish-cr-150

dsa-dish-cr-150-s-1.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 1

dsa-dish-cr-150-s-2.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 2

dsa-dish-cr-150-s-3.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 3

dsa-dish-cr-150-s-4.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 4

dsa-dish-cr-150-s-5.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 5

dsa-dish-cr-150-s-6.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 6

dsa-dish-cr-150-s-7.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 7

dsa-dish-cr-150-s-8.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 8

dsa-dish-cr-150-s-9.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 9

dsa-dish-cr-150-s-10.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 10

# dsa-dish-cr-160

dsa-dish-cr-160-s-1.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 1

dsa-dish-cr-160-s-2.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 2

dsa-dish-cr-160-s-3.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 3

dsa-dish-cr-160-s-4.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 4

dsa-dish-cr-160-s-5.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 5

dsa-dish-cr-160-s-6.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 6

dsa-dish-cr-160-s-7.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 7

dsa-dish-cr-160-s-8.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 8

dsa-dish-cr-160-s-9.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 9

dsa-dish-cr-160-s-10.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 10

# dsa-dish-cr-170

dsa-dish-cr-170-s-1.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 1

dsa-dish-cr-170-s-2.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 2

dsa-dish-cr-170-s-3.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 3

dsa-dish-cr-170-s-4.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 4

dsa-dish-cr-170-s-5.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 5

dsa-dish-cr-170-s-6.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 6

dsa-dish-cr-170-s-7.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 7

dsa-dish-cr-170-s-8.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 8

dsa-dish-cr-170-s-9.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 9

dsa-dish-cr-170-s-10.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 10



# ==============

# dsa-wavy-cr-120

dsa-wavy-cr-120-s-1.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 1

dsa-wavy-cr-120-s-2.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 2

dsa-wavy-cr-120-s-3.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 3

dsa-wavy-cr-120-s-4.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 4

dsa-wavy-cr-120-s-5.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 5

dsa-wavy-cr-120-s-6.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 6

dsa-wavy-cr-120-s-7.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 7

dsa-wavy-cr-120-s-8.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 8

dsa-wavy-cr-120-s-9.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 9

dsa-wavy-cr-120-s-10.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 10

# dsa-wavy-cr-130

dsa-wavy-cr-130-s-1.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 1

dsa-wavy-cr-130-s-2.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 2

dsa-wavy-cr-130-s-3.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 3

dsa-wavy-cr-130-s-4.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 4

dsa-wavy-cr-130-s-5.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 5

dsa-wavy-cr-130-s-6.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 6

dsa-wavy-cr-130-s-7.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 7

dsa-wavy-cr-130-s-8.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 8

dsa-wavy-cr-130-s-9.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 9

dsa-wavy-cr-130-s-10.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 10

# dsa-wavy-cr-140

dsa-wavy-cr-140-s-1.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 1

dsa-wavy-cr-140-s-2.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 2

dsa-wavy-cr-140-s-3.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 3

dsa-wavy-cr-140-s-4.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 4

dsa-wavy-cr-140-s-5.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 5

dsa-wavy-cr-140-s-6.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 6

dsa-wavy-cr-140-s-7.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 7

dsa-wavy-cr-140-s-8.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 8

dsa-wavy-cr-140-s-9.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 9

dsa-wavy-cr-140-s-10.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 10

# dsa-wavy-cr-150

dsa-wavy-cr-150-s-1.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 1

dsa-wavy-cr-150-s-2.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 2

dsa-wavy-cr-150-s-3.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 3

dsa-wavy-cr-150-s-4.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 4

dsa-wavy-cr-150-s-5.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 5

dsa-wavy-cr-150-s-6.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 6

dsa-wavy-cr-150-s-7.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 7

dsa-wavy-cr-150-s-8.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 8

dsa-wavy-cr-150-s-9.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 9

dsa-wavy-cr-150-s-10.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 10

# dsa-wavy-cr-160

dsa-wavy-cr-160-s-1.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 1

dsa-wavy-cr-160-s-2.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 2

dsa-wavy-cr-160-s-3.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 3

dsa-wavy-cr-160-s-4.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 4

dsa-wavy-cr-160-s-5.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 5

dsa-wavy-cr-160-s-6.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 6

dsa-wavy-cr-160-s-7.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 7

dsa-wavy-cr-160-s-8.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 8

dsa-wavy-cr-160-s-9.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 9

dsa-wavy-cr-160-s-10.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 10

# dsa-wavy-cr-170

dsa-wavy-cr-170-s-1.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 1

dsa-wavy-cr-170-s-2.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 2

dsa-wavy-cr-170-s-3.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 3

dsa-wavy-cr-170-s-4.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 4

dsa-wavy-cr-170-s-5.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 5

dsa-wavy-cr-170-s-6.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 6

dsa-wavy-cr-170-s-7.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 7

dsa-wavy-cr-170-s-8.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 8

dsa-wavy-cr-170-s-9.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 9

dsa-wavy-cr-170-s-10.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 10



# ==============

# dsa-wavy2-cr-120

dsa-wavy2-cr-120-s-1.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 1

dsa-wavy2-cr-120-s-2.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 2

dsa-wavy2-cr-120-s-3.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 3

dsa-wavy2-cr-120-s-4.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 4

dsa-wavy2-cr-120-s-5.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 5

dsa-wavy2-cr-120-s-6.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 6

dsa-wavy2-cr-120-s-7.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 7

dsa-wavy2-cr-120-s-8.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 8

dsa-wavy2-cr-120-s-9.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 9

dsa-wavy2-cr-120-s-10.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 10

# dsa-wavy2-cr-130

dsa-wavy2-cr-130-s-1.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 1

dsa-wavy2-cr-130-s-2.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 2

dsa-wavy2-cr-130-s-3.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 3

dsa-wavy2-cr-130-s-4.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 4

dsa-wavy2-cr-130-s-5.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 5

dsa-wavy2-cr-130-s-6.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 6

dsa-wavy2-cr-130-s-7.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 7

dsa-wavy2-cr-130-s-8.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 8

dsa-wavy2-cr-130-s-9.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 9

dsa-wavy2-cr-130-s-10.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 10

# dsa-wavy2-cr-140

dsa-wavy2-cr-140-s-1.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 1

dsa-wavy2-cr-140-s-2.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 2

dsa-wavy2-cr-140-s-3.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 3

dsa-wavy2-cr-140-s-4.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 4

dsa-wavy2-cr-140-s-5.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 5

dsa-wavy2-cr-140-s-6.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 6

dsa-wavy2-cr-140-s-7.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 7

dsa-wavy2-cr-140-s-8.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 8

dsa-wavy2-cr-140-s-9.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 9

dsa-wavy2-cr-140-s-10.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 10

# dsa-wavy2-cr-150

dsa-wavy2-cr-150-s-1.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 1

dsa-wavy2-cr-150-s-2.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 2

dsa-wavy2-cr-150-s-3.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 3

dsa-wavy2-cr-150-s-4.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 4

dsa-wavy2-cr-150-s-5.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 5

dsa-wavy2-cr-150-s-6.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 6

dsa-wavy2-cr-150-s-7.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 7

dsa-wavy2-cr-150-s-8.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 8

dsa-wavy2-cr-150-s-9.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 9

dsa-wavy2-cr-150-s-10.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 10

# dsa-wavy2-cr-160

dsa-wavy2-cr-160-s-1.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 1

dsa-wavy2-cr-160-s-2.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 2

dsa-wavy2-cr-160-s-3.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 3

dsa-wavy2-cr-160-s-4.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 4

dsa-wavy2-cr-160-s-5.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 5

dsa-wavy2-cr-160-s-6.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 6

dsa-wavy2-cr-160-s-7.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 7

dsa-wavy2-cr-160-s-8.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 8

dsa-wavy2-cr-160-s-9.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 9

dsa-wavy2-cr-160-s-10.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 10

# dsa-wavy2-cr-170

dsa-wavy2-cr-170-s-1.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 1

dsa-wavy2-cr-170-s-2.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 2

dsa-wavy2-cr-170-s-3.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 3

dsa-wavy2-cr-170-s-4.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 4

dsa-wavy2-cr-170-s-5.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 5

dsa-wavy2-cr-170-s-6.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 6

dsa-wavy2-cr-170-s-7.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 7

dsa-wavy2-cr-170-s-8.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 8

dsa-wavy2-cr-170-s-9.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 9

dsa-wavy2-cr-170-s-10.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 10


# ==============
# Change exploration radius

# dsa-real-cr-150-er-25 is same as dsa-real-cr-150

# dsa-real-cr-150-er-20

dsa-real-cr-150-er-20-s-1.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 150 -s 1

dsa-real-cr-150-er-20-s-2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 150 -s 2

dsa-real-cr-150-er-20-s-3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 150 -s 3

dsa-real-cr-150-er-20-s-4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 150 -s 4

dsa-real-cr-150-er-20-s-5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 150 -s 5

dsa-real-cr-150-er-20-s-6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 150 -s 6

dsa-real-cr-150-er-20-s-7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 150 -s 7

dsa-real-cr-150-er-20-s-8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 150 -s 8

dsa-real-cr-150-er-20-s-9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 150 -s 9

dsa-real-cr-150-er-20-s-10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 150 -s 10


# dsa-real-cr-150-er-30

dsa-real-cr-150-er-30-s-1.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 150 -s 1

dsa-real-cr-150-er-30-s-2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 150 -s 2

dsa-real-cr-150-er-30-s-3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 150 -s 3

dsa-real-cr-150-er-30-s-4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 150 -s 4

dsa-real-cr-150-er-30-s-5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 150 -s 5

dsa-real-cr-150-er-30-s-6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 150 -s 6

dsa-real-cr-150-er-30-s-7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 150 -s 7

dsa-real-cr-150-er-30-s-8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 150 -s 8

dsa-real-cr-150-er-30-s-9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 150 -s 9

dsa-real-cr-150-er-30-s-10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 150 -s 10


# dsa-real-cr-150-er-35

dsa-real-cr-150-er-35-s-1.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 150 -s 1

dsa-real-cr-150-er-35-s-2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 150 -s 2

dsa-real-cr-150-er-35-s-3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 150 -s 3

dsa-real-cr-150-er-35-s-4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 150 -s 4

dsa-real-cr-150-er-35-s-5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 150 -s 5

dsa-real-cr-150-er-35-s-6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 150 -s 6

dsa-real-cr-150-er-35-s-7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 150 -s 7

dsa-real-cr-150-er-35-s-8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 150 -s 8

dsa-real-cr-150-er-35-s-9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 150 -s 9

dsa-real-cr-150-er-35-s-10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 150 -s 10


# dsa-real-cr-150-er-40

dsa-real-cr-150-er-40-s-1.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 150 -s 1

dsa-real-cr-150-er-40-s-2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 150 -s 2

dsa-real-cr-150-er-40-s-3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 150 -s 3

dsa-real-cr-150-er-40-s-4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 150 -s 4

dsa-real-cr-150-er-40-s-5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 150 -s 5

dsa-real-cr-150-er-40-s-6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 150 -s 6

dsa-real-cr-150-er-40-s-7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 150 -s 7

dsa-real-cr-150-er-40-s-8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 150 -s 8

dsa-real-cr-150-er-40-s-9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 150 -s 9

dsa-real-cr-150-er-40-s-10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 150 -s 10


# dsa-real-cr-150-er-45

dsa-real-cr-150-er-45-s-1.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 150 -s 1

dsa-real-cr-150-er-45-s-2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 150 -s 2

dsa-real-cr-150-er-45-s-3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 150 -s 3

dsa-real-cr-150-er-45-s-4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 150 -s 4

dsa-real-cr-150-er-45-s-5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 150 -s 5

dsa-real-cr-150-er-45-s-6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 150 -s 6

dsa-real-cr-150-er-45-s-7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 150 -s 7

dsa-real-cr-150-er-45-s-8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 150 -s 8

dsa-real-cr-150-er-45-s-9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 150 -s 9

dsa-real-cr-150-er-45-s-10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 150 -s 10


# dsa-real-cr-150-er-50

dsa-real-cr-150-er-50-s-1.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 150 -s 1

dsa-real-cr-150-er-50-s-2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 150 -s 2

dsa-real-cr-150-er-50-s-3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 150 -s 3

dsa-real-cr-150-er-50-s-4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 150 -s 4

dsa-real-cr-150-er-50-s-5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 150 -s 5

dsa-real-cr-150-er-50-s-6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 150 -s 6

dsa-real-cr-150-er-50-s-7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 150 -s 7

dsa-real-cr-150-er-50-s-8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 150 -s 8

dsa-real-cr-150-er-50-s-9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 150 -s 9

dsa-real-cr-150-er-50-s-10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 150 -s 10


# ==============

# Pattern search
# ALREADY UPDATED
braemoor-pattern-search-limited-100-pts-sequential-100.txt : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 100 -G 4 -v $(VIEWPOINTS_10) -t 100 -bmp $@

braemoor-pattern-search-s1.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 1

braemoor-pattern-search-s2.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 2

braemoor-pattern-search-s3.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 3

braemoor-pattern-search-s4.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 4

braemoor-pattern-search-s5.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 5

braemoor-pattern-search-s6.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 6

braemoor-pattern-search-s7.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 7

braemoor-pattern-search-s8.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 8

braemoor-pattern-search-s9.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 9

braemoor-pattern-search-s10.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 10

braemoor-pattern-search-s11.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 11

braemoor-pattern-search-s12.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 12

braemoor-pattern-search-s13.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 13

braemoor-pattern-search-s14.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 14

braemoor-pattern-search-s15.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 15

braemoor-pattern-search-s16.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 16

braemoor-pattern-search-s17.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 17

braemoor-pattern-search-s18.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 18

braemoor-pattern-search-s19.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 19

braemoor-pattern-search-s20.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 20

braemoor-pattern-search-s21.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 21

braemoor-pattern-search-s22.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 22

braemoor-pattern-search-s23.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 23

braemoor-pattern-search-s24.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 24

braemoor-pattern-search-s25.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 25

braemoor-pattern-search-s26.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 26

braemoor-pattern-search-s27.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 27

braemoor-pattern-search-s28.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 28

braemoor-pattern-search-s29.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 29

braemoor-pattern-search-s30.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 30

braemoor-pattern-search-s31.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 31

braemoor-pattern-search-s32.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 32

braemoor-pattern-search-s33.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 33

braemoor-pattern-search-s34.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 34

braemoor-pattern-search-s35.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 35

braemoor-pattern-search-s36.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 36

braemoor-pattern-search-s37.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 37

braemoor-pattern-search-s38.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 38

braemoor-pattern-search-s39.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 39

braemoor-pattern-search-s40.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 40

braemoor-pattern-search-s41.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 41

braemoor-pattern-search-s42.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 42

braemoor-pattern-search-s43.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 43

braemoor-pattern-search-s44.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 44

braemoor-pattern-search-s45.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 45

braemoor-pattern-search-s46.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 46

braemoor-pattern-search-s47.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 47

braemoor-pattern-search-s48.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 48

braemoor-pattern-search-s49.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 49

braemoor-pattern-search-s50.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 50

braemoor-pattern-search-s51.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 51

braemoor-pattern-search-s52.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 52

braemoor-pattern-search-s53.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 53

braemoor-pattern-search-s54.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 54

braemoor-pattern-search-s55.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 55

braemoor-pattern-search-s56.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 56

braemoor-pattern-search-s57.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 57

braemoor-pattern-search-s58.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 58

braemoor-pattern-search-s59.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 59

braemoor-pattern-search-s60.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 60

braemoor-pattern-search-s61.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 61

braemoor-pattern-search-s62.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 62

braemoor-pattern-search-s63.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 63

braemoor-pattern-search-s64.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 64

braemoor-pattern-search-s65.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 65

braemoor-pattern-search-s66.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 66

braemoor-pattern-search-s67.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 67

braemoor-pattern-search-s68.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 68

braemoor-pattern-search-s69.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 69

braemoor-pattern-search-s70.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 70

braemoor-pattern-search-s71.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 71

braemoor-pattern-search-s72.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 72

braemoor-pattern-search-s73.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 73

braemoor-pattern-search-s74.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 74

braemoor-pattern-search-s75.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 75

braemoor-pattern-search-s76.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 76

braemoor-pattern-search-s77.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 77

braemoor-pattern-search-s78.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 78

braemoor-pattern-search-s79.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 79

braemoor-pattern-search-s80.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 80

braemoor-pattern-search-s81.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 81

braemoor-pattern-search-s82.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 82

braemoor-pattern-search-s83.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 83

braemoor-pattern-search-s84.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 84

braemoor-pattern-search-s85.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 85

braemoor-pattern-search-s86.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 86

braemoor-pattern-search-s87.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 87

braemoor-pattern-search-s88.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 88

braemoor-pattern-search-s89.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 89

braemoor-pattern-search-s90.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 90

braemoor-pattern-search-s91.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 91

braemoor-pattern-search-s92.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 92

braemoor-pattern-search-s93.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 93

braemoor-pattern-search-s94.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 94

braemoor-pattern-search-s95.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 95

braemoor-pattern-search-s96.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 96

braemoor-pattern-search-s97.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 97

braemoor-pattern-search-s98.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 98

braemoor-pattern-search-s99.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 99

braemoor-pattern-search-s100.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 4 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100 -delta 64 -s 100




braemoor-pattern-search-limited-100-pts-sequential-100b.txt : visibility
	./visibility -h $(HGT) -123 37 -w $(WIN_480x360) -r 100 -G 3 $@ $(VIEWPOINTS_10B) -t 100


braemoor-pattern-search-limited-100-pts-sequential-100c.txt : visibility
	./visibility -h $(HGT) -123 37 -w $(WIN_480x360) -r 100 -G 3 $@ $(VIEWPOINTS_10C) -t 100


braemoor-pattern-search-limited-100-pts-sequential-50.txt : visibility
	./visibility -h $(HGT) -123 37 -w $(WIN_480x360) -r 50 -G 3 $@ $(VIEWPOINTS_10) -t 100


braemoor-pattern-search-limited-100-pts-sequential-50b.txt : visibility
	./visibility -h $(HGT) -123 37 -w $(WIN_480x360) -r 50 -G 3 $@ $(VIEWPOINTS_10B) -t 100


braemoor-pattern-search-limited-100-pts-sequential-50c.txt : visibility
	./visibility -h $(HGT) -123 37 -w $(WIN_480x360) -r 50 -G 3 $@ $(VIEWPOINTS_10C) -t 100


braemoor-pattern-search-limited-100-pts-sequential-33.txt : visibility
	./visibility -h $(HGT) -123 37 -w $(WIN_480x360) -r 33 -G 3 $@ $(VIEWPOINTS_10) -t 100


braemoor-pattern-search-limited-100-pts-sequential-33b.txt : visibility
	./visibility -h $(HGT) -123 37 -w $(WIN_480x360) -r 33 -G 3 $@ $(VIEWPOINTS_10B) -t 100


braemoor-pattern-search-limited-100-pts-sequential-33c.txt : visibility
	./visibility -h $(HGT) -123 37 -w $(WIN_480x360) -r 33 -G 3 $@ $(VIEWPOINTS_10C) -t 100


braemoor-pattern-search-limited-100-pts-sequential-25.txt : visibility
	./visibility -h $(HGT) -123 37 -w $(WIN_480x360) -r 25 -G 3 $@ $(VIEWPOINTS_10) -t 100


braemoor-pattern-search-limited-100-pts-sequential-25b.txt : visibility
	./visibility -h $(HGT) -123 37 -w $(WIN_480x360) -r 25 -G 3 $@ $(VIEWPOINTS_10B) -t 100


braemoor-pattern-search-limited-100-pts-sequential-25c.txt : visibility
	./visibility -h $(HGT) -123 37 -w $(WIN_480x360) -r 25 -G 3 $@ $(VIEWPOINTS_10C) -t 100


braemoor-pattern-search-limited-100-pts-sequential-20.txt : visibility
	./visibility -h $(HGT) -123 37 -w $(WIN_480x360) -r 20 -G 3 $@ $(VIEWPOINTS_10) -t 100


braemoor-pattern-search-limited-100-pts-sequential-20b.txt : visibility
	./visibility -h $(HGT) -123 37 -w $(WIN_480x360) -r 20 -G 3 $@ $(VIEWPOINTS_10B) -t 100


braemoor-pattern-search-limited-100-pts-sequential-20c.txt : visibility
	./visibility -h $(HGT) -123 37 -w $(WIN_480x360) -r 20 -G 3 $@ $(VIEWPOINTS_10C) -t 100


braemoor-pattern-search-limited-100-pts-sequential-15.txt : visibility
	./visibility -h $(HGT) -123 37 -w $(WIN_480x360) -r 15 -G 3 $@ $(VIEWPOINTS_10) -t 100


braemoor-pattern-search-limited-100-pts-sequential-15b.txt : visibility
	./visibility -h $(HGT) -123 37 -w $(WIN_480x360) -r 15 -G 3 $@ $(VIEWPOINTS_10B) -t 100


braemoor-pattern-search-limited-100-pts-sequential-15c.txt : visibility
	./visibility -h $(HGT) -123 37 -w $(WIN_480x360) -r 15 -G 3 $@ $(VIEWPOINTS_10C) -t 100


braemoor-pattern-search-limited-100-pts-sequential-10.txt : visibility
	./visibility -h $(HGT) -123 37 -w $(WIN_480x360) -r 10 -G 3 $@ $(VIEWPOINTS_10) -t 100


braemoor-pattern-search-limited-100-pts-sequential-10b.txt : visibility
	./visibility -h $(HGT) -123 37 -w $(WIN_480x360) -r 10 -G 3 $@ $(VIEWPOINTS_10B) -t 100


braemoor-pattern-search-limited-100-pts-sequential-10c.txt : visibility
	./visibility -h $(HGT) -123 37 -w $(WIN_480x360) -r 10 -G 3 $@ $(VIEWPOINTS_10C) -t 100


# Gradient ascent with sequential movement
braemoor-gradient-limited-100-pts-sequential-100.txt : visibility
	./visibility -h $(HGT) -123 37 -w $(WIN_480x360) -r 100 -G 2 $@ $(VIEWPOINTS_10) -t 100


# Nudging with sequential movement
braemoor-nudge-limited-100-pts-sequential-100.txt : visibility
	./visibility -h $(HGT) -123 37 -w $(WIN_480x360) -r 100 -G 1 $@ $(VIEWPOINTS_10) -t 100

# random viewpoints 480 x 360, 5x5 "nudging"
braemoor-gradient-G-1-vrand_11A.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 1

braemoor-gradient-G-1-vrand_11B.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 2

braemoor-gradient-G-1-vrand_11C.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 3

braemoor-gradient-G-1-vrand_11D.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 4

braemoor-gradient-G-1-vrand_11E.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 5

braemoor-gradient-G-1-vrand_11F.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 6

braemoor-gradient-G-1-vrand_11G.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 7

braemoor-gradient-G-1-vrand_11H.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 8

braemoor-gradient-G-1-vrand_11I.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 9

braemoor-gradient-G-1-vrand_11J.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 10

braemoor-gradient-G-1-vrand_12A.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 11

braemoor-gradient-G-1-vrand_12B.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 12

braemoor-gradient-G-1-vrand_12C.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 13

braemoor-gradient-G-1-vrand_12D.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 14

braemoor-gradient-G-1-vrand_12E.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 15

braemoor-gradient-G-1-vrand_12F.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 16

braemoor-gradient-G-1-vrand_12G.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 17

braemoor-gradient-G-1-vrand_12H.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 18

braemoor-gradient-G-1-vrand_12I.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 19

braemoor-gradient-G-1-vrand_12J.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 20

braemoor-gradient-G-1-vrand_13A.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 21

braemoor-gradient-G-1-vrand_13B.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 22

braemoor-gradient-G-1-vrand_13C.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 23

braemoor-gradient-G-1-vrand_13D.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 24

braemoor-gradient-G-1-vrand_13E.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 25

braemoor-gradient-G-1-vrand_13F.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 26

braemoor-gradient-G-1-vrand_13G.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 27

braemoor-gradient-G-1-vrand_13H.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 28

braemoor-gradient-G-1-vrand_13I.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 29

braemoor-gradient-G-1-vrand_13J.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 30

braemoor-gradient-G-1-vrand_14A.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 31

braemoor-gradient-G-1-vrand_14B.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 32

braemoor-gradient-G-1-vrand_14C.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 33

braemoor-gradient-G-1-vrand_14D.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 34

braemoor-gradient-G-1-vrand_14E.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 35

braemoor-gradient-G-1-vrand_14F.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 36

braemoor-gradient-G-1-vrand_14G.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 37

braemoor-gradient-G-1-vrand_14H.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 38

braemoor-gradient-G-1-vrand_14I.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 39

braemoor-gradient-G-1-vrand_14J.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 40

braemoor-gradient-G-1-vrand_15A.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 41

braemoor-gradient-G-1-vrand_15B.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 42

braemoor-gradient-G-1-vrand_15C.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 43

braemoor-gradient-G-1-vrand_15D.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 44

braemoor-gradient-G-1-vrand_15E.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 45

braemoor-gradient-G-1-vrand_15F.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 46

braemoor-gradient-G-1-vrand_15G.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 47

braemoor-gradient-G-1-vrand_15H.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 48

braemoor-gradient-G-1-vrand_15I.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 49

braemoor-gradient-G-1-vrand_15J.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 50

braemoor-gradient-G-1-vrand_16A.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 51

braemoor-gradient-G-1-vrand_16B.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 52

braemoor-gradient-G-1-vrand_16C.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 53

braemoor-gradient-G-1-vrand_16D.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 54

braemoor-gradient-G-1-vrand_16E.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 55

braemoor-gradient-G-1-vrand_16F.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 56

braemoor-gradient-G-1-vrand_16G.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 57

braemoor-gradient-G-1-vrand_16H.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 58

braemoor-gradient-G-1-vrand_16I.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 59

braemoor-gradient-G-1-vrand_16J.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 60

braemoor-gradient-G-1-vrand_17A.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 61

braemoor-gradient-G-1-vrand_17B.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 62

braemoor-gradient-G-1-vrand_17C.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 63

braemoor-gradient-G-1-vrand_17D.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 64

braemoor-gradient-G-1-vrand_17E.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 65

braemoor-gradient-G-1-vrand_17F.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 66

braemoor-gradient-G-1-vrand_17G.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 67

braemoor-gradient-G-1-vrand_17H.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 68

braemoor-gradient-G-1-vrand_17I.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 69

braemoor-gradient-G-1-vrand_17J.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 70

braemoor-gradient-G-1-vrand_18A.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 71

braemoor-gradient-G-1-vrand_18B.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 72

braemoor-gradient-G-1-vrand_18C.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 73

braemoor-gradient-G-1-vrand_18D.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 74

braemoor-gradient-G-1-vrand_18E.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 75

braemoor-gradient-G-1-vrand_18F.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 76

braemoor-gradient-G-1-vrand_18G.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 77

braemoor-gradient-G-1-vrand_18H.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 78

braemoor-gradient-G-1-vrand_18I.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 79

braemoor-gradient-G-1-vrand_18J.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 80

braemoor-gradient-G-1-vrand_19A.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 81

braemoor-gradient-G-1-vrand_19B.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 82

braemoor-gradient-G-1-vrand_19C.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 83

braemoor-gradient-G-1-vrand_19D.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 84

braemoor-gradient-G-1-vrand_19E.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 85

braemoor-gradient-G-1-vrand_19F.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 86

braemoor-gradient-G-1-vrand_19G.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 87

braemoor-gradient-G-1-vrand_19H.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 88

braemoor-gradient-G-1-vrand_19I.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 89

braemoor-gradient-G-1-vrand_19J.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 90

braemoor-gradient-G-1-vrand_1AA.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 91

braemoor-gradient-G-1-vrand_1AB.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 92

braemoor-gradient-G-1-vrand_1AC.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 93

braemoor-gradient-G-1-vrand_1AD.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 94

braemoor-gradient-G-1-vrand_1AE.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 95

braemoor-gradient-G-1-vrand_1AF.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 96

braemoor-gradient-G-1-vrand_1AG.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 97

braemoor-gradient-G-1-vrand_1AH.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 98

braemoor-gradient-G-1-vrand_1AI.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 99

braemoor-gradient-G-1-vrand_1AJ.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 100


# random viewpoints 240 x 180, 5x5 "nudging"
braemoor-gradient-G-1-vrand_21A.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 1

braemoor-gradient-G-1-vrand_21B.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 2

braemoor-gradient-G-1-vrand_21C.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 3

braemoor-gradient-G-1-vrand_21D.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 4

braemoor-gradient-G-1-vrand_21E.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 5

braemoor-gradient-G-1-vrand_21F.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 6

braemoor-gradient-G-1-vrand_21G.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 7

braemoor-gradient-G-1-vrand_21H.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 8

braemoor-gradient-G-1-vrand_21I.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 9

braemoor-gradient-G-1-vrand_21J.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 10

braemoor-gradient-G-1-vrand_22A.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 11

braemoor-gradient-G-1-vrand_22B.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 12

braemoor-gradient-G-1-vrand_22C.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 13

braemoor-gradient-G-1-vrand_22D.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 14

braemoor-gradient-G-1-vrand_22E.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 15

braemoor-gradient-G-1-vrand_22F.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 16

braemoor-gradient-G-1-vrand_22G.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 17

braemoor-gradient-G-1-vrand_22H.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 18

braemoor-gradient-G-1-vrand_22I.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 19

braemoor-gradient-G-1-vrand_22J.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 20

braemoor-gradient-G-1-vrand_23A.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 21

braemoor-gradient-G-1-vrand_23B.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 22

braemoor-gradient-G-1-vrand_23C.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 23

braemoor-gradient-G-1-vrand_23D.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 24

braemoor-gradient-G-1-vrand_23E.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 25

braemoor-gradient-G-1-vrand_23F.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 26

braemoor-gradient-G-1-vrand_23G.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 27

braemoor-gradient-G-1-vrand_23H.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 28

braemoor-gradient-G-1-vrand_23I.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 29

braemoor-gradient-G-1-vrand_23J.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 30

braemoor-gradient-G-1-vrand_24A.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 31

braemoor-gradient-G-1-vrand_24B.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 32

braemoor-gradient-G-1-vrand_24C.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 33

braemoor-gradient-G-1-vrand_24D.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 34

braemoor-gradient-G-1-vrand_24E.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 35

braemoor-gradient-G-1-vrand_24F.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 36

braemoor-gradient-G-1-vrand_24G.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 37

braemoor-gradient-G-1-vrand_24H.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 38

braemoor-gradient-G-1-vrand_24I.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 39

braemoor-gradient-G-1-vrand_24J.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 40

braemoor-gradient-G-1-vrand_25A.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 41

braemoor-gradient-G-1-vrand_25B.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 42

braemoor-gradient-G-1-vrand_25C.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 43

braemoor-gradient-G-1-vrand_25D.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 44

braemoor-gradient-G-1-vrand_25E.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 45

braemoor-gradient-G-1-vrand_25F.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 46

braemoor-gradient-G-1-vrand_25G.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 47

braemoor-gradient-G-1-vrand_25H.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 48

braemoor-gradient-G-1-vrand_25I.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 49

braemoor-gradient-G-1-vrand_25J.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 50

braemoor-gradient-G-1-vrand_26A.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 51

braemoor-gradient-G-1-vrand_26B.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 52

braemoor-gradient-G-1-vrand_26C.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 53

braemoor-gradient-G-1-vrand_26D.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 54

braemoor-gradient-G-1-vrand_26E.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 55

braemoor-gradient-G-1-vrand_26F.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 56

braemoor-gradient-G-1-vrand_26G.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 57

braemoor-gradient-G-1-vrand_26H.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 58

braemoor-gradient-G-1-vrand_26I.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 59

braemoor-gradient-G-1-vrand_26J.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 60

braemoor-gradient-G-1-vrand_27A.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 61

braemoor-gradient-G-1-vrand_27B.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 62

braemoor-gradient-G-1-vrand_27C.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 63

braemoor-gradient-G-1-vrand_27D.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 64

braemoor-gradient-G-1-vrand_27E.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 65

braemoor-gradient-G-1-vrand_27F.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 66

braemoor-gradient-G-1-vrand_27G.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 67

braemoor-gradient-G-1-vrand_27H.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 68

braemoor-gradient-G-1-vrand_27I.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 69

braemoor-gradient-G-1-vrand_27J.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 70

braemoor-gradient-G-1-vrand_28A.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 71

braemoor-gradient-G-1-vrand_28B.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 72

braemoor-gradient-G-1-vrand_28C.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 73

braemoor-gradient-G-1-vrand_28D.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 74

braemoor-gradient-G-1-vrand_28E.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 75

braemoor-gradient-G-1-vrand_28F.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 76

braemoor-gradient-G-1-vrand_28G.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 77

braemoor-gradient-G-1-vrand_28H.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 78

braemoor-gradient-G-1-vrand_28I.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 79

braemoor-gradient-G-1-vrand_28J.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 80

braemoor-gradient-G-1-vrand_29A.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 81

braemoor-gradient-G-1-vrand_29B.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 82

braemoor-gradient-G-1-vrand_29C.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 83

braemoor-gradient-G-1-vrand_29D.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 84

braemoor-gradient-G-1-vrand_29E.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 85

braemoor-gradient-G-1-vrand_29F.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 86

braemoor-gradient-G-1-vrand_29G.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 87

braemoor-gradient-G-1-vrand_29H.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 88

braemoor-gradient-G-1-vrand_29I.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 89

braemoor-gradient-G-1-vrand_29J.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 90

braemoor-gradient-G-1-vrand_2AA.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 91

braemoor-gradient-G-1-vrand_2AB.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 92

braemoor-gradient-G-1-vrand_2AC.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 93

braemoor-gradient-G-1-vrand_2AD.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 94

braemoor-gradient-G-1-vrand_2AE.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 95

braemoor-gradient-G-1-vrand_2AF.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 96

braemoor-gradient-G-1-vrand_2AG.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 97

braemoor-gradient-G-1-vrand_2AH.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 98

braemoor-gradient-G-1-vrand_2AI.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 99

braemoor-gradient-G-1-vrand_2AJ.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 1 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 200 -s 100


# random viewpoints 480 x 360 gradient ascent
braemoor-gradient-G-3-vrand_11A.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 1

braemoor-gradient-G-3-vrand_11B.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 2

braemoor-gradient-G-3-vrand_11C.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 3

braemoor-gradient-G-3-vrand_11D.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 4

braemoor-gradient-G-3-vrand_11E.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 5

braemoor-gradient-G-3-vrand_11F.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 6

braemoor-gradient-G-3-vrand_11G.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 7

braemoor-gradient-G-3-vrand_11H.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 8

braemoor-gradient-G-3-vrand_11I.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 9

braemoor-gradient-G-3-vrand_11J.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 10

braemoor-gradient-G-3-vrand_12A.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 11

braemoor-gradient-G-3-vrand_12B.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 12

braemoor-gradient-G-3-vrand_12C.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 13

braemoor-gradient-G-3-vrand_12D.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 14

braemoor-gradient-G-3-vrand_12E.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 15

braemoor-gradient-G-3-vrand_12F.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 16

braemoor-gradient-G-3-vrand_12G.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 17

braemoor-gradient-G-3-vrand_12H.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 18

braemoor-gradient-G-3-vrand_12I.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 19

braemoor-gradient-G-3-vrand_12J.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 20

braemoor-gradient-G-3-vrand_13A.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 21

braemoor-gradient-G-3-vrand_13B.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 22

braemoor-gradient-G-3-vrand_13C.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 23

braemoor-gradient-G-3-vrand_13D.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 24

braemoor-gradient-G-3-vrand_13E.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 25

braemoor-gradient-G-3-vrand_13F.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 26

braemoor-gradient-G-3-vrand_13G.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 27

braemoor-gradient-G-3-vrand_13H.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 28

braemoor-gradient-G-3-vrand_13I.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 29

braemoor-gradient-G-3-vrand_13J.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 30

braemoor-gradient-G-3-vrand_14A.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 31

braemoor-gradient-G-3-vrand_14B.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 32

braemoor-gradient-G-3-vrand_14C.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 33

braemoor-gradient-G-3-vrand_14D.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 34

braemoor-gradient-G-3-vrand_14E.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 35

braemoor-gradient-G-3-vrand_14F.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 36

braemoor-gradient-G-3-vrand_14G.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 37

braemoor-gradient-G-3-vrand_14H.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 38

braemoor-gradient-G-3-vrand_14I.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 39

braemoor-gradient-G-3-vrand_14J.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 40

braemoor-gradient-G-3-vrand_15A.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 41

braemoor-gradient-G-3-vrand_15B.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 42

braemoor-gradient-G-3-vrand_15C.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 43

braemoor-gradient-G-3-vrand_15D.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 44

braemoor-gradient-G-3-vrand_15E.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 45

braemoor-gradient-G-3-vrand_15F.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 46

braemoor-gradient-G-3-vrand_15G.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 47

braemoor-gradient-G-3-vrand_15H.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 48

braemoor-gradient-G-3-vrand_15I.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 49

braemoor-gradient-G-3-vrand_15J.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 50

braemoor-gradient-G-3-vrand_16A.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 51

braemoor-gradient-G-3-vrand_16B.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 52

braemoor-gradient-G-3-vrand_16C.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 53

braemoor-gradient-G-3-vrand_16D.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 54

braemoor-gradient-G-3-vrand_16E.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 55

braemoor-gradient-G-3-vrand_16F.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 56

braemoor-gradient-G-3-vrand_16G.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 57

braemoor-gradient-G-3-vrand_16H.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 58

braemoor-gradient-G-3-vrand_16I.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 59

braemoor-gradient-G-3-vrand_16J.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 60

braemoor-gradient-G-3-vrand_17A.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 61

braemoor-gradient-G-3-vrand_17B.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 62

braemoor-gradient-G-3-vrand_17C.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 63

braemoor-gradient-G-3-vrand_17D.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 64

braemoor-gradient-G-3-vrand_17E.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 65

braemoor-gradient-G-3-vrand_17F.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 66

braemoor-gradient-G-3-vrand_17G.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 67

braemoor-gradient-G-3-vrand_17H.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 68

braemoor-gradient-G-3-vrand_17I.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 69

braemoor-gradient-G-3-vrand_17J.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 70

braemoor-gradient-G-3-vrand_18A.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 71

braemoor-gradient-G-3-vrand_18B.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 72

braemoor-gradient-G-3-vrand_18C.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 73

braemoor-gradient-G-3-vrand_18D.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 74

braemoor-gradient-G-3-vrand_18E.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 75

braemoor-gradient-G-3-vrand_18F.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 76

braemoor-gradient-G-3-vrand_18G.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 77

braemoor-gradient-G-3-vrand_18H.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 78

braemoor-gradient-G-3-vrand_18I.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 79

braemoor-gradient-G-3-vrand_18J.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 80

braemoor-gradient-G-3-vrand_19A.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 81

braemoor-gradient-G-3-vrand_19B.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 82

braemoor-gradient-G-3-vrand_19C.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 83

braemoor-gradient-G-3-vrand_19D.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 84

braemoor-gradient-G-3-vrand_19E.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 85

braemoor-gradient-G-3-vrand_19F.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 86

braemoor-gradient-G-3-vrand_19G.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 87

braemoor-gradient-G-3-vrand_19H.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 88

braemoor-gradient-G-3-vrand_19I.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 89

braemoor-gradient-G-3-vrand_19J.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 90

braemoor-gradient-G-3-vrand_1AA.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 91

braemoor-gradient-G-3-vrand_1AB.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 92

braemoor-gradient-G-3-vrand_1AC.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 93

braemoor-gradient-G-3-vrand_1AD.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 94

braemoor-gradient-G-3-vrand_1AE.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 95

braemoor-gradient-G-3-vrand_1AF.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 96

braemoor-gradient-G-3-vrand_1AG.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 97

braemoor-gradient-G-3-vrand_1AH.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 98

braemoor-gradient-G-3-vrand_1AI.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 99

braemoor-gradient-G-3-vrand_1AJ.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 100


# random viewpoints 240 x 180 gradient ascent
braemoor-gradient-G-3-vrand_21A.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 1

braemoor-gradient-G-3-vrand_21B.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 2

braemoor-gradient-G-3-vrand_21C.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 3

braemoor-gradient-G-3-vrand_21D.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 4

braemoor-gradient-G-3-vrand_21E.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 5

braemoor-gradient-G-3-vrand_21F.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 6

braemoor-gradient-G-3-vrand_21G.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 7

braemoor-gradient-G-3-vrand_21H.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 8

braemoor-gradient-G-3-vrand_21I.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 9

braemoor-gradient-G-3-vrand_21J.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 10

braemoor-gradient-G-3-vrand_22A.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 11

braemoor-gradient-G-3-vrand_22B.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 12

braemoor-gradient-G-3-vrand_22C.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 13

braemoor-gradient-G-3-vrand_22D.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 14

braemoor-gradient-G-3-vrand_22E.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 15

braemoor-gradient-G-3-vrand_22F.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 16

braemoor-gradient-G-3-vrand_22G.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 17

braemoor-gradient-G-3-vrand_22H.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 18

braemoor-gradient-G-3-vrand_22I.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 19

braemoor-gradient-G-3-vrand_22J.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 20

braemoor-gradient-G-3-vrand_23A.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 21

braemoor-gradient-G-3-vrand_23B.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 22

braemoor-gradient-G-3-vrand_23C.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 23

braemoor-gradient-G-3-vrand_23D.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 24

braemoor-gradient-G-3-vrand_23E.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 25

braemoor-gradient-G-3-vrand_23F.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 26

braemoor-gradient-G-3-vrand_23G.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 27

braemoor-gradient-G-3-vrand_23H.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 28

braemoor-gradient-G-3-vrand_23I.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 29

braemoor-gradient-G-3-vrand_23J.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 30

braemoor-gradient-G-3-vrand_24A.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 31

braemoor-gradient-G-3-vrand_24B.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 32

braemoor-gradient-G-3-vrand_24C.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 33

braemoor-gradient-G-3-vrand_24D.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 34

braemoor-gradient-G-3-vrand_24E.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 35

braemoor-gradient-G-3-vrand_24F.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 36

braemoor-gradient-G-3-vrand_24G.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 37

braemoor-gradient-G-3-vrand_24H.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 38

braemoor-gradient-G-3-vrand_24I.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 39

braemoor-gradient-G-3-vrand_24J.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 40

braemoor-gradient-G-3-vrand_25A.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 41

braemoor-gradient-G-3-vrand_25B.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 42

braemoor-gradient-G-3-vrand_25C.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 43

braemoor-gradient-G-3-vrand_25D.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 44

braemoor-gradient-G-3-vrand_25E.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 45

braemoor-gradient-G-3-vrand_25F.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 46

braemoor-gradient-G-3-vrand_25G.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 47

braemoor-gradient-G-3-vrand_25H.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 48

braemoor-gradient-G-3-vrand_25I.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 49

braemoor-gradient-G-3-vrand_25J.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 50

braemoor-gradient-G-3-vrand_26A.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 51

braemoor-gradient-G-3-vrand_26B.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 52

braemoor-gradient-G-3-vrand_26C.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 53

braemoor-gradient-G-3-vrand_26D.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 54

braemoor-gradient-G-3-vrand_26E.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 55

braemoor-gradient-G-3-vrand_26F.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 56

braemoor-gradient-G-3-vrand_26G.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 57

braemoor-gradient-G-3-vrand_26H.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 58

braemoor-gradient-G-3-vrand_26I.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 59

braemoor-gradient-G-3-vrand_26J.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 60

braemoor-gradient-G-3-vrand_27A.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 61

braemoor-gradient-G-3-vrand_27B.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 62

braemoor-gradient-G-3-vrand_27C.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 63

braemoor-gradient-G-3-vrand_27D.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 64

braemoor-gradient-G-3-vrand_27E.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 65

braemoor-gradient-G-3-vrand_27F.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 66

braemoor-gradient-G-3-vrand_27G.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 67

braemoor-gradient-G-3-vrand_27H.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 68

braemoor-gradient-G-3-vrand_27I.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 69

braemoor-gradient-G-3-vrand_27J.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 70

braemoor-gradient-G-3-vrand_28A.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 71

braemoor-gradient-G-3-vrand_28B.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 72

braemoor-gradient-G-3-vrand_28C.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 73

braemoor-gradient-G-3-vrand_28D.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 74

braemoor-gradient-G-3-vrand_28E.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 75

braemoor-gradient-G-3-vrand_28F.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 76

braemoor-gradient-G-3-vrand_28G.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 77

braemoor-gradient-G-3-vrand_28H.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 78

braemoor-gradient-G-3-vrand_28I.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 79

braemoor-gradient-G-3-vrand_28J.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 80

braemoor-gradient-G-3-vrand_29A.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 81

braemoor-gradient-G-3-vrand_29B.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 82

braemoor-gradient-G-3-vrand_29C.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 83

braemoor-gradient-G-3-vrand_29D.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 84

braemoor-gradient-G-3-vrand_29E.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 85

braemoor-gradient-G-3-vrand_29F.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 86

braemoor-gradient-G-3-vrand_29G.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 87

braemoor-gradient-G-3-vrand_29H.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 88

braemoor-gradient-G-3-vrand_29I.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 89

braemoor-gradient-G-3-vrand_29J.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 90

braemoor-gradient-G-3-vrand_2AA.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 91

braemoor-gradient-G-3-vrand_2AB.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 92

braemoor-gradient-G-3-vrand_2AC.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 93

braemoor-gradient-G-3-vrand_2AD.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 94

braemoor-gradient-G-3-vrand_2AE.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 95

braemoor-gradient-G-3-vrand_2AF.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 96

braemoor-gradient-G-3-vrand_2AG.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 97

braemoor-gradient-G-3-vrand_2AH.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 98

braemoor-gradient-G-3-vrand_2AI.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 99

braemoor-gradient-G-3-vrand_2AJ.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -G 3 -bmp $@ -txt $(basename $@).txt -vrand 10 -t 600 -s 100


braemoor-nudge-limited-50-pts-10.txt : visibility
	./visibility -h $(HGT) -123 37 -w $(WIN_480x360) -r 50 -G $@ $(VIEWPOINTS_10)


braemoor-nudge-limited-50.txt : visibility
	./visibility -h $(HGT) -123 37 -w $(WIN_480x360) -r 50 -G $@ -122.1489 37.1158 -v -122.19 37.11


braemoor-cvis-2.bmp : visibility
	./visibility -h $(HGT) -123 37 -w $(WIN_480x360) -C $@


braemoor-limited-50-cvis-2.bmp : visibility
	./visibility -h $(HGT) -123 37 -w $(WIN_480x360) -r 50 -C $@


# ALREADY UPDATED
braemoor-height-2.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -H -bmp $@

flat.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -H -bmp $@

dish.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -H -bmp $@

wavy.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -H -bmp $@

wavy2.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -H -bmp $@


# simulated annealing
# ALREADY UPDATED
braemoor-sa.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 100 -S -bmp $@ -v $(VIEWPOINTS_10) -t 10000 -T 100 -M 100 -a 0.99 -b 1.0 -d 50

braemoor-sa-2.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 100 -S -bmp $@ -v $(VIEWPOINTS_10) -t 100000 -T 100 -M 500 -l 0.7 -d 50

braemoor-sa-3.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 100 -S -bmp $@ -v $(VIEWPOINTS_10) -t 100000 -T 100 -M 1500 -l 0.7 -d 50

braemoor-sa-11A.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 1

braemoor-sa-11B.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 2

braemoor-sa-11C.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 3

braemoor-sa-11D.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 4

braemoor-sa-17A.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VIEWPOINTS_10) -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 1

braemoor-sa-17B.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VIEWPOINTS_10) -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 2

braemoor-sa-17C.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VIEWPOINTS_10) -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 3

braemoor-sa-17D.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VIEWPOINTS_10) -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 4

flat-sa-11A.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 1

flat-sa-11B.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 2

flat-sa-11C.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 3

flat-sa-11D.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 4

dish-sa-11A.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 100 -l 0.7 -d 50 -s 1

dish-sa-11B.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 100 -l 0.7 -d 50 -s 2

dish-sa-11C.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 100 -l 0.7 -d 50 -s 3

dish-sa-11D.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 100 -l 0.7 -d 50 -s 4



wavy-sa-11A.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 1

wavy-sa-11B.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 2

wavy-sa-11C.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 3

wavy-sa-11D.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 4

# distributed simulated annealing
# ALREADY UPDATED
# cumulative visibility = 42472 (2013-07-12)
braemoor-sa-2A-dist.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 100 -S -bmp $@ -txt $(basename $@).txt -v $(VIEWPOINTS_10) -t 100000 -T 100 -M 500 -l 0.7 -d 50 -Sd -er 100 -cr 200 -s 1

braemoor-sa-2B-dist.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 100 -S -bmp $@ -txt $(basename $@).txt -v $(VIEWPOINTS_10) -t 100000 -T 100 -M 500 -l 0.7 -d 50 -Sd -er 100 -cr 200 -s 2

braemoor-sa-2C-dist.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 100 -S -bmp $@ -txt $(basename $@).txt -v $(VIEWPOINTS_10) -t 100000 -T 100 -M 500 -l 0.7 -d 50 -Sd -er 100 -cr 200 -s 3

braemoor-sa-2D-dist.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 100 -S -bmp $@ -txt $(basename $@).txt -v $(VIEWPOINTS_10) -t 100000 -T 100 -M 500 -l 0.7 -d 50 -Sd -er 100 -cr 200 -s 4

# cumulative visibility = 68554 (2013-07-12)
braemoor-sa-3-dist.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 100 -S -bmp $@ -v $(VIEWPOINTS_10) -t 100000 -T 100 -M 500 -l 0.7 -d 50 -Sd -er 100 -cr 1000

braemoor-sa-3A-dist.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 100 -S -bmp $@ -txt $(basename $@).txt -v $(VIEWPOINTS_10) -t 100000 -T 100 -M 500 -l 0.7 -d 50 -Sd -er 100 -cr 1000 -s 1

braemoor-sa-3B-dist.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 100 -S -bmp $@ -txt $(basename $@).txt -v $(VIEWPOINTS_10) -t 100000 -T 100 -M 500 -l 0.7 -d 50 -Sd -er 100 -cr 1000 -s 2

braemoor-sa-3C-dist.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 100 -S -bmp $@ -txt $(basename $@).txt -v $(VIEWPOINTS_10) -t 100000 -T 100 -M 500 -l 0.7 -d 50 -Sd -er 100 -cr 1000 -s 3

braemoor-sa-3D-dist.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 100 -S -bmp $@ -txt $(basename $@).txt -v $(VIEWPOINTS_10) -t 100000 -T 100 -M 500 -l 0.7 -d 50 -Sd -er 100 -cr 1000 -s 4

# cumulative visibility = 68463 (2013-07-12)
braemoor-sa-4-dist.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 100 -S -bmp $@ -v $(VIEWPOINTS_10) -t 100000 -T 100 -M 500 -l 0.7 -d 50 -Sd -er 50 -cr 1000

braemoor-sa-4A-dist.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 100 -S -bmp $@ -txt $(basename $@).txt -v $(VIEWPOINTS_10) -t 100000 -T 100 -M 500 -l 0.7 -d 50 -Sd -er 50 -cr 1000 -s 1

braemoor-sa-4B-dist.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 100 -S -bmp $@ -txt $(basename $@).txt -v $(VIEWPOINTS_10) -t 100000 -T 100 -M 500 -l 0.7 -d 50 -Sd -er 50 -cr 1000 -s 2

braemoor-sa-4C-dist.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 100 -S -bmp $@ -txt $(basename $@).txt -v $(VIEWPOINTS_10) -t 100000 -T 100 -M 500 -l 0.7 -d 50 -Sd -er 50 -cr 1000 -s 3

braemoor-sa-4D-dist.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 100 -S -bmp $@ -txt $(basename $@).txt -v $(VIEWPOINTS_10) -t 100000 -T 100 -M 500 -l 0.7 -d 50 -Sd -er 50 -cr 1000 -s 4

# cumulative visibility = 61487 (2013-07-12)
braemoor-sa-5-dist.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 100 -S -bmp $@ -v $(VIEWPOINTS_10) -t 100000 -T 100 -M 500 -l 0.7 -d 50 -Sd -er 200 -cr 1000

braemoor-sa-5A-dist.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 100 -S -bmp $@ -txt $(basename $@).txt -v $(VIEWPOINTS_10) -t 100000 -T 100 -M 500 -l 0.7 -d 50 -Sd -er 200 -cr 1000 -s 1

braemoor-sa-5B-dist.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 100 -S -bmp $@ -txt $(basename $@).txt -v $(VIEWPOINTS_10) -t 100000 -T 100 -M 500 -l 0.7 -d 50 -Sd -er 200 -cr 1000 -s 2

braemoor-sa-5C-dist.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 100 -S -bmp $@ -txt $(basename $@).txt -v $(VIEWPOINTS_10) -t 100000 -T 100 -M 500 -l 0.7 -d 50 -Sd -er 200 -cr 1000 -s 3

braemoor-sa-5D-dist.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 100 -S -bmp $@ -txt $(basename $@).txt -v $(VIEWPOINTS_10) -t 100000 -T 100 -M 500 -l 0.7 -d 50 -Sd -er 200 -cr 1000 -s 4

braemoor-sa-7A-dist.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 25 -Sd -er 50 -cr 100 -s 1

braemoor-sa-7B-dist.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 25 -Sd -er 50 -cr 100 -s 2

braemoor-sa-7C-dist.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 25 -Sd -er 50 -cr 100 -s 3

braemoor-sa-7D-dist.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 25 -Sd -er 50 -cr 100 -s 4

braemoor-sa-8A-dist.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 25 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 25 -Sd -er 25 -cr 100 -s 1

braemoor-sa-9A-dist.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 25 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 25 -Sd -er 50 -cr 150 -s 1

braemoor-sa-10A-dist.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 1

braemoor-sa-10B-dist.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 2

braemoor-sa-10C-dist.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 3

braemoor-sa-10D-dist.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 4

braemoor-sa-11A-dist.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 1

braemoor-sa-11B-dist.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 2

braemoor-sa-11C-dist.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 3

braemoor-sa-11D-dist.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 4

braemoor-sa-12A-dist.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 1

braemoor-sa-12B-dist.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 2

braemoor-sa-12C-dist.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 3

braemoor-sa-12D-dist.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 4

braemoor-sa-13A-dist.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 1

braemoor-sa-13B-dist.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 2

braemoor-sa-13C-dist.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 3

braemoor-sa-13D-dist.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 4

braemoor-sa-14A-dist.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 1

braemoor-sa-14B-dist.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 2

braemoor-sa-14C-dist.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 3

braemoor-sa-14D-dist.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 4

braemoor-sa-15A-dist.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 1

braemoor-sa-15B-dist.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 2

braemoor-sa-15C-dist.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 3

braemoor-sa-15D-dist.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 4

braemoor-sa-16A-dist.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 1

braemoor-sa-16B-dist.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 2

braemoor-sa-16C-dist.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 3

braemoor-sa-16D-dist.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 4

braemoor-sa-18A-dist.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VIEWPOINTS_10) -t 100000 -T 100 -M 500 -l 0.7 -d 50 -Sd -er 60 -cr 200 -s 1

braemoor-sa-18B-dist.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VIEWPOINTS_10) -t 100000 -T 100 -M 500 -l 0.7 -d 50 -Sd -er 60 -cr 200 -s 2

braemoor-sa-18C-dist.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VIEWPOINTS_10) -t 100000 -T 100 -M 500 -l 0.7 -d 50 -Sd -er 60 -cr 200 -s 3

braemoor-sa-18D-dist.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VIEWPOINTS_10) -t 100000 -T 100 -M 500 -l 0.7 -d 50 -Sd -er 60 -cr 200 -s 4

braemoor-sa-19A-dist.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VIEWPOINTS_10) -t 100000 -T 100 -M 500 -l 0.7 -d 55 -Sd -er 55 -cr 210 -s 1

braemoor-sa-19B-dist.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VIEWPOINTS_10) -t 100000 -T 100 -M 500 -l 0.7 -d 55 -Sd -er 55 -cr 210 -s 2

braemoor-sa-19C-dist.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VIEWPOINTS_10) -t 100000 -T 100 -M 500 -l 0.7 -d 55 -Sd -er 55 -cr 210 -s 3

braemoor-sa-19D-dist.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VIEWPOINTS_10) -t 100000 -T 100 -M 500 -l 0.7 -d 55 -Sd -er 55 -cr 210 -s 4

braemoor-sa-20A-dist.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VIEWPOINTS_10) -t 100000 -T 100 -M 500 -l 0.7 -d 60 -Sd -er 60 -cr 220 -s 1

braemoor-sa-20B-dist.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VIEWPOINTS_10) -t 100000 -T 100 -M 500 -l 0.7 -d 60 -Sd -er 60 -cr 220 -s 2

braemoor-sa-20C-dist.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VIEWPOINTS_10) -t 100000 -T 100 -M 500 -l 0.7 -d 60 -Sd -er 60 -cr 220 -s 3

braemoor-sa-20D-dist.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VIEWPOINTS_10) -t 100000 -T 100 -M 500 -l 0.7 -d 60 -Sd -er 60 -cr 220 -s 4

# potential games
# Requires tuning.
# -t is the number of rounds.  10000 is much too large.
# -b is beta scales utility before raising it to power of e.
braemoor-pg.bmp : visibility
	./visibility -hgt $(HGT) -hgt-latlon 37 -123 -w $(WIN_480x360) -r 100 -P -bmp $@ -txt $(basename $@).txt -v $(VIEWPOINTS_10) -t 10 -b 0.01 -d 1


# Simulated Annealing, Distributed, Flat
flat-sa-14A-dist.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 1

flat-sa-14B-dist.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 2

flat-sa-14C-dist.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 3

flat-sa-14D-dist.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 4

flat-sa-12A-dist.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 1

flat-sa-12B-dist.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 2

flat-sa-12C-dist.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 3

flat-sa-12D-dist.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 4

flat-sa-13A-dist.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 1

flat-sa-13B-dist.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 2

flat-sa-13C-dist.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 3

flat-sa-13D-dist.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 4

flat-sa-10A-dist.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 1

flat-sa-10B-dist.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 2

flat-sa-10C-dist.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 3

flat-sa-10D-dist.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 4

flat-sa-15A-dist.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 1

flat-sa-15B-dist.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 2

flat-sa-15C-dist.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 3

flat-sa-15D-dist.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 4

flat-sa-16A-dist.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 1

flat-sa-16B-dist.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 2

flat-sa-16C-dist.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 3

flat-sa-16D-dist.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 4




# Simulated Annealing, Distributed, Wavey
wavy-sa-14A-dist.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 1

wavy-sa-14B-dist.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 50 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 2

wavy-sa-14C-dist.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 50 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 3

wavy-sa-14D-dist.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 50 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 4

wavy-sa-12A-dist.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 1

wavy-sa-12B-dist.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 50 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 2

wavy-sa-12C-dist.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 50 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 3

wavy-sa-12D-dist.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 50 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 4

wavy-sa-13A-dist.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 50 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 1

wavy-sa-13B-dist.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 50 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 2

wavy-sa-13C-dist.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 50 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 3

wavy-sa-13D-dist.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 50 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 4

wavy-sa-10A-dist.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 50 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 1

wavy-sa-10B-dist.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 50 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 2

wavy-sa-10C-dist.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 50 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 3

wavy-sa-10D-dist.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 50 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 4

wavy-sa-15A-dist.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 50 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 1

wavy-sa-15B-dist.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 50 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 2

wavy-sa-15C-dist.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 50 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 3

wavy-sa-15D-dist.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 50 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 4

wavy-sa-16A-dist.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 50 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 1

wavy-sa-16B-dist.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 50 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 2

wavy-sa-16C-dist.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 50 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 3

wavy-sa-16D-dist.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 50 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 4




# Simulated Annealing, Distributed, Dish
dish-sa-14A-dist.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 1

dish-sa-14B-dist.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 50 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 2

dish-sa-14C-dist.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 50 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 3

dish-sa-14D-dist.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 50 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 4

dish-sa-12A-dist.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 1

dish-sa-12B-dist.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 50 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 2

dish-sa-12C-dist.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 50 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 3

dish-sa-12D-dist.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 50 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 4

dish-sa-13A-dist.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 50 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 1

dish-sa-13B-dist.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 50 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 2

dish-sa-13C-dist.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 50 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 3

dish-sa-13D-dist.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 50 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 4

dish-sa-10A-dist.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 50 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 1

dish-sa-10B-dist.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 50 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 2

dish-sa-10C-dist.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 50 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 3

dish-sa-10D-dist.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 50 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 4

dish-sa-15A-dist.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 50 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 1

dish-sa-15B-dist.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 50 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 2

dish-sa-15C-dist.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 50 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 3

dish-sa-15D-dist.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 50 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 4

dish-sa-16A-dist.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 50 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 1

dish-sa-16B-dist.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 50 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 2

dish-sa-16C-dist.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 50 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 3

dish-sa-16D-dist.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -S -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 50 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 4
