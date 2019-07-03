#include <stdarg.h>
#include <stdio.h>

#include "tertium_cpu.h"
#include "tertium_std.h"

int
fclose(FILE *p)
{
	int r;

	(void)c_ioq_flush(p);
	r = c_sys_close(((CIoq *)p)->fd);
	c_std_free(((CIoq *)p)->mb);
	c_std_free(p);

	return r;
}
