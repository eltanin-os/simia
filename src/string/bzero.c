#include <string.h>

#include "tertium_cpu.h"
#include "tertium_fns.h"

void
bzero(void *s, size_t n)
{
	(void)c_mem_set(s, n, 0);
}
