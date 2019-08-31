#include <ctype.h>

#include "tertium_cpu.h"
#include "tertium_std.h"

int
isalpha(int c)
{
	return (uchar)c - 'a' < 52;
}
