#include <tertium/cpu.h>
#include <tertium/std.h>

#include <string.h>

char *
stpcpy(char *restrict s1, const char *restrict s2)
{
	return stpncpy(s1, s2, C_USIZEMAX);
}
