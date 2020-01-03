#include <string.h>

#include "tertium_cpu.h"
#include "tertium_std.h"

char *
strndup(const char *s, size_t len)
{
	return c_str_dup((char *)s, len);
}
