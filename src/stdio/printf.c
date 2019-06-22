#include <stdio.h>

#include "tertium_cpu.h"
#include "tertium_std.h"

int
printf(const char *restrict s, ...)
{
	int r;
	va_list ap;
	va_start(ap, s);
	r = vprintf(s, ap);
	va_end(ap);
	return r;
}
