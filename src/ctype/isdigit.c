#include <ctype.h>

#include "tertium_cpu.h"

int
isdigit(int c)
{
	return (uchar)c - '0' < 10;
}
