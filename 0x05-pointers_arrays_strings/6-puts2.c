#include "main.h"
#include <string.h>

/**
 * puts2 - prints every other character of a string
 * starts with first char followed by a new line
 * @str: string to print
 */

void puts2(char *str)
{
	int i, l;

	l = strlen(str);

	for (i = 0; i < l; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}

	_putchar('\n');
}
