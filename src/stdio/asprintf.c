#include <stdarg.h>
#include <stdio.h>

int
asprintf(char **restrict s, const char *restrict fmt, ...)
{
	int r;
	va_list ap;

	va_start(ap, fmt);
	r = vasprintf(s, fmt, ap);
	va_end(ap);
	return r;
}
