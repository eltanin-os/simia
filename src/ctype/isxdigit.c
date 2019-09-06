#include <ctype.h>

#include "tertium_cpu.h"
#include "tertium_std.h"

int
isxdigit(int c)
{
	return isdigit(c) || ((uchar)c | 32) - 'a' < 6;
}
