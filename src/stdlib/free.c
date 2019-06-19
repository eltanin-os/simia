#include <tertium/cpu.h>
#include <tertium/std.h>

#include <stdlib.h>

void
free(void *p)
{
	(void)c_std_free_(p);
}
