#include <string.h>

#include "tertium_cpu.h"
#include "tertium_fns.h"

char *
index(const char *s, int c)
{
	return strchr(s, c);
}
