#include <string.h>

#include "tertium_cpu.h"

char *
strdup(const char *s)
{
	return strndup(s, C_USIZEMAX);
}
