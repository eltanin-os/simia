#include <tertium/cpu.h>
#include <tertium/std.h>

#include <string.h>

char *
rindex(const char *s, int c)
{
	return strrchr(s, c);
}
