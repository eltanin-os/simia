#include <tertium/cpu.h>
#include <tertium/std.h>

#include <string.h>

char *
strrchr(const char *s, int c)
{
	return c_str_rchr((char *)s, C_USIZEMAX, c);
}
