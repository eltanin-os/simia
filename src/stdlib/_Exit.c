#include <stdlib.h>

#include "tertium_cpu.h"
#include "tertium_fns.h"

void
_Exit(int r)
{
	c_std_exit(r);
	for (;;) ;
}
