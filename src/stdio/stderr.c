#include <stdio.h>

#include "tertium_cpu.h"
#include "tertium_std.h"

static uchar buf[C_ERRSIZ];
static ctype_ioq ioq = c_ioq_INIT(2, buf, &c_sys_write);
void *stderr = &ioq;
