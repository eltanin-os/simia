#include <tertium/cpu.h>
#include <tertium/std.h>

#include <string.h>

char *
strstr(const char *h, const char *n)
{
	return c_str_str((char *)h, C_USIZEMAX, (char *)n);
}
