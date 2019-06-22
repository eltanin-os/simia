#include <stdlib.h>

#include "tertium_cpu.h"
#include "tertium_std.h"

void
free(void *p)
{
	(void)c_std_free_(p);
}
