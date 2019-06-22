#include <string.h>

#include "tertium_cpu.h"
#include "tertium_std.h"

char *
stpcpy(char *restrict s1, const char *restrict s2)
{
	return stpncpy(s1, s2, C_USIZEMAX);
}
