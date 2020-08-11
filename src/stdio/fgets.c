#include <stdio.h>

#include "tertium_cpu.h"
#include "tertium_dat.h"
#include "tertium_fns.h"

static size
min(size a, size b)
{
	return (a > b ? b : a);
}

static size
getline(ctype_ioq *p, char *b, usize n)
{
	size r;
	char *s, *nl;

	nl = nil;
	while (n && !nl) {
		if ((r = min(c_ioq_feed(p), n)) <= 0)
			return r;

		s = c_ioq_peek(p);
		if ((nl = c_mem_chr(s, r, '\n')))
			r = (nl - s) + 1;

		(void)c_mem_cpy(b, r, s);
		b += r;
		n -= r;
		c_ioq_seek(p, r);
	}
	*b = 0;
	return 1;
}

char *
fgets(char *restrict s, int n, FILE *restrict p)
{
	return (getline(p, s, n - 1) <= 0) ? nil : s;
}
