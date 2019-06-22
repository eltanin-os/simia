#include <string.h>

#include "tertium_cpu.h"
#include "tertium_std.h"

char *
strstr(const char *h, const char *n)
{
	return c_str_str((char *)h, C_USIZEMAX, (char *)n);
}
