#include <ctype.h>

#include "tertium_cpu.h"

int
isprint(int c)
{
	return (uchar)c - ' ' < 95;
}
