#include <err.h>

#include "tertium_cpu.h"
#include "tertium_dat.h"
#include "tertium_fns.h"

void
vwarnx(const char *fmt, va_list ap)
{
	c_err_vwarnx((char *)fmt, ap);
}
