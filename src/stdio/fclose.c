#include <stdarg.h>
#include <stdio.h>

#include "tertium_cpu.h"
#include "tertium_std.h"

int
fclose(FILE *fp)
{
	ctype_ioq *p;
	int r;

	p = fp;
	r = c_ioq_flush(p) | c_sys_close(p->fd);
	c_std_free(p->mb);
	c_std_free(p);
	return r;
}
