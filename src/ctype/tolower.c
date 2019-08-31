#include <ctype.h>

#include "tertium_cpu.h"
#include "tertium_std.h"

int
tolower(int c)
{
	return isupper(c) ? (uchar)c + ('a' - 'A') : c;
}
