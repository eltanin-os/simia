#include <string.h>

#include "tertium_cpu.h"
#include "tertium_fns.h"

char *
strchr(const char *s, int c)
{
	return c_str_chr((char *)s, C_USIZEMAX, c);
}
