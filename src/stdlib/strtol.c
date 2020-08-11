#include <stdlib.h>

#include "tertium_cpu.h"
#include "tertium_fns.h"

long
strtol(const char *restrict s, char **restrict e, int b)
{
	return c_std_strtovl((char *)s, b, C_LONGMIN, C_LONGMAX, e, nil);
}
