#include <stdio.h>

#include "tertium_cpu.h"
#include "tertium_std.h"

int
fputs(const char *restrict s, FILE *restrict fp)
{
	return c_ioq_put(fp, (char *)s);
}
