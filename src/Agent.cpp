/**************************************************************************

File:           Agent.cpp

Class:          Agent

Description:    Store all state needed for an agent to anneal its state.

Methods:        None.

**************************************************************************/

extern "C"
{
#include "srtm.h"
#include "cvis_wang.h"
#include "bmp.h"
#include "visibility.h"
}

#include "Disk.h"
#include "State.h"
#include "Statistics.h"
#include "Temperature.h"

#include "Agent.h"

