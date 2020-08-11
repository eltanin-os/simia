#include <stdio.h>

int
vprintf(const char *restrict s, va_list ap)
{
	return vfprintf(stdout, s, ap);
}
