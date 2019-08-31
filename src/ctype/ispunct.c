#include <ctype.h>

#include "tertium_cpu.h"
#include "tertium_std.h"

int
ispunct(int c)
{
	return !isalnum(c) && isgraph(c);
}
