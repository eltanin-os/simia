#include <string.h>

#include "tertium_cpu.h"
#include "tertium_std.h"

char *
strcat(char *restrict s1, char *restrict s2)
{
	return strncat(s1, s2, C_USIZEMAX);
}
