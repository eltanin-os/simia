#include <stdio.h>

#include "tertium_cpu.h"
#include "tertium_std.h"

int
fileno(FILE *fp)
{
	ctype_ioq *p;

	p = fp;
	return p->fd;
}
