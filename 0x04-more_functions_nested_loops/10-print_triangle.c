#include "main.h"

/**
 * print_triangle - prints a triangle followed by a new line
 * @size: is the size of the triangle
 * Return: 0
 */

void print_triangle(int size)
{
	int a, b;

	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		for (a = size; a > 0; --a)
		{
			for (b = 1; b <= size; b++)
			{
				if (b < a)
				{
					_putchar(' ');
				} else if (b >= a)
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
}
