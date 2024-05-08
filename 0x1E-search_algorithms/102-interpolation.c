#include "search_algos.h"

/**
 * interpolation_search - search for a value using interpolation search
 * @array: array to search
 * @size: no of items in array
 * @value: value to search for
 * Return: the index or -1
*/

int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, pos = 0;
	double a;

	if (array == NULL || size == 0)
		return (-1);
	while (size)
	{
		a = (((double)(high - low) / (array[high] - array[low])));
		a = a * (value - array[low]);
		a = low + a;
		pos = (size_t) a;
		printf("Value checked array[%ld]", pos);
		if (pos >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
		{
			printf(" = [%d]\n", array[pos]);
		}
		if (array[pos] == value)
			return ((int) pos);
		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}

	return (-1);
}
