#include <stdarg.h>
#include <stdio.h>

int
dprintf(int fd, const char *restrict s, ...)
{
	int r;
	va_list ap;

	va_start(ap, s);
	r = vdprintf(fd, s, ap);
	va_end(ap);
	return r;
}
