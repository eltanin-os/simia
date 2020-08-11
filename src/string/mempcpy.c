#include <string.h>

#include "tertium_cpu.h"
#include "tertium_fns.h"

void *
mempcpy(void *s1, const void *s2, size_t n)
{
	return (char *)c_mem_cpy(s1, n, (char *)s2) + n;
}
