#include <stdio.h>

#include "tertium_cpu.h"
#include "tertium_std.h"

int
vprintf(const char *restrict s, va_list ap)
{
	return vfprintf(stdout, s, ap);
}
