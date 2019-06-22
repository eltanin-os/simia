#include <stdio.h>

#include "tertium_cpu.h"
#include "tertium_std.h"

int
puts(const char *s)
{
	int r;
	r = c_ioq_put(ioq1, (char *)s) + c_ioq_put(ioq1, "\n");
	return r;
}
