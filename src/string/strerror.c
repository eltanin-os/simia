#include <string.h>

#include "tertium_cpu.h"
#include "tertium_std.h"

char *
strerror(int e)
{
	static char emsg[C_ERRSIZ];
	return c_sys_strerror(e, emsg, sizeof(emsg));
}
