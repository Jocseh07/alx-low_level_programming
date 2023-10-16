#include <stdlib.h>
#include <string.h>

/**
 * _atoi - convert a string to an integer
 * @s: string to be converted
 * Return: converted string
 */

int _atoi(char *s)
{
	int l, i;
	char c;

	l = strlen(s);

	for (i = 0; i < l; i++)
	{
		strcat(c, atoi(s[i]));
	}

	return (c);
}
