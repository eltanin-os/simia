#include <tertium/cpu.h>
#include <tertium/std.h>

#include <string.h>

void
explicit_bzero(void *s, size_t n)
{
	(void)c_mem_set(s, n, 0);
}
