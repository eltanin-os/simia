#include <tertium/cpu.h>
#include <tertium/std.h>

#include <string.h>

void *
memrchr(const void *s, int c, size_t n)
{
	return c_mem_rchr((void *)s, n, c);
}
