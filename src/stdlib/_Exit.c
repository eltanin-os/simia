#include <stdlib.h>

#include "tertium_cpu.h"
#include "tertium_std.h"

void
_Exit(int r)
{
	c_std_exit(r);
	while(1);
}
