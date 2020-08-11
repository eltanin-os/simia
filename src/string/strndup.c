#include <string.h>

#include "tertium_cpu.h"
#include "tertium_dat.h"
#include "tertium_fns.h"

char *
strndup(const char *s, size_t len)
{
	return c_str_dup((char *)s, len);
}
