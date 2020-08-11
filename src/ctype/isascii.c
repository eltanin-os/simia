#include <ctype.h>

#include "tertium_cpu.h"

int
isascii(int c)
{
	return (uint)c < 128;
}
