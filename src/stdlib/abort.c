#include <stdlib.h>

#include "tertium_cpu.h"
#include "tertium_std.h"

void
abort(void)
{
	c_std_abort();
	for (;;) ;
}
