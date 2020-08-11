#include <string.h>

char *
strncpy(char *restrict s1, char *restrict s2, size_t n)
{
	(void)stpncpy(s1, s2, n);
	return s1;
}
