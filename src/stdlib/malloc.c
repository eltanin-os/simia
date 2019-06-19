#include <tertium/cpu.h>
#include <tertium/std.h>

#include <stdlib.h>

void *
malloc(size_t n)
{
	return c_std_alloc(n, sizeof(uchar));
}
