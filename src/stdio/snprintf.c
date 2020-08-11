#include <stdarg.h>
#include <stdio.h>

int
snprintf(char *restrict buf, size_t n, const char *restrict fmt, ...)
{
	int r;
	va_list ap;

	va_start(ap, fmt);
	r = vsnprintf(buf, n, fmt, ap);
	va_end(ap);
	return r;
}
