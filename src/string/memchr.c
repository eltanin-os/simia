#include <tertium/cpu.h>
#include <tertium/std.h>

#include <string.h>

void *
memchr(const void *s, int c, size_t n)
{
	return c_mem_chr((void *)s, n, c);
}
