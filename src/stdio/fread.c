#include <stdio.h>

#include "tertium_cpu.h"
#include "tertium_dat.h"
#include "tertium_fns.h"

size_t
fread(void *restrict p, size_t m, size_t n, FILE *restrict fp)
{
	size r;

	if (C_OFLW_UM(usize, m, n))
		return 0;

	if ((r = c_ioq_getall(fp, (char *)p, m * n)) < 0)
		return 0;

	return r;
}
