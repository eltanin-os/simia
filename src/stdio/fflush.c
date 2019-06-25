#include <stdio.h>

#include "tertium_cpu.h"
#include "tertium_std.h"

int
fflush(FILE *p)
{
	return c_ioq_flush(p);
}
