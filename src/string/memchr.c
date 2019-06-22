#include <string.h>

#include "tertium_cpu.h"
#include "tertium_std.h"

void *
memchr(const void *s, int c, size_t n)
{
	return c_mem_chr((void *)s, n, c);
}
