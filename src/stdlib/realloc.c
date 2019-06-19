#include <tertium/cpu.h>
#include <tertium/std.h>

#include <stdlib.h>

void *
realloc(void *p, size_t n)
{
	return c_std_realloc(p, n, sizeof(uchar));
}
