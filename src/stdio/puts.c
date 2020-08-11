#include <stdio.h>

#include "tertium_cpu.h"
#include "tertium_dat.h"
#include "tertium_fns.h"

int
puts(const char *s)
{
	return c_ioq_fmt(ioq1, "%s\n", (char *)s);
}
