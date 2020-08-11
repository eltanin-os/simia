#include <string.h>

#include "tertium_cpu.h"
#include "tertium_fns.h"

char *
rindex(const char *s, int c)
{
	return strrchr(s, c);
}
