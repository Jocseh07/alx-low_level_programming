#include "main.h"
#include <string.h>

/**
 * print_rev - prints string in reverse
 * @s: string to print in reverse
 */

void print_rev(char *s)
{
	int l, i;

	l = strlen(s);

	for (i = l - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
