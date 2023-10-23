#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: the array of the chessboard
 * Return: none
 */

void print_chessboard(char (*a)[8])
{
	unsigned int i, j;

	for (j = 0; j < 8; j++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
