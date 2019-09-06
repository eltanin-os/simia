#include <stdio.h>

#include "tertium_cpu.h"
#include "tertium_std.h"

int
getchar(void)
{
	char buf;

	return ((c_ioq_get(ioq0, &buf, 1) <= 0) ? EOF : buf);
}
