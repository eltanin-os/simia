#include <ctype.h>

#include "tertium_cpu.h"
#include "tertium_std.h"

int
isdigit(int c)
{
	return (uchar)c - '0' < 10; 
}
