#include <ctype.h>

#include "tertium_cpu.h"
#include "tertium_std.h"

int
isalnum(int c)
{
	return isalpha(c) || isdigit(c);
}
