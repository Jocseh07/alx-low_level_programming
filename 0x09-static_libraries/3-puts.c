#include "main.h"

/**
 * main - prints a string
 * @str: string to print
 */
void main(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
