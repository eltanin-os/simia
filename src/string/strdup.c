#include <tertium/cpu.h>
#include <tertium/std.h>

#include <string.h>

char *
strdup(const char *s)
{
	return strndup(s, C_USIZEMAX);
}
