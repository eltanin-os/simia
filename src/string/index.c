#include <tertium/cpu.h>
#include <tertium/std.h>

#include <string.h>

char *
index(const char *s, int c)
{
	return strchr(s, c);
}
