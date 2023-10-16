#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	int i, l;
	char c[];

	i = strlen(s);

	for (l = i - 1; i >= 0; l--)
	{
		strcat(s[i], c);
	}
}
