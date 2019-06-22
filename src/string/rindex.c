#include <string.h>

#include "tertium_cpu.h"
#include "tertium_std.h"

char *
rindex(const char *s, int c)
{
	return strrchr(s, c);
}
