#include <stdio.h>
#include <limits.h>

int
vsprintf(char *restrict buf, const char *restrict fmt, va_list ap)
{
	return vsnprintf(buf, INT_MAX, (char *)fmt, ap);
}
