#include <tertium/cpu.h>
#include <tertium/std.h>

#include <stdlib.h>

void
exit(int r)
{
	c_std_exit(r);
	while(1);
}
