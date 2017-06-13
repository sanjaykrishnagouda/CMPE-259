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
    srtm.cpp \
    srtm_test.cpp \
    test.cpp \
    ucsclim.cpp \
    visibility.cpp \
    voids.cpp \
	ts.cpp \
# 	sa.cpp \


GENERATED_DATA_FILES = \
   dsa-wavy-cr-130-s-1.bmp \
   dsa-wavy-cr-130-s-2.bmp \
   dsa-wavy-cr-130-s-3.bmp \
   dsa-wavy-cr-130-s-4.bmp \
   dsa-wavy-cr-130-s-5.bmp \
   dsa-wavy-cr-140-s-1.bmp \
   dsa-wavy-cr-140-s-2.bmp \
   dsa-wavy-cr-140-s-3.bmp \
   dsa-wavy-cr-140-s-4.bmp \
   dsa-wavy-cr-140-s-5.bmp \
   dsa-wavy-cr-150-s-1.bmp \
   dsa-wavy-cr-150-s-2.bmp \
   dsa-wavy-cr-150-s-3.bmp \
   dsa-wavy-cr-150-s-4.bmp \
   dsa-wavy-cr-150-s-5.bmp \
   dsa-wavy-cr-160-s-1.bmp \
   dsa-wavy-cr-160-s-2.bmp \
   dsa-wavy-cr-160-s-3.bmp \
   dsa-wavy-cr-160-s-4.bmp \
   dsa-wavy-cr-160-s-5.bmp \
   dsa-wavy-cr-170-s-1.bmp \
   dsa-wavy-cr-170-s-2.bmp \
   dsa-wavy-cr-170-s-3.bmp \
   dsa-wavy-cr-170-s-4.bmp \
   dsa-wavy-cr-170-s-5.bmp \
   dsa-wavy2-cr-130-s-1.bmp \
   dsa-wavy2-cr-130-s-2.bmp \
   dsa-wavy2-cr-130-s-3.bmp \
   dsa-wavy2-cr-130-s-4.bmp \
   dsa-wavy2-cr-130-s-5.bmp \
   dsa-wavy2-cr-140-s-1.bmp \
   dsa-wavy2-cr-140-s-2.bmp \
   dsa-wavy2-cr-140-s-3.bmp \
   dsa-wavy2-cr-140-s-4.bmp \
   dsa-wavy2-cr-140-s-5.bmp \
   dsa-wavy2-cr-150-s-1.bmp \
   dsa-wavy2-cr-150-s-2.bmp \
   dsa-wavy2-cr-150-s-3.bmp \
   dsa-wavy2-cr-150-s-4.bmp \
   dsa-wavy2-cr-150-s-5.bmp \
   dsa-wavy2-cr-160-s-1.bmp \
   dsa-wavy2-cr-160-s-2.bmp \
   dsa-wavy2-cr-160-s-3.bmp \
   dsa-wavy2-cr-160-s-4.bmp \
   dsa-wavy2-cr-160-s-5.bmp \
   dsa-wavy2-cr-170-s-1.bmp \
   dsa-wavy2-cr-170-s-2.bmp \
   dsa-wavy2-cr-170-s-3.bmp \
   dsa-wavy2-cr-170-s-4.bmp \
   dsa-wavy2-cr-170-s-5.bmp \
   dsa-flat-cr-130-s-1.bmp \
   dsa-flat-cr-130-s-2.bmp \
   dsa-flat-cr-130-s-3.bmp \
   dsa-flat-cr-130-s-4.bmp \
   dsa-flat-cr-130-s-5.bmp \
   dsa-flat-cr-140-s-1.bmp \
   dsa-flat-cr-140-s-2.bmp \
   dsa-flat-cr-140-s-3.bmp \
   dsa-flat-cr-140-s-4.bmp \
   dsa-flat-cr-140-s-5.bmp \
   dsa-flat-cr-150-s-1.bmp \
   dsa-flat-cr-150-s-2.bmp \
   dsa-flat-cr-150-s-3.bmp \
   dsa-flat-cr-150-s-4.bmp \
   dsa-flat-cr-150-s-5.bmp \
   dsa-flat-cr-160-s-1.bmp \
   dsa-flat-cr-160-s-2.bmp \
   dsa-flat-cr-160-s-3.bmp \
   dsa-flat-cr-160-s-4.bmp \
   dsa-flat-cr-160-s-5.bmp \
   dsa-flat-cr-170-s-1.bmp \
   dsa-flat-cr-170-s-2.bmp \
   dsa-flat-cr-170-s-3.bmp \
   dsa-flat-cr-170-s-4.bmp \
   dsa-flat-cr-170-s-5.bmp \
   dsa-dish-cr-130-s-1.bmp \
   dsa-dish-cr-130-s-2.bmp \
   dsa-dish-cr-130-s-3.bmp \
   dsa-dish-cr-130-s-4.bmp \
   dsa-dish-cr-130-s-5.bmp \
   dsa-dish-cr-140-s-1.bmp \
   dsa-dish-cr-140-s-2.bmp \
   dsa-dish-cr-140-s-3.bmp \
   dsa-dish-cr-140-s-4.bmp \
   dsa-dish-cr-140-s-5.bmp \
   dsa-dish-cr-150-s-1.bmp \
   dsa-dish-cr-150-s-2.bmp \
   dsa-dish-cr-150-s-3.bmp \
   dsa-dish-cr-150-s-4.bmp \
   dsa-dish-cr-150-s-5.bmp \
   dsa-dish-cr-160-s-1.bmp \
   dsa-dish-cr-160-s-2.bmp \
   dsa-dish-cr-160-s-3.bmp \
   dsa-dish-cr-160-s-4.bmp \
   dsa-dish-cr-160-s-5.bmp \
   dsa-dish-cr-170-s-1.bmp \
   dsa-dish-cr-170-s-2.bmp \
   dsa-dish-cr-170-s-3.bmp \
   dsa-dish-cr-170-s-4.bmp \
   dsa-dish-cr-170-s-5.bmp \







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

visibility  : visibility.o srtm.o cvis_wang.o bmp.o msg.o grd.o pg.o ts.o \
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
#HGT     = ../Data/SRTM_1_Arc_Second/N37W123.hgt
REAL    = ../Data/SRTM_1_Arc_Second/N37W123.hgt
FLAT    = ../Data/SRTM_1_Arc_Second/flat.hgt
DISH    = ../Data/SRTM_1_Arc_Second/dish.hgt
WAVY    = ../Data/SRTM_1_Arc_Second/wavy.hgt
WAVY2   = ../Data/SRTM_1_Arc_Second/wavy2.hgt
#BRC     = ../Data/SRTM_1_Arc_Second/N40W120.hgt
#MAUI_NW = ../Data/SRTM_1_Arc_Second/N21W157.hgt
#MAUI_SE = ../Data/SRTM_1_Arc_Second/N20W156.hgt
#MAUI_SW = ../Data/SRTM_1_Arc_Second/N20W157.hgt
#PAHOA   = ../Data/SRTM_1_Arc_Second/N19W155.hgt

WIN_480x360  = 37.1 -122.2 37.2 -122.0666666666667
WIN_480x360A = 37.1 -122.0666666666667 37.2 -121.9333333333333
#WIN_PAHOA    = 19.49 -154.96 19.50 -154.95

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
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 1

sa-real-s-2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 2

sa-real-s-3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 3

sa-real-s-4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 4

sa-real-s-5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 5

sa-real-s-6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 6

sa-real-s-7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 7

sa-real-s-8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 8

sa-real-s-9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 9

sa-real-s-10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 10


# ==============

# sa-real20

sa-real20-s-1.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 1

sa-real20-s-2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 2

sa-real20-s-3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 3

sa-real20-s-4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 4

sa-real20-s-5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 5

sa-real20-s-6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 6

sa-real20-s-7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 7

sa-real20-s-8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 8

sa-real20-s-9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 9

sa-real20-s-10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 10


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
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 7

sa-real30-s-8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 8

sa-real30-s-9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 9

sa-real30-s-10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 10


# ==============

# sa-flat

sa-flat-s-1.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 1

sa-flat-s-2.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 2

sa-flat-s-3.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 3

sa-flat-s-4.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 4

sa-flat-s-5.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 5

sa-flat-s-6.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 6

sa-flat-s-7.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 7

sa-flat-s-8.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 8

sa-flat-s-9.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 9

sa-flat-s-10.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 10


# ==============

# sa-dish

sa-dish-s-1.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 1

sa-dish-s-2.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 2

sa-dish-s-3.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 3

sa-dish-s-4.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 4

sa-dish-s-5.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 5

sa-dish-s-6.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 6

sa-dish-s-7.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 7

sa-dish-s-8.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 8

sa-dish-s-9.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 9

sa-dish-s-10.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 10


# ==============

# sa-wavy

sa-wavy-s-1.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 1

sa-wavy-s-2.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 2

sa-wavy-s-3.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 3

sa-wavy-s-4.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 4

sa-wavy-s-5.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 5

sa-wavy-s-6.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 6

sa-wavy-s-7.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 7

sa-wavy-s-8.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 8

sa-wavy-s-9.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 9

sa-wavy-s-10.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 10


# ==============

# sa-wavy2

sa-wavy2-s-1.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 1

sa-wavy2-s-2.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 2

sa-wavy2-s-3.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 3

sa-wavy2-s-4.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 4

sa-wavy2-s-5.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 5

sa-wavy2-s-6.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 6

sa-wavy2-s-7.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 7

sa-wavy2-s-8.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 8

sa-wavy2-s-9.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 9

sa-wavy2-s-10.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 10



# ==============

# dsa-real-cr-120

dsa-real-cr-120-s-11.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 11

dsa-real-cr-120-s-12.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 12

dsa-real-cr-120-s-13.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 13

dsa-real-cr-120-s-14.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 14

dsa-real-cr-120-s-15.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 15

dsa-real-cr-120-s-16.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 16

dsa-real-cr-120-s-17.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 17

dsa-real-cr-120-s-18.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 18

dsa-real-cr-120-s-19.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 19

dsa-real-cr-120-s-20.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 20

# dsa-real-cr-130

dsa-real-cr-130-s-11.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 11

dsa-real-cr-130-s-12.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 12

dsa-real-cr-130-s-13.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 13

dsa-real-cr-130-s-14.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 14

dsa-real-cr-130-s-15.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 15

dsa-real-cr-130-s-16.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 16

dsa-real-cr-130-s-17.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 17

dsa-real-cr-130-s-18.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 18

dsa-real-cr-130-s-19.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 19

dsa-real-cr-130-s-20.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 20

# dsa-real-cr-140

dsa-real-cr-140-s-11.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 11

dsa-real-cr-140-s-12.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 12

dsa-real-cr-140-s-13.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 13

dsa-real-cr-140-s-14.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 14

dsa-real-cr-140-s-15.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 15

dsa-real-cr-140-s-16.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 16

dsa-real-cr-140-s-17.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 17

dsa-real-cr-140-s-18.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 18

dsa-real-cr-140-s-19.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 19

dsa-real-cr-140-s-20.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 20

# dsa-real-cr-150

dsa-real-cr-150-s-11.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 11

dsa-real-cr-150-s-12.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 12

dsa-real-cr-150-s-13.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 13

dsa-real-cr-150-s-14.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 14

dsa-real-cr-150-s-15.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 15

dsa-real-cr-150-s-16.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 16

dsa-real-cr-150-s-17.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 17

dsa-real-cr-150-s-18.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 18

dsa-real-cr-150-s-19.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 19

dsa-real-cr-150-s-20.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 20

# dsa-real-cr-160

dsa-real-cr-160-s-11.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 11

dsa-real-cr-160-s-12.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 12

dsa-real-cr-160-s-13.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 13

dsa-real-cr-160-s-14.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 14

dsa-real-cr-160-s-15.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 15

dsa-real-cr-160-s-16.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 16

dsa-real-cr-160-s-17.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 17

dsa-real-cr-160-s-18.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 18

dsa-real-cr-160-s-19.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 19

dsa-real-cr-160-s-20.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 20

# dsa-real-cr-170

dsa-real-cr-170-s-11.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 11

dsa-real-cr-170-s-12.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 12

dsa-real-cr-170-s-13.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 13

dsa-real-cr-170-s-14.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 14

dsa-real-cr-170-s-15.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 15

dsa-real-cr-170-s-16.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 16

dsa-real-cr-170-s-17.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 17

dsa-real-cr-170-s-18.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 18

dsa-real-cr-170-s-19.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 19

dsa-real-cr-170-s-20.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 20



# dsa-real-cr-180

dsa-real-cr-180-s-1.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 1

dsa-real-cr-180-s-2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 2

dsa-real-cr-180-s-3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 3

dsa-real-cr-180-s-4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 4

dsa-real-cr-180-s-5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 5

dsa-real-cr-180-s-6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 6

dsa-real-cr-180-s-7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 7

dsa-real-cr-180-s-8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 8

dsa-real-cr-180-s-9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 9

dsa-real-cr-180-s-10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 10



# dsa-real-cr-190

dsa-real-cr-190-s-1.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 1

dsa-real-cr-190-s-2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 2

dsa-real-cr-190-s-3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 3

dsa-real-cr-190-s-4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 4

dsa-real-cr-190-s-5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 5

dsa-real-cr-190-s-6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 6

dsa-real-cr-190-s-7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 7

dsa-real-cr-190-s-8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 8

dsa-real-cr-190-s-9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 9

dsa-real-cr-190-s-10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 10



# dsa-real-cr-200

dsa-real-cr-200-s-1.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 1

dsa-real-cr-200-s-2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 2

dsa-real-cr-200-s-3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 3

dsa-real-cr-200-s-4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 4

dsa-real-cr-200-s-5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 5

dsa-real-cr-200-s-6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 6

dsa-real-cr-200-s-7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 7

dsa-real-cr-200-s-8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 8

dsa-real-cr-200-s-9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 9

dsa-real-cr-200-s-10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 10


# dsa-real20-cr-120

dsa-real20-cr-120-s-1.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 1

dsa-real20-cr-120-s-2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 2

dsa-real20-cr-120-s-3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 3

dsa-real20-cr-120-s-4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 4

dsa-real20-cr-120-s-5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 5

dsa-real20-cr-120-s-6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 6

dsa-real20-cr-120-s-7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 7

dsa-real20-cr-120-s-8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 8

dsa-real20-cr-120-s-9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 9

dsa-real20-cr-120-s-10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 10


# dsa-real20-cr-130

dsa-real20-cr-130-s-1.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 1

dsa-real20-cr-130-s-2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 2

dsa-real20-cr-130-s-3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 3

dsa-real20-cr-130-s-4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 4

dsa-real20-cr-130-s-5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 5

dsa-real20-cr-130-s-6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 6

dsa-real20-cr-130-s-7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 7

dsa-real20-cr-130-s-8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 8

dsa-real20-cr-130-s-9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 9

dsa-real20-cr-130-s-10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 10

# dsa-real20-cr-140

dsa-real20-cr-140-s-1.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 1

dsa-real20-cr-140-s-2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 2

dsa-real20-cr-140-s-3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 3

dsa-real20-cr-140-s-4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 4

dsa-real20-cr-140-s-5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 5

dsa-real20-cr-140-s-6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 6

dsa-real20-cr-140-s-7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 7

dsa-real20-cr-140-s-8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 8

dsa-real20-cr-140-s-9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 9

dsa-real20-cr-140-s-10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 10

# dsa-real20-cr-150

dsa-real20-cr-150-s-1.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 1

dsa-real20-cr-150-s-2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 2

dsa-real20-cr-150-s-3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 3

dsa-real20-cr-150-s-4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 4

dsa-real20-cr-150-s-5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 5

dsa-real20-cr-150-s-6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 6

dsa-real20-cr-150-s-7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 7

dsa-real20-cr-150-s-8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 8

dsa-real20-cr-150-s-9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 9

dsa-real20-cr-150-s-10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 10

# dsa-real20-cr-160

dsa-real20-cr-160-s-1.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 1

dsa-real20-cr-160-s-2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 2

dsa-real20-cr-160-s-3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 3

dsa-real20-cr-160-s-4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 4

dsa-real20-cr-160-s-5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 5

dsa-real20-cr-160-s-6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 6

dsa-real20-cr-160-s-7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 7

dsa-real20-cr-160-s-8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 8

dsa-real20-cr-160-s-9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 9

dsa-real20-cr-160-s-10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 10

# dsa-real20-cr-170

dsa-real20-cr-170-s-1.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 1

dsa-real20-cr-170-s-2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 2

dsa-real20-cr-170-s-3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 3

dsa-real20-cr-170-s-4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 4

dsa-real20-cr-170-s-5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 5

dsa-real20-cr-170-s-6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 6

dsa-real20-cr-170-s-7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 7

dsa-real20-cr-170-s-8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 8

dsa-real20-cr-170-s-9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 9

dsa-real20-cr-170-s-10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 10



# dsa-real20-cr-180

dsa-real20-cr-180-s-1.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 1

dsa-real20-cr-180-s-2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 2

dsa-real20-cr-180-s-3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 3

dsa-real20-cr-180-s-4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 4

dsa-real20-cr-180-s-5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 5

dsa-real20-cr-180-s-6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 6

dsa-real20-cr-180-s-7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 7

dsa-real20-cr-180-s-8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 8

dsa-real20-cr-180-s-9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 9

dsa-real20-cr-180-s-10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 10



# dsa-real20-cr-190

dsa-real20-cr-190-s-1.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 1

dsa-real20-cr-190-s-2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 2

dsa-real20-cr-190-s-3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 3

dsa-real20-cr-190-s-4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 4

dsa-real20-cr-190-s-5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 5

dsa-real20-cr-190-s-6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 6

dsa-real20-cr-190-s-7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 7

dsa-real20-cr-190-s-8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 8

dsa-real20-cr-190-s-9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 9

dsa-real20-cr-190-s-10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 10



# dsa-real20-cr-200

dsa-real20-cr-200-s-1.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 1

dsa-real20-cr-200-s-2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 2

dsa-real20-cr-200-s-3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 3

dsa-real20-cr-200-s-4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 4

dsa-real20-cr-200-s-5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 5

dsa-real20-cr-200-s-6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 6

dsa-real20-cr-200-s-7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 7

dsa-real20-cr-200-s-8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 8

dsa-real20-cr-200-s-9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 9

dsa-real20-cr-200-s-10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 20 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 10



# dsa-real30-cr-120

dsa-real30-cr-120-s-1.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 1

dsa-real30-cr-120-s-2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 2

dsa-real30-cr-120-s-3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 3

dsa-real30-cr-120-s-4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 4

dsa-real30-cr-120-s-5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 5

dsa-real30-cr-120-s-6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 6

dsa-real30-cr-120-s-7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 7

dsa-real30-cr-120-s-8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 8

dsa-real30-cr-120-s-9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 9

dsa-real30-cr-120-s-10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 10


# dsa-real30-cr-130

dsa-real30-cr-130-s-1.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 1

dsa-real30-cr-130-s-2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 2

dsa-real30-cr-130-s-3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 3

dsa-real30-cr-130-s-4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 4

dsa-real30-cr-130-s-5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 5

dsa-real30-cr-130-s-6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 6

dsa-real30-cr-130-s-7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 7

dsa-real30-cr-130-s-8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 8

dsa-real30-cr-130-s-9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 9

dsa-real30-cr-130-s-10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 10

# dsa-real30-cr-140

dsa-real30-cr-140-s-1.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 1

dsa-real30-cr-140-s-2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 2

dsa-real30-cr-140-s-3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 3

dsa-real30-cr-140-s-4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 4

dsa-real30-cr-140-s-5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 5

dsa-real30-cr-140-s-6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 6

dsa-real30-cr-140-s-7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 7

dsa-real30-cr-140-s-8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 8

dsa-real30-cr-140-s-9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 9

dsa-real30-cr-140-s-10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 10

# dsa-real30-cr-150

dsa-real30-cr-150-s-1.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 1

dsa-real30-cr-150-s-2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 2

dsa-real30-cr-150-s-3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 3

dsa-real30-cr-150-s-4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 4

dsa-real30-cr-150-s-5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 5

dsa-real30-cr-150-s-6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 6

dsa-real30-cr-150-s-7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 7

dsa-real30-cr-150-s-8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 8

dsa-real30-cr-150-s-9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 9

dsa-real30-cr-150-s-10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 10

# dsa-real30-cr-160

dsa-real30-cr-160-s-1.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 1

dsa-real30-cr-160-s-2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 2

dsa-real30-cr-160-s-3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 3

dsa-real30-cr-160-s-4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 4

dsa-real30-cr-160-s-5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 5

dsa-real30-cr-160-s-6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 6

dsa-real30-cr-160-s-7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 7

dsa-real30-cr-160-s-8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 8

dsa-real30-cr-160-s-9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 9

dsa-real30-cr-160-s-10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 10

# dsa-real30-cr-170

dsa-real30-cr-170-s-1.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 1

dsa-real30-cr-170-s-2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 2

dsa-real30-cr-170-s-3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 3

dsa-real30-cr-170-s-4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 4

dsa-real30-cr-170-s-5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 5

dsa-real30-cr-170-s-6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 6

dsa-real30-cr-170-s-7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 7

dsa-real30-cr-170-s-8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 8

dsa-real30-cr-170-s-9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 9

dsa-real30-cr-170-s-10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 10



# dsa-real30-cr-180

dsa-real30-cr-180-s-1.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 1

dsa-real30-cr-180-s-2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 2

dsa-real30-cr-180-s-3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 3

dsa-real30-cr-180-s-4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 4

dsa-real30-cr-180-s-5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 5

dsa-real30-cr-180-s-6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 6

dsa-real30-cr-180-s-7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 7

dsa-real30-cr-180-s-8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 8

dsa-real30-cr-180-s-9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 9

dsa-real30-cr-180-s-10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 10



# dsa-real30-cr-190

dsa-real30-cr-190-s-1.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 1

dsa-real30-cr-190-s-2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 2

dsa-real30-cr-190-s-3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 3

dsa-real30-cr-190-s-4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 4

dsa-real30-cr-190-s-5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 5

dsa-real30-cr-190-s-6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 6

dsa-real30-cr-190-s-7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 7

dsa-real30-cr-190-s-8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 8

dsa-real30-cr-190-s-9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 9

dsa-real30-cr-190-s-10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 10



# dsa-real30-cr-200

dsa-real30-cr-200-s-1.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 1

dsa-real30-cr-200-s-2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 2

dsa-real30-cr-200-s-3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 3

dsa-real30-cr-200-s-4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 4

dsa-real30-cr-200-s-5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 5

dsa-real30-cr-200-s-6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 6

dsa-real30-cr-200-s-7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 7

dsa-real30-cr-200-s-8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 8

dsa-real30-cr-200-s-9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 9

dsa-real30-cr-200-s-10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 30 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 10



# ===============

# dsa-real80-cr-120

dsa-real80-cr-120-s-1.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 1

dsa-real80-cr-120-s-2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 2

dsa-real80-cr-120-s-3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 3

dsa-real80-cr-120-s-4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 4

dsa-real80-cr-120-s-5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 5

dsa-real80-cr-120-s-6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 6

dsa-real80-cr-120-s-7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 7

dsa-real80-cr-120-s-8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 8

dsa-real80-cr-120-s-9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 9

dsa-real80-cr-120-s-10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 10


# dsa-real80-cr-130

dsa-real80-cr-130-s-1.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 1

dsa-real80-cr-130-s-2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 2

dsa-real80-cr-130-s-3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 3

dsa-real80-cr-130-s-4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 4

dsa-real80-cr-130-s-5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 5

dsa-real80-cr-130-s-6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 6

dsa-real80-cr-130-s-7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 7

dsa-real80-cr-130-s-8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 8

dsa-real80-cr-130-s-9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 9

dsa-real80-cr-130-s-10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 10

# dsa-real80-cr-140

dsa-real80-cr-140-s-1.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 1

dsa-real80-cr-140-s-2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 2

dsa-real80-cr-140-s-3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 3

dsa-real80-cr-140-s-4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 4

dsa-real80-cr-140-s-5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 5

dsa-real80-cr-140-s-6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 6

dsa-real80-cr-140-s-7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 7

dsa-real80-cr-140-s-8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 8

dsa-real80-cr-140-s-9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 9

dsa-real80-cr-140-s-10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 10

# dsa-real80-cr-150

dsa-real80-cr-150-s-1.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 1

dsa-real80-cr-150-s-2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 2

dsa-real80-cr-150-s-3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 3

dsa-real80-cr-150-s-4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 4

dsa-real80-cr-150-s-5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 5

dsa-real80-cr-150-s-6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 6

dsa-real80-cr-150-s-7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 7

dsa-real80-cr-150-s-8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 8

dsa-real80-cr-150-s-9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 9

dsa-real80-cr-150-s-10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 10

# dsa-real80-cr-160

dsa-real80-cr-160-s-1.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 1

dsa-real80-cr-160-s-2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 2

dsa-real80-cr-160-s-3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 3

dsa-real80-cr-160-s-4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 4

dsa-real80-cr-160-s-5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 5

dsa-real80-cr-160-s-6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 6

dsa-real80-cr-160-s-7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 7

dsa-real80-cr-160-s-8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 8

dsa-real80-cr-160-s-9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 9

dsa-real80-cr-160-s-10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 10

# dsa-real80-cr-170

dsa-real80-cr-170-s-1.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 1

dsa-real80-cr-170-s-2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 2

dsa-real80-cr-170-s-3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 3

dsa-real80-cr-170-s-4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 4

dsa-real80-cr-170-s-5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 5

dsa-real80-cr-170-s-6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 6

dsa-real80-cr-170-s-7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 7

dsa-real80-cr-170-s-8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 8

dsa-real80-cr-170-s-9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 9

dsa-real80-cr-170-s-10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 10



# dsa-real80-cr-180

dsa-real80-cr-180-s-1.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 1

dsa-real80-cr-180-s-2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 2

dsa-real80-cr-180-s-3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 3

dsa-real80-cr-180-s-4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 4

dsa-real80-cr-180-s-5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 5

dsa-real80-cr-180-s-6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 6

dsa-real80-cr-180-s-7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 7

dsa-real80-cr-180-s-8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 8

dsa-real80-cr-180-s-9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 9

dsa-real80-cr-180-s-10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 10



# dsa-real80-cr-190

dsa-real80-cr-190-s-1.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 1

dsa-real80-cr-190-s-2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 2

dsa-real80-cr-190-s-3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 3

dsa-real80-cr-190-s-4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 4

dsa-real80-cr-190-s-5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 5

dsa-real80-cr-190-s-6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 6

dsa-real80-cr-190-s-7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 7

dsa-real80-cr-190-s-8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 8

dsa-real80-cr-190-s-9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 9

dsa-real80-cr-190-s-10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 10



# dsa-real80-cr-200

dsa-real80-cr-200-s-1.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 1

dsa-real80-cr-200-s-2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 2

dsa-real80-cr-200-s-3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 3

dsa-real80-cr-200-s-4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 4

dsa-real80-cr-200-s-5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 5

dsa-real80-cr-200-s-6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 6

dsa-real80-cr-200-s-7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 7

dsa-real80-cr-200-s-8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 8

dsa-real80-cr-200-s-9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 9

dsa-real80-cr-200-s-10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 80 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 10



# ===============

# dsa-real40-cr-120

dsa-real40-cr-120-s-1.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 1

dsa-real40-cr-120-s-2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 2

dsa-real40-cr-120-s-3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 3

dsa-real40-cr-120-s-4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 4

dsa-real40-cr-120-s-5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 5

dsa-real40-cr-120-s-6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 6

dsa-real40-cr-120-s-7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 7

dsa-real40-cr-120-s-8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 8

dsa-real40-cr-120-s-9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 9

dsa-real40-cr-120-s-10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 10


# dsa-real40-cr-130

dsa-real40-cr-130-s-1.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 1

dsa-real40-cr-130-s-2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 2

dsa-real40-cr-130-s-3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 3

dsa-real40-cr-130-s-4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 4

dsa-real40-cr-130-s-5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 5

dsa-real40-cr-130-s-6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 6

dsa-real40-cr-130-s-7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 7

dsa-real40-cr-130-s-8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 8

dsa-real40-cr-130-s-9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 9

dsa-real40-cr-130-s-10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 10

# dsa-real40-cr-140

dsa-real40-cr-140-s-1.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 1

dsa-real40-cr-140-s-2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 2

dsa-real40-cr-140-s-3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 3

dsa-real40-cr-140-s-4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 4

dsa-real40-cr-140-s-5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 5

dsa-real40-cr-140-s-6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 6

dsa-real40-cr-140-s-7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 7

dsa-real40-cr-140-s-8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 8

dsa-real40-cr-140-s-9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 9

dsa-real40-cr-140-s-10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 10

# dsa-real40-cr-150

dsa-real40-cr-150-s-1.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 1

dsa-real40-cr-150-s-2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 2

dsa-real40-cr-150-s-3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 3

dsa-real40-cr-150-s-4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 4

dsa-real40-cr-150-s-5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 5

dsa-real40-cr-150-s-6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 6

dsa-real40-cr-150-s-7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 7

dsa-real40-cr-150-s-8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 8

dsa-real40-cr-150-s-9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 9

dsa-real40-cr-150-s-10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 10

# dsa-real40-cr-160

dsa-real40-cr-160-s-1.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 1

dsa-real40-cr-160-s-2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 2

dsa-real40-cr-160-s-3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 3

dsa-real40-cr-160-s-4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 4

dsa-real40-cr-160-s-5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 5

dsa-real40-cr-160-s-6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 6

dsa-real40-cr-160-s-7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 7

dsa-real40-cr-160-s-8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 8

dsa-real40-cr-160-s-9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 9

dsa-real40-cr-160-s-10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 10

# dsa-real40-cr-170

dsa-real40-cr-170-s-1.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 1

dsa-real40-cr-170-s-2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 2

dsa-real40-cr-170-s-3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 3

dsa-real40-cr-170-s-4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 4

dsa-real40-cr-170-s-5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 5

dsa-real40-cr-170-s-6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 6

dsa-real40-cr-170-s-7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 7

dsa-real40-cr-170-s-8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 8

dsa-real40-cr-170-s-9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 9

dsa-real40-cr-170-s-10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 10



# dsa-real40-cr-180

dsa-real40-cr-180-s-1.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 1

dsa-real40-cr-180-s-2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 2

dsa-real40-cr-180-s-3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 3

dsa-real40-cr-180-s-4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 4

dsa-real40-cr-180-s-5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 5

dsa-real40-cr-180-s-6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 6

dsa-real40-cr-180-s-7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 7

dsa-real40-cr-180-s-8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 8

dsa-real40-cr-180-s-9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 9

dsa-real40-cr-180-s-10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 180 -s 10



# dsa-real40-cr-190

dsa-real40-cr-190-s-1.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 1

dsa-real40-cr-190-s-2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 2

dsa-real40-cr-190-s-3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 3

dsa-real40-cr-190-s-4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 4

dsa-real40-cr-190-s-5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 5

dsa-real40-cr-190-s-6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 6

dsa-real40-cr-190-s-7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 7

dsa-real40-cr-190-s-8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 8

dsa-real40-cr-190-s-9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 9

dsa-real40-cr-190-s-10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 190 -s 10



# dsa-real40-cr-200

dsa-real40-cr-200-s-1.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 1

dsa-real40-cr-200-s-2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 2

dsa-real40-cr-200-s-3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 3

dsa-real40-cr-200-s-4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 4

dsa-real40-cr-200-s-5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 5

dsa-real40-cr-200-s-6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 6

dsa-real40-cr-200-s-7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 7

dsa-real40-cr-200-s-8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 8

dsa-real40-cr-200-s-9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 9

dsa-real40-cr-200-s-10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 40 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 200 -s 10



# ==============

# dsa-flat-cr-120

dsa-flat-cr-120-s-1.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 1

dsa-flat-cr-120-s-2.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 2

dsa-flat-cr-120-s-3.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 3

dsa-flat-cr-120-s-4.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 4

dsa-flat-cr-120-s-5.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 5

dsa-flat-cr-120-s-6.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 6

dsa-flat-cr-120-s-7.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 7

dsa-flat-cr-120-s-8.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 8

dsa-flat-cr-120-s-9.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 9

dsa-flat-cr-120-s-10.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 10

# dsa-flat-cr-130

dsa-flat-cr-130-s-1.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 1

dsa-flat-cr-130-s-2.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 2

dsa-flat-cr-130-s-3.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 3

dsa-flat-cr-130-s-4.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 4

dsa-flat-cr-130-s-5.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 5

dsa-flat-cr-130-s-6.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 6

dsa-flat-cr-130-s-7.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 7

dsa-flat-cr-130-s-8.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 8

dsa-flat-cr-130-s-9.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 9

dsa-flat-cr-130-s-10.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 10

# dsa-flat-cr-140

dsa-flat-cr-140-s-1.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 1

dsa-flat-cr-140-s-2.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 2

dsa-flat-cr-140-s-3.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 3

dsa-flat-cr-140-s-4.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 4

dsa-flat-cr-140-s-5.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 5

dsa-flat-cr-140-s-6.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 6

dsa-flat-cr-140-s-7.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 7

dsa-flat-cr-140-s-8.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 8

dsa-flat-cr-140-s-9.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 9

dsa-flat-cr-140-s-10.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 10

# dsa-flat-cr-150

dsa-flat-cr-150-s-1.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 1

dsa-flat-cr-150-s-2.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 2

dsa-flat-cr-150-s-3.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 3

dsa-flat-cr-150-s-4.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 4

dsa-flat-cr-150-s-5.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 5

dsa-flat-cr-150-s-6.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 6

dsa-flat-cr-150-s-7.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 7

dsa-flat-cr-150-s-8.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 8

dsa-flat-cr-150-s-9.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 9

dsa-flat-cr-150-s-10.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 10

# dsa-flat-cr-160

dsa-flat-cr-160-s-1.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 1

dsa-flat-cr-160-s-2.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 2

dsa-flat-cr-160-s-3.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 3

dsa-flat-cr-160-s-4.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 4

dsa-flat-cr-160-s-5.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 5

dsa-flat-cr-160-s-6.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 6

dsa-flat-cr-160-s-7.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 7

dsa-flat-cr-160-s-8.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 8

dsa-flat-cr-160-s-9.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 9

dsa-flat-cr-160-s-10.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 10

# dsa-flat-cr-170

dsa-flat-cr-170-s-1.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 1

dsa-flat-cr-170-s-2.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 2

dsa-flat-cr-170-s-3.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 3

dsa-flat-cr-170-s-4.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 4

dsa-flat-cr-170-s-5.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 5

dsa-flat-cr-170-s-6.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 6

dsa-flat-cr-170-s-7.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 7

dsa-flat-cr-170-s-8.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 8

dsa-flat-cr-170-s-9.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 9

dsa-flat-cr-170-s-10.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 10



# ==============

# dsa-dish-cr-120

dsa-dish-cr-120-s-1.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 1

dsa-dish-cr-120-s-2.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 2

dsa-dish-cr-120-s-3.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 3

dsa-dish-cr-120-s-4.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 4

dsa-dish-cr-120-s-5.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 5

dsa-dish-cr-120-s-6.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 6

dsa-dish-cr-120-s-7.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 7

dsa-dish-cr-120-s-8.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 8

dsa-dish-cr-120-s-9.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 9

dsa-dish-cr-120-s-10.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 10

# dsa-dish-cr-130

dsa-dish-cr-130-s-1.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 1

dsa-dish-cr-130-s-2.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 2

dsa-dish-cr-130-s-3.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 3

dsa-dish-cr-130-s-4.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 4

dsa-dish-cr-130-s-5.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 5

dsa-dish-cr-130-s-6.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 6

dsa-dish-cr-130-s-7.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 7

dsa-dish-cr-130-s-8.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 8

dsa-dish-cr-130-s-9.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 9

dsa-dish-cr-130-s-10.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 10

# dsa-dish-cr-140

dsa-dish-cr-140-s-1.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 1

dsa-dish-cr-140-s-2.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 2

dsa-dish-cr-140-s-3.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 3

dsa-dish-cr-140-s-4.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 4

dsa-dish-cr-140-s-5.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 5

dsa-dish-cr-140-s-6.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 6

dsa-dish-cr-140-s-7.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 7

dsa-dish-cr-140-s-8.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 8

dsa-dish-cr-140-s-9.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 9

dsa-dish-cr-140-s-10.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 10

# dsa-dish-cr-150

dsa-dish-cr-150-s-1.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 1

dsa-dish-cr-150-s-2.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 2

dsa-dish-cr-150-s-3.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 3

dsa-dish-cr-150-s-4.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 4

dsa-dish-cr-150-s-5.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 5

dsa-dish-cr-150-s-6.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 6

dsa-dish-cr-150-s-7.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 7

dsa-dish-cr-150-s-8.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 8

dsa-dish-cr-150-s-9.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 9

dsa-dish-cr-150-s-10.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 10

# dsa-dish-cr-160

dsa-dish-cr-160-s-1.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 1

dsa-dish-cr-160-s-2.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 2

dsa-dish-cr-160-s-3.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 3

dsa-dish-cr-160-s-4.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 4

dsa-dish-cr-160-s-5.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 5

dsa-dish-cr-160-s-6.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 6

dsa-dish-cr-160-s-7.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 7

dsa-dish-cr-160-s-8.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 8

dsa-dish-cr-160-s-9.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 9

dsa-dish-cr-160-s-10.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 10

# dsa-dish-cr-170

dsa-dish-cr-170-s-1.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 1

dsa-dish-cr-170-s-2.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 2

dsa-dish-cr-170-s-3.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 3

dsa-dish-cr-170-s-4.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 4

dsa-dish-cr-170-s-5.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 5

dsa-dish-cr-170-s-6.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 6

dsa-dish-cr-170-s-7.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 7

dsa-dish-cr-170-s-8.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 8

dsa-dish-cr-170-s-9.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 9

dsa-dish-cr-170-s-10.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 10



# ==============

# dsa-wavy-cr-120

dsa-wavy-cr-120-s-1.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 1

dsa-wavy-cr-120-s-2.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 2

dsa-wavy-cr-120-s-3.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 3

dsa-wavy-cr-120-s-4.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 4

dsa-wavy-cr-120-s-5.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 5

dsa-wavy-cr-120-s-6.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 6

dsa-wavy-cr-120-s-7.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 7

dsa-wavy-cr-120-s-8.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 8

dsa-wavy-cr-120-s-9.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 9

dsa-wavy-cr-120-s-10.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 10

# dsa-wavy-cr-130

dsa-wavy-cr-130-s-1.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 1

dsa-wavy-cr-130-s-2.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 2

dsa-wavy-cr-130-s-3.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 3

dsa-wavy-cr-130-s-4.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 4

dsa-wavy-cr-130-s-5.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 5

dsa-wavy-cr-130-s-6.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 6

dsa-wavy-cr-130-s-7.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 7

dsa-wavy-cr-130-s-8.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 8

dsa-wavy-cr-130-s-9.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 9

dsa-wavy-cr-130-s-10.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 10

# dsa-wavy-cr-140

dsa-wavy-cr-140-s-1.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 1

dsa-wavy-cr-140-s-2.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 2

dsa-wavy-cr-140-s-3.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 3

dsa-wavy-cr-140-s-4.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 4

dsa-wavy-cr-140-s-5.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 5

dsa-wavy-cr-140-s-6.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 6

dsa-wavy-cr-140-s-7.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 7

dsa-wavy-cr-140-s-8.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 8

dsa-wavy-cr-140-s-9.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 9

dsa-wavy-cr-140-s-10.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 10

# dsa-wavy-cr-150

dsa-wavy-cr-150-s-1.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 1

dsa-wavy-cr-150-s-2.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 2

dsa-wavy-cr-150-s-3.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 3

dsa-wavy-cr-150-s-4.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 4

dsa-wavy-cr-150-s-5.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 5

dsa-wavy-cr-150-s-6.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 6

dsa-wavy-cr-150-s-7.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 7

dsa-wavy-cr-150-s-8.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 8

dsa-wavy-cr-150-s-9.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 9

dsa-wavy-cr-150-s-10.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 10

# dsa-wavy-cr-160

dsa-wavy-cr-160-s-1.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 1

dsa-wavy-cr-160-s-2.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 2

dsa-wavy-cr-160-s-3.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 3

dsa-wavy-cr-160-s-4.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 4

dsa-wavy-cr-160-s-5.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 5

dsa-wavy-cr-160-s-6.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 6

dsa-wavy-cr-160-s-7.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 7

dsa-wavy-cr-160-s-8.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 8

dsa-wavy-cr-160-s-9.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 9

dsa-wavy-cr-160-s-10.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 10

# dsa-wavy-cr-170

dsa-wavy-cr-170-s-1.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 1

dsa-wavy-cr-170-s-2.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 2

dsa-wavy-cr-170-s-3.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 3

dsa-wavy-cr-170-s-4.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 4

dsa-wavy-cr-170-s-5.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 5

dsa-wavy-cr-170-s-6.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 6

dsa-wavy-cr-170-s-7.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 7

dsa-wavy-cr-170-s-8.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 8

dsa-wavy-cr-170-s-9.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 9

dsa-wavy-cr-170-s-10.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 10



# ==============

# dsa-wavy2-cr-120

dsa-wavy2-cr-120-s-1.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 1

dsa-wavy2-cr-120-s-2.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 2

dsa-wavy2-cr-120-s-3.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 3

dsa-wavy2-cr-120-s-4.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 4

dsa-wavy2-cr-120-s-5.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 5

dsa-wavy2-cr-120-s-6.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 6

dsa-wavy2-cr-120-s-7.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 7

dsa-wavy2-cr-120-s-8.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 8

dsa-wavy2-cr-120-s-9.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 9

dsa-wavy2-cr-120-s-10.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 10

# dsa-wavy2-cr-130

dsa-wavy2-cr-130-s-1.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 1

dsa-wavy2-cr-130-s-2.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 2

dsa-wavy2-cr-130-s-3.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 3

dsa-wavy2-cr-130-s-4.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 4

dsa-wavy2-cr-130-s-5.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 5

dsa-wavy2-cr-130-s-6.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 6

dsa-wavy2-cr-130-s-7.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 7

dsa-wavy2-cr-130-s-8.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 8

dsa-wavy2-cr-130-s-9.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 9

dsa-wavy2-cr-130-s-10.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 10

# dsa-wavy2-cr-140

dsa-wavy2-cr-140-s-1.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 1

dsa-wavy2-cr-140-s-2.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 2

dsa-wavy2-cr-140-s-3.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 3

dsa-wavy2-cr-140-s-4.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 4

dsa-wavy2-cr-140-s-5.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 5

dsa-wavy2-cr-140-s-6.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 6

dsa-wavy2-cr-140-s-7.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 7

dsa-wavy2-cr-140-s-8.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 8

dsa-wavy2-cr-140-s-9.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 9

dsa-wavy2-cr-140-s-10.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 10

# dsa-wavy2-cr-150

dsa-wavy2-cr-150-s-1.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 1

dsa-wavy2-cr-150-s-2.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 2

dsa-wavy2-cr-150-s-3.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 3

dsa-wavy2-cr-150-s-4.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 4

dsa-wavy2-cr-150-s-5.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 5

dsa-wavy2-cr-150-s-6.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 6

dsa-wavy2-cr-150-s-7.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 7

dsa-wavy2-cr-150-s-8.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 8

dsa-wavy2-cr-150-s-9.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 9

dsa-wavy2-cr-150-s-10.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 10

# dsa-wavy2-cr-160

dsa-wavy2-cr-160-s-1.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 1

dsa-wavy2-cr-160-s-2.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 2

dsa-wavy2-cr-160-s-3.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 3

dsa-wavy2-cr-160-s-4.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 4

dsa-wavy2-cr-160-s-5.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 5

dsa-wavy2-cr-160-s-6.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 6

dsa-wavy2-cr-160-s-7.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 7

dsa-wavy2-cr-160-s-8.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 8

dsa-wavy2-cr-160-s-9.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 9

dsa-wavy2-cr-160-s-10.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 10

# dsa-wavy2-cr-170

dsa-wavy2-cr-170-s-1.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 1

dsa-wavy2-cr-170-s-2.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 2

dsa-wavy2-cr-170-s-3.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 3

dsa-wavy2-cr-170-s-4.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 4

dsa-wavy2-cr-170-s-5.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 5

dsa-wavy2-cr-170-s-6.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 6

dsa-wavy2-cr-170-s-7.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 7

dsa-wavy2-cr-170-s-8.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 8

dsa-wavy2-cr-170-s-9.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 9

dsa-wavy2-cr-170-s-10.bmp : visibility
	./visibility -hgt $(WAVY2) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 10


# ==============
# Change exploration radius

# dsa-real-cr-150-er-25 is same as dsa-real-cr-150

# dsa-real-cr-150-er-20

dsa-real-cr-150-er-20-s-1.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 150 -s 1

dsa-real-cr-150-er-20-s-2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 150 -s 2

dsa-real-cr-150-er-20-s-3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 150 -s 3

dsa-real-cr-150-er-20-s-4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 150 -s 4

dsa-real-cr-150-er-20-s-5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 150 -s 5

dsa-real-cr-150-er-20-s-6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 150 -s 6

dsa-real-cr-150-er-20-s-7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 150 -s 7

dsa-real-cr-150-er-20-s-8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 150 -s 8

dsa-real-cr-150-er-20-s-9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 150 -s 9

dsa-real-cr-150-er-20-s-10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 20 -Sd -er 20 -cr 150 -s 10


# dsa-real-cr-150-er-30

dsa-real-cr-150-er-30-s-1.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 150 -s 1

dsa-real-cr-150-er-30-s-2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 150 -s 2

dsa-real-cr-150-er-30-s-3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 150 -s 3

dsa-real-cr-150-er-30-s-4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 150 -s 4

dsa-real-cr-150-er-30-s-5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 150 -s 5

dsa-real-cr-150-er-30-s-6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 150 -s 6

dsa-real-cr-150-er-30-s-7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 150 -s 7

dsa-real-cr-150-er-30-s-8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 150 -s 8

dsa-real-cr-150-er-30-s-9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 150 -s 9

dsa-real-cr-150-er-30-s-10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 30 -Sd -er 30 -cr 150 -s 10


# dsa-real-cr-150-er-35

dsa-real-cr-150-er-35-s-1.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 150 -s 1

dsa-real-cr-150-er-35-s-2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 150 -s 2

dsa-real-cr-150-er-35-s-3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 150 -s 3

dsa-real-cr-150-er-35-s-4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 150 -s 4

dsa-real-cr-150-er-35-s-5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 150 -s 5

dsa-real-cr-150-er-35-s-6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 150 -s 6

dsa-real-cr-150-er-35-s-7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 150 -s 7

dsa-real-cr-150-er-35-s-8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 150 -s 8

dsa-real-cr-150-er-35-s-9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 150 -s 9

dsa-real-cr-150-er-35-s-10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 35 -Sd -er 35 -cr 150 -s 10


# dsa-real-cr-150-er-40

dsa-real-cr-150-er-40-s-1.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 150 -s 1

dsa-real-cr-150-er-40-s-2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 150 -s 2

dsa-real-cr-150-er-40-s-3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 150 -s 3

dsa-real-cr-150-er-40-s-4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 150 -s 4

dsa-real-cr-150-er-40-s-5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 150 -s 5

dsa-real-cr-150-er-40-s-6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 150 -s 6

dsa-real-cr-150-er-40-s-7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 150 -s 7

dsa-real-cr-150-er-40-s-8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 150 -s 8

dsa-real-cr-150-er-40-s-9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 150 -s 9

dsa-real-cr-150-er-40-s-10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 40 -Sd -er 40 -cr 150 -s 10


# dsa-real-cr-150-er-45

dsa-real-cr-150-er-45-s-1.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 150 -s 1

dsa-real-cr-150-er-45-s-2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 150 -s 2

dsa-real-cr-150-er-45-s-3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 150 -s 3

dsa-real-cr-150-er-45-s-4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 150 -s 4

dsa-real-cr-150-er-45-s-5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 150 -s 5

dsa-real-cr-150-er-45-s-6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 150 -s 6

dsa-real-cr-150-er-45-s-7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 150 -s 7

dsa-real-cr-150-er-45-s-8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 150 -s 8

dsa-real-cr-150-er-45-s-9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 150 -s 9

dsa-real-cr-150-er-45-s-10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 45 -Sd -er 45 -cr 150 -s 10


# dsa-real-cr-150-er-50

dsa-real-cr-150-er-50-s-1.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 150 -s 1

dsa-real-cr-150-er-50-s-2.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 150 -s 2

dsa-real-cr-150-er-50-s-3.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 150 -s 3

dsa-real-cr-150-er-50-s-4.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 150 -s 4

dsa-real-cr-150-er-50-s-5.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 150 -s 5

dsa-real-cr-150-er-50-s-6.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 150 -s 6

dsa-real-cr-150-er-50-s-7.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 150 -s 7

dsa-real-cr-150-er-50-s-8.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 150 -s 8

dsa-real-cr-150-er-50-s-9.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 150 -s 9

dsa-real-cr-150-er-50-s-10.bmp : visibility
	./visibility -hgt $(REAL) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -vrand 10 -t 100000 -T 100 -M 150 -l 0.7 -d 50 -Sd -er 50 -cr 150 -s 10





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




flat-sa-11A.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 1

flat-sa-11B.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 2

flat-sa-11C.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 3

flat-sa-11D.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 4

dish-sa-11A.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 100 -l 0.7 -d 50 -s 1

dish-sa-11B.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 100 -l 0.7 -d 50 -s 2

dish-sa-11C.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 100 -l 0.7 -d 50 -s 3

dish-sa-11D.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 100 -l 0.7 -d 50 -s 4



wavy-sa-11A.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 1

wavy-sa-11B.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 2

wavy-sa-11C.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 3

wavy-sa-11D.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 50 -s 4

# distributed simulated annealing
# ALREADY UPDATED
# cumulative visibility = 42472 (2013-07-12)



# Simulated Annealing, Distributed, Flat  ----> TS Distributed, Flat.
flat-sa-14A-dist.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 1

flat-sa-14B-dist.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 2

flat-sa-14C-dist.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 3

flat-sa-14D-dist.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 4

flat-sa-12A-dist.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 1

flat-sa-12B-dist.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 2

flat-sa-12C-dist.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 3

flat-sa-12D-dist.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 4

flat-sa-13A-dist.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 1

flat-sa-13B-dist.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 2

flat-sa-13C-dist.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 3

flat-sa-13D-dist.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 4

flat-sa-10A-dist.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 1

flat-sa-10B-dist.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 2

flat-sa-10C-dist.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 3

flat-sa-10D-dist.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 4

flat-sa-15A-dist.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 1

flat-sa-15B-dist.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 2

flat-sa-15C-dist.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 3

flat-sa-15D-dist.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 4

flat-sa-16A-dist.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 1

flat-sa-16B-dist.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 2

flat-sa-16C-dist.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 3

flat-sa-16D-dist.bmp : visibility
	./visibility -hgt $(FLAT) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 4




# Simulated Annealing, Distributed, Wavey ------------> Tabu Search
wavy-sa-14A-dist.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 1

wavy-sa-14B-dist.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 50 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 2

wavy-sa-14C-dist.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 50 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 3

wavy-sa-14D-dist.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 50 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 4

wavy-sa-12A-dist.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 1

wavy-sa-12B-dist.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 50 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 2

wavy-sa-12C-dist.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 50 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 3

wavy-sa-12D-dist.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 50 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 4

wavy-sa-13A-dist.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 50 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 1

wavy-sa-13B-dist.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 50 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 2

wavy-sa-13C-dist.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 50 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 3

wavy-sa-13D-dist.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 50 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 4

wavy-sa-10A-dist.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 50 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 1

wavy-sa-10B-dist.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 50 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 2

wavy-sa-10C-dist.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 50 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 3

wavy-sa-10D-dist.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 50 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 4

wavy-sa-15A-dist.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 50 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 1

wavy-sa-15B-dist.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 50 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 2

wavy-sa-15C-dist.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 50 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 3

wavy-sa-15D-dist.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 50 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 4

wavy-sa-16A-dist.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 50 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 1

wavy-sa-16B-dist.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 50 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 2

wavy-sa-16C-dist.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 50 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 3

wavy-sa-16D-dist.bmp : visibility
	./visibility -hgt $(WAVY) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 50 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 4




# Simulated Annealing, Distributed, Dish ----> Tabu Search. 
dish-sa-14A-dist.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 1

dish-sa-14B-dist.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 50 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 2

dish-sa-14C-dist.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 50 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 3

dish-sa-14D-dist.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 50 -l 0.7 -d 10 -Sd -er 10 -cr 120 -s 4

dish-sa-12A-dist.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 500 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 1

dish-sa-12B-dist.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 50 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 2

dish-sa-12C-dist.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 50 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 3

dish-sa-12D-dist.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 50 -l 0.7 -d 15 -Sd -er 15 -cr 130 -s 4

dish-sa-13A-dist.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 50 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 1

dish-sa-13B-dist.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 50 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 2

dish-sa-13C-dist.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 50 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 3

dish-sa-13D-dist.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 50 -l 0.7 -d 20 -Sd -er 20 -cr 140 -s 4

dish-sa-10A-dist.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 50 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 1

dish-sa-10B-dist.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 50 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 2

dish-sa-10C-dist.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 50 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 3

dish-sa-10D-dist.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 50 -l 0.7 -d 25 -Sd -er 25 -cr 150 -s 4

dish-sa-15A-dist.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 50 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 1

dish-sa-15B-dist.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 50 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 2

dish-sa-15C-dist.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 50 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 3

dish-sa-15D-dist.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 50 -l 0.7 -d 30 -Sd -er 30 -cr 160 -s 4

dish-sa-16A-dist.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 50 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 1

dish-sa-16B-dist.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 50 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 2

dish-sa-16C-dist.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 50 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 3

dish-sa-16D-dist.bmp : visibility
	./visibility -hgt $(DISH) -hgt-latlon 37 -123 -w $(WIN_240x180A) -r 50 -TS -bmp $@ -txt $(basename $@).txt -v $(VP_240x180A_10) -t 100000 -T 100 -M 50 -l 0.7 -d 35 -Sd -er 35 -cr 170 -s 4