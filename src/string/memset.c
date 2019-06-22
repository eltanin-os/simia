#include <string.h>

#include "tertium_cpu.h"
#include "tertium_std.h"

void *
memset(void *s, int c, size_t n)
{
	return c_mem_set(s, n, c);
}
