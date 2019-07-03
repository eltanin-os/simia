#include <stdio.h>

#include "tertium_cpu.h"
#include "tertium_std.h"

#define ISFLAG(a, b) \
(((a) & (b)) == (b))

#define GETOP(a) \
(ISFLAG(a, C_ORDWR) ? nil : ISFLAG(a, C_OWRITE) ? c_sys_write : c_sys_read)

static uint
strtomode(const char *s)
{
	uint m;

	if (!s)
		return 0;

	m = 0;

	switch (s[0]) {
	case 'r':
		m |= C_OREAD;
		break;
	case 'w':
		m |= C_OCREATE|C_OWRITE;
		break;
	case 'a':
		m |= C_OAPPEND|C_OCREATE|C_OWRITE;
		break;
	default:
		return 0;
	}

	switch (s[1]) {
	case 'b':
		break;
	case '+':
		m |= C_ORDWR;
		break;
	case '\0':
		return m;
	default:
		return 0;
	}

	switch (s[2]) {
	case 'b':
		return (s[3] == 0) ? m : 0;
	case '\0':
		return m;
	default:
		return 0;
	}
}

FILE *
fopen(const char *restrict s, const char *restrict m)
{
	CArr *ap;
	int   fd;
	uint  mode;
	void *fp, *p;

	mode = strtomode(m);

	if (!s || !mode) {
		errno = C_EINVAL;
		return nil;
	}

	if ((fd = c_sys_open((char *)s, mode, C_DEFFILEMODE)) < 0)
		return nil;

	ap = nil;
	fp = nil;
	p  = nil;

	if (!(ap = c_std_alloc(1, sizeof(CArr))))
		goto err;

	if (!(fp = c_std_alloc(1, sizeof(CIoq))))
		goto err;

	if (!(p = c_std_alloc(C_BIOSIZ, sizeof(uchar))))
		goto err;

	c_arr_init(ap, p, C_BIOSIZ);
	c_ioq_init(fp, fd, ap, GETOP(mode));

	return fp;
err:
	c_sys_close(fd);

	if (!ap)
		c_std_free(ap);
	if (!fp)
		c_std_free(fp);
	if (!p)
		c_std_free(p);

	return nil;
}
