#include <stdarg.h>
#include <stdio.h>

#include "tertium_cpu.h"
#include "tertium_std.h"

static int
dummy(CFmt *p)
{
	(void)p;
	return 0;
}

int
vsnprintf(char *restrict buf, size_t n, const char *restrict fmt, va_list ap)
{
	CArr arr;
	CFmt f;

	c_arr_init(&arr, buf, n);
	c_fmt_fdinit(&f, 0, &arr, nil);
	f.farg = nil;
	f.fn = &dummy;

	va_copy(f.args, ap);
	(void)c_fmt_fmt(&f, (char *)fmt);

	return f.nfmt;
}
