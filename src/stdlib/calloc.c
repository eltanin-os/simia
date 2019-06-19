#include <tertium/cpu.h>
#include <tertium/std.h>

#include <stdlib.h>

void *
calloc(size_t m, size_t n)
{
	return c_std_calloc(m, n);
}
