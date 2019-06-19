#include <tertium/cpu.h>
#include <tertium/std.h>

#include <string.h>

int
memcmp(const void *s1, const void *s2, size_t n)
{
	return c_mem_cmp((void *)s1, n, (void *)s2);
}
