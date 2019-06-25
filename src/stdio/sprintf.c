#include <stdarg.h>
#include <stdio.h>

#include "tertium_cpu.h"
#include "tertium_std.h"

int
sprintf(char *restrict buf, const char *restrict fmt, ...)
{
	int r;
	va_list ap;
	va_start(ap, fmt);
	r = vsprintf(buf, fmt, ap);
	va_end(ap);
	return r;
}
