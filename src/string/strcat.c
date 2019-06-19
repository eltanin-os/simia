#include <tertium/cpu.h>
#include <tertium/std.h>

#include <string.h>

char *
strcat(char *restrict s1, char *restrict s2)
{
	return strncat(s1, s2, C_USIZEMAX);
}
