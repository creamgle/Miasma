#include "miasma/m_core.h"
#include <stdio.h>
#include <string.h>
#include <stdarg.h>

void log_output(LogLevel level, const char *message, ...) {
    const char* level_strings[6] = {"[FATAL]: ", "[ERROR]: ", "[WARN]:  ", "[INFO]:  ", "[DEBUG]: ", "[TRACE]: "};
    
    char out_message[32000];
    memset(out_message, 0, sizeof(out_message));

    __builtin_va_list arg_ptr;
    va_start(arg_ptr, message);
    vsnprintf(out_message, 32000, message, arg_ptr);
    va_end(arg_ptr);

    char out_message2[32000];
    sprintf(out_message2, "%s%s\n", level_strings[level], out_message);

    printf("%s", out_message2);
}