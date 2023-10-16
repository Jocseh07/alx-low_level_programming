#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	int i, l;
	char c;

	l = strlen(s) - 1;

	for (i = 0; i < i / 2; i++)
	{
		c = s[i];
		s[i] = s[l - i];
		s[l - i] = c;
	}
}
