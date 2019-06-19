#include <tertium/cpu.h>
#include <tertium/std.h>

#include <string.h>

void *
memmem(const void *h0, size_t k, const void *n0, size_t l)
{
	return c_mem_mem((void *)h0, k, (void *)n0, l);
}
