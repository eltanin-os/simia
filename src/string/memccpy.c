#include <tertium/cpu.h>
#include <tertium/std.h>

#include <string.h>

void *
memccpy(void *restrict s1, const void *restrict s2, int c, size_t n)
{
	return c_mem_ccpy(s1, n, (void *)s2, c);
}
