#include <stdio.h>

#include "tertium_cpu.h"
#include "tertium_std.h"
#include "__int__.h"

#define FILESIZ (sizeof(ctype_arr) + sizeof(ctype_ioq) + C_BIOSIZ)
#define GETOP(a) \
(((a) & C_ORDWR) ? nil : ((a) & C_OWRITE) ? c_sys_write : c_sys_read)

FILE *
fdopen(int fd, const char *restrict m)
{
	ctype_arr *a;
	ctype_ioq *fp;
	uint mode;
	char *buf;
	void *p;

	mode = __stdio_filestrmode(m);

	if (mode == (uint)-1) {
		errno = C_EINVAL;
		return nil;
	}

	if (!(p = c_std_alloc(FILESIZ, sizeof(uchar)))) {
		c_sys_close(fd);
		return nil;
	}

	fp = p;
	a = (void *)((uchar *)p + sizeof(ctype_ioq));
	buf = (void *)((uchar *)a + sizeof(ctype_arr));

	c_ioq_init(fp, fd, a, GETOP(mode));
	c_arr_init(a, buf, C_BIOSIZ);

	return fp;
}
