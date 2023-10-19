#include "main.h"
#include <ctype.h>
#include <string.h>

/**
 * *string_toupper - changes all lowerclass letters of a string to upperclass
 * @c: the character to be changed
 * Return: Always 0.
 */

char *string_toupper(char *c)
{
	int i, l;

	l = strlen(c);

	for (i = 0; i < l; i++)
	{
		if (c[i] >= 'a' && c[i] <= 'z')
		{
			c[i] -= 32;
		}
	}

	return (c);
}
