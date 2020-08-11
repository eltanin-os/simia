#include <stdio.h>

#include "tertium_cpu.h"
#include "tertium_dat.h"
#include "tertium_fns.h"

int
fileno(FILE *p)
{
	return c_ioq_fileno(p);
}
