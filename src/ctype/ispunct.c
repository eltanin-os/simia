#include <ctype.h>

int
ispunct(int c)
{
	return !isalnum(c) && isgraph(c);
}
