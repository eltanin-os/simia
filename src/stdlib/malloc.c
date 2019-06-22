#include <stdlib.h>

#include "tertium_cpu.h"
#include "tertium_std.h"

void *
malloc(size_t n)
{
	return c_std_alloc(n, sizeof(uchar));
}
