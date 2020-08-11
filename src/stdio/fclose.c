#include <stdarg.h>
#include <stdio.h>

#include "tertium_cpu.h"
#include "tertium_dat.h"
#include "tertium_fns.h"

int
fclose(FILE *p)
{
	int r;

	r = (c_ioq_flush(p) | c_sys_close(p->fd)) ? EOF : 0;
	c_ioq_free(p);
	return r;
}
