#include <ctype.h>

#include "tertium_cpu.h"
#include "tertium_std.h"

int
isgraph(int c)
{
	return (uchar)c - '!' < 94;
}
