/**************************************************************************

File:           msg.h

Description:    Provide a service for reporting messages to the user.

Global Functions:

                msg_message()
                msg_error()

Global Macros:  

                INTERNAL_ERROR()
                INTERNAL_ERROR_1()
                INTERNAL_ERROR_2()

**************************************************************************/

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

extern "C"
{
#include "msg.h"
}

extern "C" void msg_message(const char *message, ...)
{
    va_list args;
    va_start(args, message);
    vfprintf(stdout, message, args);
    fprintf(stdout, "\n");
    va_end(args);
}

extern "C" void msg_error(const char *message, ...)
{
    va_list args;
    va_start(args, message);
    fprintf(stdout, "Error: ");
    vfprintf(stdout, message, args);
    fprintf(stdout, "\n");
    va_end(args);

    exit(1);
}
