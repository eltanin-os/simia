#include <tertium/cpu.h>
#include <tertium/std.h>

#include <string.h>

int
strerror_r(int e, char *s, size_t n)
{
	(void)c_sys_strerror(e, s, n);
	return 0;
}
