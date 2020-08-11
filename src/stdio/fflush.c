#include <stdio.h>

#include "tertium_cpu.h"
#include "tertium_dat.h"
#include "tertium_fns.h"

int
fflush(FILE *p)
{
	return c_ioq_flush(p);
}
