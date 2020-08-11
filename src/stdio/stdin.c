#include <stdio.h>

#include "tertium_cpu.h"
#include "tertium_dat.h"
#include "tertium_fns.h"

static uchar buf[C_BIOSIZ];
static ctype_ioq ioq = c_ioq_INIT(0, buf, &c_sys_read);
void *stdin = &ioq;
