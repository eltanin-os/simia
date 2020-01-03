#include <string.h>

#include "tertium_cpu.h"
#include "tertium_std.h"

char *
strerror(int e)
{
	static char buf[C_ERRSIZ];

	(void)strerror_r(e, buf, sizeof(buf));
	return buf;
}
