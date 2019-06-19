#include <tertium/cpu.h>
#include <tertium/std.h>

#include <string.h>

char *
strndup(const char *s, size_t len)
{
	usize n;
	char *p;

	n = c_str_len((char *)s, len);

	if (!(p = c_std_alloc(n + 1, sizeof(uchar))))
		return nil;

	c_mem_cpy(p, n, (char *)s);
	p[n] = 0;

	return p;
}
