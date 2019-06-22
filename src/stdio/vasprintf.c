#include <stdio.h>

#include "tertium_cpu.h"
#include "tertium_std.h"

static int
growbuffer(CFmt *p)
{
	if (c_dyn_ready(p->mb, c_arr_total(p->mb)+1, sizeof(uchar)) < 0)
		return -1;

	return 0;
}

int
vasprintf(char **restrict s, const char *restrict fmt, va_list ap)
{
	CArr arr;
	CFmt f;
	int  r;

	c_mem_set(&arr, sizeof(arr), 0);
	if (c_dyn_ready(&arr, C_DYNMINALLOC, sizeof(uchar)) < 0) {
		*s = nil;
		return -1;
	}

	c_fmt_fdinit(&f, 0, &arr, nil);
	f.farg = nil;
	f.fn = &growbuffer;

	va_copy(f.args, ap);

	if ((r = c_fmt_fmt(&f, (char *)fmt)) < 0)
		c_std_free(*s);

	return r;
}
