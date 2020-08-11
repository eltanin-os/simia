#include <ctype.h>

#include "tertium_cpu.h"

int
isspace(int c)
{
	return (uchar)c == ' ' || (uchar)c - '\t' < 5;
}
