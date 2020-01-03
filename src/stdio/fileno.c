#include <stdio.h>

#include "tertium_cpu.h"
#include "tertium_std.h"

int
fileno(FILE *fp)
{
	return c_ioq_fd((ctype_ioq *)fp);
}
