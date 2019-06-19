#include <tertium/cpu.h>
#include <tertium/std.h>

#include <string.h>

size_t
strnlen(const char *s, size_t n)
{
	return c_str_len((char *)s, n);
}
