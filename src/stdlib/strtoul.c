#include <stdlib.h>

#include "tertium_cpu.h"
#include "tertium_std.h"

ulong
strtoul(const char *restrict s, char **restrict e, int b)
{
	return (ulong)c_std_strtovl((char *)s, b, 0, C_ULONGMAX, e, nil);
}
