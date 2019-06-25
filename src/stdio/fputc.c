#include <stdio.h>

#include "tertium_cpu.h"
#include "tertium_std.h"

int
fputc(int c, FILE *p)
{
	char ch;
	ch = (char)c;
	return c_ioq_nput(p, &ch, 1);
}
