#include <stdio.h>

#include "tertium_cpu.h"
#include "tertium_std.h"

int
putchar(int c)
{
	char ch;

	ch = (char)c;
	return c_ioq_nput(ioq1, &ch, 1);
}
