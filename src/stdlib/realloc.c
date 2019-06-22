#include <stdlib.h>

#include "tertium_cpu.h"
#include "tertium_std.h"

void *
realloc(void *p, size_t n)
{
	return c_std_realloc(p, n, sizeof(uchar));
}
