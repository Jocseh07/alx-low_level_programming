#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: the array to search
 * @size: size of the array
 * @cmp: function pointer
 *
 * Return: returns index of the first element for which
 * cmp funciton does not return 0
 * if no element return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int b;

	if (!array || !cmp)
		return (-1);

	for (b = 0; b < size; b++)
	{
		if (cmp(array[b]) != 0)
			return (b);
	}

	return (-1);
}
