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
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				if (b != size)
				{
					_putchar(' ');
				} else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
}
