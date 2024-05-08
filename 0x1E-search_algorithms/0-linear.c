#include "search_algos.h"

/**
 * linear_search - Search for a value in an array
 * @array: array to search
 * @size: size of array
 * @value: value to search
 * Return: index of value or -1 if failed
*/

int linear_search(int *array, size_t size, int value)
{
	size_t a = 0;

	if (array == NULL)
		return (-1);
	for (a = 0; a < size; a++)
	{
		printf("Value checked array[%lu] = [%d]\n", a, array[a]);
		if (value == array[a])
			return (a);
	}
	return (-1);
}
