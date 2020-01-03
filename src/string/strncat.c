#include <string.h>

#include "tertium_cpu.h"
#include "tertium_std.h"

char *
strncat(char *restrict s1, char *restrict s2, size_t n)
{
	(void)stpncpy(memchr(s1, 0, n), s2, n);
	return s1;
}
