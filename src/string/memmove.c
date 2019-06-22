#include <string.h>

#include "tertium_cpu.h"
#include "tertium_std.h"

void *
memmove(void *s1, const void *s2, size_t n)
{
	return c_mem_cpy(s1, n, (void *)s2);
}
