#include <stdlib.h>

#include "tertium_cpu.h"
#include "tertium_std.h"

void
qsort(void *v, size_t m, size_t n, int (*f)(const void *, const void *))
{
	c_std_sort(v, m, n, (int (*)(void *, void *))f);
}
