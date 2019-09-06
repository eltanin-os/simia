#include <stdlib.h>

#include "tertium_cpu.h"
#include "tertium_std.h"

void
exit(int r)
{
	c_std_exit(r);
	for (;;) ;
}
