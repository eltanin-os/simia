#include <string.h>

#include "tertium_cpu.h"
#include "tertium_fns.h"

void *
memrchr(const void *s, int c, size_t n)
{
	return c_mem_rchr((void *)s, n, c);
}
