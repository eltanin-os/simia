#include <ctype.h>

#include "tertium_cpu.h"
#include "tertium_std.h"

int
isupper(int c)
{
	return (uchar)c - 'A' < 26;
}
