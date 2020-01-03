#include <stdio.h>

#include "tertium_cpu.h"
#include "tertium_std.h"
#include "__int__.h"

#define GETOP(a) \
(((a) & C_ORDWR) ? nil : ((a) & C_OWRITE) ? c_sys_write : c_sys_read)

FILE *
fdopen(int fd, const char *restrict m)
{
	uint mode;

	mode = __stdio_filestrmode(m);

	if (mode == (uint)-1) {
		errno = C_EINVAL;
		return nil;
	}

	return c_ioq_alloc(fd, C_BIOSIZ, GETOP(mode));
}
