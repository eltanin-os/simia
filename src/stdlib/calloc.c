#include <stdlib.h>

#include "tertium_cpu.h"
#include "tertium_fns.h"

void *
calloc(size_t m, size_t n)
{
	return c_std_calloc(m, n);
}
