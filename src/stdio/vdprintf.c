#include <stdarg.h>
#include <stdio.h>

#include "tertium_cpu.h"
#include "tertium_std.h"

int
vdprintf(int fd, const char *restrict fmt, va_list ap)
{
	ctype_arr arr;
	ctype_fmt f;

	c_arr_init(&arr, nil, 0);
	c_fmt_fdinit(&f, fd, &arr, c_sys_write);

	va_copy(f.args, ap);
	(void)c_fmt_fmt(&f, (char *)fmt);

	return f.nfmt;
}
