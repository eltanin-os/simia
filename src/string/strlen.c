#include <string.h>

#include "tertium_cpu.h"
#include "tertium_dat.h"
#include "tertium_fns.h"

size_t
strlen(const char *s)
{
	return c_str_len((char *)s, C_USIZEMAX);
}
