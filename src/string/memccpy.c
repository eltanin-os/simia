#include <string.h>

#include "tertium_cpu.h"
#include "tertium_std.h"

void *
memccpy(void *restrict s1, const void *restrict s2, int c, size_t n)
{
	return c_mem_ccpy(s1, n, (void *)s2, c);
}
