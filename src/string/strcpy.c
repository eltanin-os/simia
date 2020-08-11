#include <string.h>

#include "tertium_cpu.h"

char *
strcpy(char *restrict s1, char *restrict s2)
{
	return strncpy(s1, s2, C_USIZEMAX);
}
