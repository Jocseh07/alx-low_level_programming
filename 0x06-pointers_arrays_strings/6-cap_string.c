#include "main.h"
#include <string.h>

/**
 * *cap_string - capitalizes all words of a string
 * @c: string to be capitalized
 * Return: Always 0.
 */

char *cap_string(char *s)
{
	int l, j, i;

	l = strlen(s);

	char sp[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; i < l; i++)
	{
		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32;
		}

		for (j = 0; j < 13; j++)
		{
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
			{
				s[i + 1] -= 32;
			}
		}
	}

	return (s);
}
