#include <stdio.h>

#include "tertium_cpu.h"
#include "tertium_std.h"

int
puts(const char *s)
{
	return c_ioq_fmt(ioq1, "%s\n", (char *)s);
}
