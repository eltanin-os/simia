#include <string.h>

#include "tertium_cpu.h"
#include "tertium_fns.h"

void *
memmem(const void *h0, size_t k, const void *n0, size_t l)
{
	return c_mem_mem((void *)h0, k, (void *)n0, l);
}
