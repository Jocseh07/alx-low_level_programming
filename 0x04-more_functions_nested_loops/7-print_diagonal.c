#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: is the no of times the char \ should be printed
 * Return: 0
 */

void print_diagonal(int n)
{
	int a, b;

	for (a = 0; a < n; a++)
	{
		for (b = 0; b < n; b++)
		{
			if (a == b)
			{
				_putchar('\\');
			} else if (b < i)
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
