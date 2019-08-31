#include <stdio.h>

#include "tertium_cpu.h"
#include "tertium_std.h"

int
fileno(FILE *p)
{
	return ((CIoq *)p)->fd;
}
