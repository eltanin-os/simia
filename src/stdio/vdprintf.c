#include <stdarg.h>
#include <stdio.h>

#include "tertium_cpu.h"
#include "tertium_std.h"

static ctype_status
put(ctype_fmt *p, char *s, usize n)
{
	return c_std_allrw(c_sys_write, *(int *)p->farg, s, n);
}


int
vdprintf(int fd, const char *restrict fmt, va_list ap)
{
	ctype_fmt f;

	c_fmt_init(&f, (void *)(uintptr)&fd, nil, put);
	va_copy(f.args, ap);
	return c_fmt_fmt(&f, (char *)fmt);
}
