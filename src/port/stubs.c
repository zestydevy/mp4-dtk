#include <stdio.h>
#include <stdarg.h>
#include <types.h>

void OSInit()
{
    printf("OSInit is a stub\n");
}

void OSReport(const char *msg, ...)
{
    va_list args;
    va_start(args, msg);
    vprintf(msg, args);
    va_end(args);
}

void OSPanic(const char *file, int line, const char *msg, ...) {
    printf("Panic in \"%s\" on line %d.\n", file, line);
}
