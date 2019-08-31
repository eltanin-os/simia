#include <ctype.h>

#include "tertium_cpu.h"
#include "tertium_std.h"

int
islower(int c)
{
	return (uchar)c - 'a' < 26;
}
