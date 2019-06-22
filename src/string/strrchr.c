#include <string.h>

#include "tertium_cpu.h"
#include "tertium_std.h"

char *
strrchr(const char *s, int c)
{
	return c_str_rchr((char *)s, C_USIZEMAX, c);
}
