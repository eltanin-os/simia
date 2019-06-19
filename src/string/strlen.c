#include <tertium/cpu.h>
#include <tertium/std.h>

#include <string.h>

size_t
strlen(const char *s)
{
	return c_str_len((char *)s, C_USIZEMAX);
}
