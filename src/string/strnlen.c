#include <string.h>

#include "tertium_cpu.h"
#include "tertium_std.h"

size_t
strnlen(const char *s, size_t n)
{
	return c_str_len((char *)s, n);
}
