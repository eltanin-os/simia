#include <ctype.h>

#include "tertium_cpu.h"

int
islower(int c)
{
	return (uchar)c - 'a' < 26;
}
