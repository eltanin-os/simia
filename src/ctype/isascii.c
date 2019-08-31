#include <ctype.h>

#include "tertium_cpu.h"
#include "tertium_std.h"

int
isascii(int c)
{
	return (uint)c < 128;
}
