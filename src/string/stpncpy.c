#include <string.h>

char *
stpncpy(char *restrict s1, const char *restrict s2, size_t n)
{
	while (n-- && (*s1++ = *s2++)) ;
	return s1;
}
