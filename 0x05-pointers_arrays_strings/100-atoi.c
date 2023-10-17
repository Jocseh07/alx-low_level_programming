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

	l = 0;
	i = 0;

	l = strlen(s);

	for (i = 0; i < l; i++)
	{
		strcat(c, s[i]);
	}
	return (atoi(c));
}
