#include <stdio.h>

#include "tertium_cpu.h"
#include "tertium_std.h"

char *
fgets(char *restrict s, int n, FILE *restrict p)
{
	return c_ioq_get(p, (char *)s, n) <= 0 ? nil : s;
}
