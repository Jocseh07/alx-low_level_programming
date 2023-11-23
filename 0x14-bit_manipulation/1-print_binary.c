#include "main.h"

/**
* print_binary - prints binary representation of a number
* @n: number to print in binary
*/

void print_binary(unsigned long int n)
{
	unsigned long int a;
	int s = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (a = n; (a >>= 1) > 0; s++)
		;

	for (; s >= 0; s--)
	{
		if ((n >> s) & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
