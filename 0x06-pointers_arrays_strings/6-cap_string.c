#include "main.h"
#include <string.h>

/**
 * *cap_string - capitalizes all words of a string
 * @c: string to be capitalized
 * Return: Always 0.
 */

char *cap_string(char *c)
{
	int l, i;

	l = strlen(c);

	for (i = 0; i < l; i++)
	{
		if (c[i] == ' ' || s[i] == '\t' || s[i] == '\n'
			|| s[i] == ',' || s[i] == ';' || s[i] == '.'
			|| s[i] == '.' || s[i] == '!' || s[i] == '?'
			|| s[i] == '"' || s[i] == '(' || s[i] == ')'
			|| s[i] == '{' || s[i] == '}')
		{
			if (s[i + 1] >= 97 && s[i + 1] <= 122)
			{
				s[i + 1] -= 32;
			}
		}
		i++;
	}
	return (s);
}
