#include <stdlib.h>

#include "tertium_cpu.h"
#include "tertium_std.h"

vlong
atoll(const char *s)
{
	return c_std_strtovl((char *)s, 10, C_VLONGMIN, C_VLONGMAX, nil, nil);
}
