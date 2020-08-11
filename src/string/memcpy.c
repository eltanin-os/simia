#include <string.h>

#include "tertium_cpu.h"
#include "tertium_fns.h"

void *
memcpy(void *restrict s1, const void *restrict s2, size_t n)
{
	return c_mem_cpy(s1, n, (void *)s2);
}
