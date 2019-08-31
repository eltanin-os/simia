#include <stdio.h>

#include "tertium_cpu.h"
#include "tertium_std.h"
#include "__int__.h"

uint
__stdio_filestrmode(const char *s)
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
