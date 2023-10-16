#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of a string
 * @str: string to be printed
 */

void puts_half(char *str)
{
	int i, l;

	l = strlen(str);

	if (l % 2 == 1)
	{
		for (i = ((l) / 2); i < l; i++)
		{
			_putchar(str[i]);
		}
	} else if (l % 2 == 0)
	{
		for (i = l / 2; i < l; i++)
		{
			_putchar(str[i]);
		}
	}

	_putchar('\n');
}
