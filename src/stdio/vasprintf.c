#include <stdio.h>

#include "tertium_cpu.h"
#include "tertium_std.h"

int
vasprintf(char **restrict s, const char *restrict fmt, va_list ap)
{
	ctype_arr arr;
	int r;

	(void)c_mem_set(&arr, sizeof(arr), 0);
	r = (int)c_dyn_vfmt(&arr, (char *)fmt, ap);
	*s = c_arr_data(&arr);
	return r;
}
