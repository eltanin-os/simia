#include <tertium/cpu.h>
#include <tertium/std.h>

#include <string.h>

void
bcopy(const void *s1, void *s2, size_t n)
{
	(void)c_mem_cpy(s2, n, (void *)s1);
}
