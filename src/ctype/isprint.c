#include <ctype.h>

#include "tertium_cpu.h"
#include "tertium_std.h"

int
isprint(int c)
{
	return (uchar)c - ' ' < 95;
}
