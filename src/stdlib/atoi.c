#include <stdlib.h>

#include "tertium_cpu.h"
#include "tertium_fns.h"

int
atoi(const char *s)
{
	return c_std_strtovl((char *)s, 10, C_INTMIN, C_INTMAX, nil, nil);
}
