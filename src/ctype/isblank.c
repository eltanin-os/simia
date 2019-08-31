#include <ctype.h>

#include "tertium_cpu.h"
#include "tertium_std.h"

int
isblank(int c)
{
	return (uchar)c == ' ' || (uchar)c == '\t';
}
