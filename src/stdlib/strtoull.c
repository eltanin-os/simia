#include <stdlib.h>

#include "tertium_cpu.h"
#include "tertium_std.h"

uvlong
strtoull(const char *restrict s, char **restrict e, int b)
{
	return (uvlong)c_std_strtovl((char *)s, b, 0, C_UVLONGMAX, e, nil);
}
