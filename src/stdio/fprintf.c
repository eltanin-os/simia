#include <stdarg.h>
#include <stdio.h>

int
fprintf(FILE *restrict p, const char *restrict s, ...)
{
	int r;
	va_list ap;

	va_start(ap, s);
	r = vfprintf(p, s, ap);
	va_end(ap);
	return r;
}
