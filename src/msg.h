/**************************************************************************

File:           msg.h

Description:    Provide a service for reporting messages to the user.

Global Functions:

                msg_message(msg, ...)
                msg_error(msg, ...)

Global Macros:  

                INTERNAL_ERROR(msg)
                INTERNAL_ERROR_1(msg, param)
                INTERNAL_ERROR_2(msg, param1, param2)

**************************************************************************/

#define ASSERT(CONDITION) \
    if (!(CONDITION)) msg_condition_failed(__FILE__, __LINE__, #CONDITION)

#define INTERNAL_ERROR(MESSAGE) \
    msg_internal_error(__FILE__, __LINE__, MESSAGE)

#define INTERNAL_ERROR_1(MESSAGE, PARAM) \
    msg_internal_error(__FILE__, __LINE__, MESSAGE, PARAM)

#define INTERNAL_ERROR_2(MESSAGE, PARAM1, PARAM2) \
    msg_internal_error(__FILE__, __LINE__, MESSAGE, PARAM1, PARAM2)

void msg_message(const char *message, ...);
void msg_error(const char *message, ...);
void msg_internal_error(const char *filename, int line, const char *message, ...);
void msg_assertion_failed(const char *filename, int line, const char *condition, ...);
