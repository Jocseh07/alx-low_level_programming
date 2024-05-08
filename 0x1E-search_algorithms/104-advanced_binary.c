#include "search_algos.h"

/**
 * search - search a value using binary search algorithm
 * @array: array to search
 * @size: size of array
 * @value: value to search
 * Return: the index or -1
 */

int search(int *array, size_t size, int value)
{
	size_t mid = size / 2;
	size_t a;
	char *s;

	if (array == NULL || size == 0)
		return (-1);
	if (size % 2 == 0)
		mid--;
	printf("Searching in array");
	for (a = 0; a < size; a++)
	{
		if (a == 0)
			s = ":";
		else
			s = ",";
		printf("%s %d", s, array[a]);
	}
	printf("\n");
	if (array[mid - 2] && value == array[mid - 2])
		return ((int)mid - 2);
	if (array[mid - 1] && value == array[mid - 1])
		return ((int)mid - 1);
	if (value == array[mid])
		return ((int)mid);
	if (value < array[mid])
		return (search(array, mid, value));
	mid++;
	return (search(array + mid, size - mid, value) + mid);
}

/**
 * advanced_binary - search a value using binary search algorithm
 * @array: array to search
 * @size: size of array
 * @value: value to search
 * Return: the index or -1
 */

int advanced_binary(int *array, size_t size, int value)
{
	int a;

	a = search(array, size, value);
	if (a >= 0 && array[a] != value)
		return (-1);

	return (a);
}
