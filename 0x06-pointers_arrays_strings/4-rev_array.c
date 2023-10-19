#include "main.h"

/**
 * reverse_array - print the reverse of an array
 * @a: the array
 * @n: the number of elements to swap
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i, r, b;

	b = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		r = a[i];
		a[i] = a[b];
		a[b--] = r;
	}
}
