#include <string.h>

#include "tertium_cpu.h"
#include "tertium_std.h"

int
strerror_r(int e, char *s, size_t n)
{
	(void)c_sys_strerror(e, s, n);
	return 0;
}
