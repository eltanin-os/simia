#include <stdio.h>

#include "tertium_cpu.h"
#include "tertium_dat.h"
#include "tertium_fns.h"

int
vfprintf(FILE *restrict fp, const char *restrict s, va_list ap)
{
	return (int)c_ioq_vfmt(fp, (char *)s, ap);
}
