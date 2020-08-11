#include <stdlib.h>

#include "tertium_cpu.h"
#include "tertium_fns.h"

void
abort(void)
{
	c_std_abort();
	for (;;) ;
}
