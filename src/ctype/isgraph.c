#include <ctype.h>

#include "tertium_cpu.h"

int
isgraph(int c)
{
	return (uchar)c - '!' < 94;
}
