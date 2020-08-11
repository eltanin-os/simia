#include <stdio.h>

#include "tertium_cpu.h"
#include "tertium_dat.h"
#include "tertium_fns.h"

int
fputc(int c, FILE *p)
{
	return c_ioq_nput(p, (char *)&c, 1);
}
