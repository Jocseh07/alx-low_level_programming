#include <stdio.h>

/**
 * print_array - prints n elements of an array
 * @a: is the array
 * @n: no of elements to be printed
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
		{
			printf("%d, ", a[i]);
		} else
		{
			printf("%d\n", a[i]);
		}
	}
}
