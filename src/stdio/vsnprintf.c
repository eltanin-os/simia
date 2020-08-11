#include <stdarg.h>
#include <stdio.h>

#include "tertium_cpu.h"
#include "tertium_dat.h"
#include "tertium_fns.h"

static ctype_status
put(ctype_fmt *p, char *s, usize n)
{
	return c_arr_cat(p->mb, s, n, sizeof(uchar));
}

int
vsnprintf(char *restrict buf, size_t n, const char *restrict fmt, va_list ap)
{
	ctype_arr arr;
	ctype_fmt f;

	c_arr_init(&arr, buf, n);
	c_fmt_init(&f, nil, &arr, put);
	va_copy(f.args, ap);
	return c_fmt_fmt(&f, (char *)fmt);
}
