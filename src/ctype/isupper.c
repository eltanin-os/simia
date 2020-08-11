#include <ctype.h>

#include "tertium_cpu.h"

int
isupper(int c)
{
	return (uchar)c - 'A' < 26;
}
