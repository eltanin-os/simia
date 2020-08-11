#include <stdio.h>

#include "tertium_cpu.h"
#include "tertium_dat.h"
#include "tertium_fns.h"
#include "__int__.h"

FILE *
fopen(const char *restrict s, const char *restrict m)
{
	int fd;
	uint mode;

	mode = __stdio_filestrmode(m);

	if (!s || mode == (uint)-1) {
		errno = C_EINVAL;
		return nil;
	}

	if ((fd = c_sys_open((char *)s, mode, C_DEFFILEMODE)) < 0)
		return nil;

	return fdopen(fd, m);
}
