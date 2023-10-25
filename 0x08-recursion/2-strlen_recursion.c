#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: the string
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	int n;

	n = 0;

	if (*s == '\0')
	{
		_putchar('\n');
		return (n);
	}

	if (*s)
	{
		n++;
		_strlen_recursion(s + 1);
	}

	return (n);
}
