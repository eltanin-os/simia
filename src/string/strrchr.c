#include <string.h>

#include "tertium_cpu.h"
#include "tertium_dat.h"
#include "tertium_fns.h"

char *
strrchr(const char *s, int c)
{
	return c_str_rchr((char *)s, C_USIZEMAX, c);
}
