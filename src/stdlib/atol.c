#include <stdlib.h>

#include "tertium_cpu.h"
#include "tertium_std.h"

long
atol(const char *s)
{
	return c_std_strtovl((char *)s, 10, C_LONGMIN, C_LONGMAX, nil, nil);
}
