#include <string.h>

#include "tertium_cpu.h"
#include "tertium_std.h"

char *
strncat(char *restrict s1, char *restrict s2, size_t n)
{
	char *p;

	p = s1;
	s1 = s1 + c_str_len(s1, n);
	while ((*s1++ = *s2++)) ;
	return p;
}
