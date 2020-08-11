#include <stdio.h>

#include "tertium_cpu.h"
#include "tertium_dat.h"
#include "tertium_fns.h"

int
fputs(const char *restrict s, FILE *restrict p)
{
	return c_ioq_put(p, (char *)s);
}
