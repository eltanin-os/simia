#include <ctype.h>

#include "tertium_cpu.h"

int
isalpha(int c)
{
	return (uchar)c - 'a' < 52;
}
