#include <string.h>

char *
strncat(char *restrict s1, char *restrict s2, size_t n)
{
	(void)stpncpy(memchr(s1, 0, n), s2, n);
	return s1;
}
