#include <stdarg.h>
#include <stdio.h>

#include "tertium_cpu.h"
#include "tertium_std.h"

int
fprintf(FILE *restrict fp, const char *restrict s, ...)
{
	int r;
	va_list ap;

	va_start(ap, s);
	r = vfprintf(fp, s, ap);
	va_end(ap);
	return r;
}
