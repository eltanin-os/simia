#include <stdio.h>

#include "tertium_cpu.h"
#include "tertium_std.h"
#include "__int__.h"

#define FILESIZ (sizeof(CArr) + sizeof(CIoq) + C_BIOSIZ)
#define GETOP(a) \
(((a) & C_ORDWR) ? nil : ((a) & C_OWRITE) ? c_sys_write : c_sys_read)

FILE *
fdopen(int fd, const char *restrict m)
{
	uint  mode;
	void *p, *sp;

	mode = __stdio_filestrmode(m);

	if (mode == (uint)-1) {
		errno = C_EINVAL;
		return nil;
	}

	if (!(sp = c_std_alloc(FILESIZ, sizeof(uchar)))) {
		c_sys_close(fd);
		return nil;
	}

	p = (uchar *)sp + sizeof(CIoq);
	c_ioq_init(sp, fd, p, GETOP(mode));
	c_arr_init(p, (char *)((uchar *)p + sizeof(CArr)), C_BIOSIZ);

	return sp;
}
