#include <ctype.h>

#include "tertium_cpu.h"
#include "tertium_std.h"

int
toascii(int c)
{
	return c & 0x7F;
}
