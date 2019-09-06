#include <stdio.h>

#include "tertium_cpu.h"
#include "tertium_std.h"

static uchar buf[C_BIOSIZ];
static ctype_arr arr = c_arr_INIT(buf);
static ctype_ioq ioq = c_ioq_INIT(0, &arr, &c_sys_read);
void *stdin = &ioq;
