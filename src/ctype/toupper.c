#include <ctype.h>

#include "tertium_cpu.h"

int
toupper(int c)
{
	return islower(c) ? (uchar)c - ('a' - 'A') : c;
}
