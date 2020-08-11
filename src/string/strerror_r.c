#include <string.h>

#include "tertium_cpu.h"
#include "tertium_dat.h"
#include "tertium_fns.h"

int
strerror_r(int e, char *s, size_t n)
{
	(void)c_std_strerror(e, s, n);
	return 0;
}
