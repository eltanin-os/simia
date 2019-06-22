#include <string.h>

#include "tertium_cpu.h"
#include "tertium_std.h"

char *
index(const char *s, int c)
{
	return strchr(s, c);
}
