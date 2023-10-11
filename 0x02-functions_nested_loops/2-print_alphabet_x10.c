#include "main.h"

/**
 * print_alphabet_x10 - print alphabet in lowercase 10 times
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int a;
	char c;

	for (a = 0; a < 10; a++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
