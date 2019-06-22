#include <string.h>

#include "tertium_cpu.h"
#include "tertium_std.h"

char *
strncpy(char *restrict s1, char *restrict s2, size_t n)
{
	char *p;
	p = s1;
	while (n-- && (*s1++ = *s2++));
	return p;
}
