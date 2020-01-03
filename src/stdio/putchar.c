#include <stdio.h>

#include "tertium_cpu.h"
#include "tertium_std.h"

int
putchar(int c)
{
	return fputc(c, stdout);
}
