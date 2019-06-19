#include <tertium/cpu.h>
#include <tertium/std.h>

#include <string.h>

char *
strchr(const char *s, int c)
{
	return c_str_chr((char *)s, C_USIZEMAX, c);
}
