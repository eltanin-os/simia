#include <stdlib.h>

#include "tertium_cpu.h"
#include "tertium_fns.h"

uvlong
strtoull(const char *restrict s, char **restrict e, int b)
{
	return c_std_strtouvl((char *)s, b, 0, C_UVLONGMAX, e, nil);
}
