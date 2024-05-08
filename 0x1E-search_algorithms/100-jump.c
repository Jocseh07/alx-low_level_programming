#include "search_algos.h"

/**
 * jump_search - search for a value using jump search algorithm
 * @array: pointer to first element of array
 * @size: no of elements in array
 * @value: value to search
 * Return: index or -1
 */

int jump_search(int *array, size_t size, int value)
{
	size_t index = 0, step = 0, prev = 0, a = 0;

	if (array == NULL || size == 0)
		return (-1);
	step = sqrt(size);

	while (index < size && array[ (int) index] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", index, array[(int)index]);
		if (array[(int)index] == value)
			return (index);
		a++;
		prev = index;
		index = step * a;
	}
	printf("Value found between index [%lu] and [%lu]", prev, index);
	for (; prev <= index && prev < size; prev++)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		if (array[(int)prev] == value)
			return ((int) prev);
	}
	return (-1);
}
