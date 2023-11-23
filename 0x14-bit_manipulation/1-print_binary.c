#include "main.h"

/**
* print_binary - prints binary representation of a number
* @n: number to print in binary
*/

void print_binary(unsigned long int n)
{
	unsigned long int r[32];
	int b = 0, i;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (n > 0)
	{
		r[b] = (n % 2);
		n /= 2;
		b++;
	}
	for (i = b - 1; i >= 0; i--)
	{
		_putchar(r[i] + '0');
	}
}
