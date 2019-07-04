#include <stdio.h>

#include "tertium_cpu.h"
#include "tertium_std.h"

static uchar buf[C_BIOSIZ];
static CArr arr = c_arr_INIT(buf);
static CIoq ioq = c_ioq_INIT(0, &arr, &c_sys_read);
void * stdin = &ioq;
