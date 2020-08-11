#include <ctype.h>

#include "tertium_cpu.h"

int
isblank(int c)
{
	return (uchar)c == ' ' || (uchar)c == '\t';
}
