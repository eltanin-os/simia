#include <string.h>

#include "tertium_cpu.h"
#include "tertium_std.h"

char *
strdup(const char *s)
{
	return strndup(s, C_USIZEMAX);
}
