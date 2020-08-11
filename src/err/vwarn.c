#include <err.h>

#include "tertium_cpu.h"
#include "tertium_dat.h"
#include "tertium_fns.h"

void
vwarn(const char *fmt, va_list ap)
{
	c_err_vwarn((char *)fmt, ap);
}
