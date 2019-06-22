#include <stdio.h>

#include "tertium_cpu.h"
#include "tertium_std.h"

int
vsprintf(char *restrict buf, const char *restrict fmt, va_list ap)
{
	return vsnprintf(buf, C_INTMAX, (char *)fmt, ap);
}
