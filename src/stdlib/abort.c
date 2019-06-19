#include <tertium/cpu.h>
#include <tertium/std.h>

#include <stdlib.h>

void
abort(void)
{
	c_sys_abort();
	while(1);
}
