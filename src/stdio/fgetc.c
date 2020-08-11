#include <stdio.h>

#include "tertium_cpu.h"
#include "tertium_dat.h"
#include "tertium_fns.h"

int
fgetc(FILE *p)
{
	char buf;

	return ((c_ioq_getall(p, &buf, 1) <= 0) ? EOF : buf);
}
