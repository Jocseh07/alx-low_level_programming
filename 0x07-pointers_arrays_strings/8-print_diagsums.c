#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sums of two diagonals of a square matrix
 * @a: 2 - dimensional matrix where we print sum of diagonals
 * @size: size of the matrix
 */

void print_diagsums(int *a, int size)
{
	int i, sum, sum1;

	i = 0;
	sum = 0;
	sum1 = 0;

	for (i = 0; i < size; i++)
	{
		sum += a[i][i];
		sum1 += a[size][i];
	}

	printf("%d, %d\n", sum, sum1);
}
