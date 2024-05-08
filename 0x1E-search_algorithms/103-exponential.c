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
	if (value == array[mid])
		return ((int)mid);
	if (value < array[mid])
		return (search(array, mid, value));
	mid++;
	return (search(array + mid, size - mid, value) + mid);
}

/**
 * binary_search - search a value using binary search algorithm
 * @array: array to search
 * @size: size of array
 * @value: value to search
 * Return: the index or -1
 */

int binary_search(int *array, size_t size, int value)
{
	int a;

	a = search(array, size, value);
	if (a >= 0 && array[a] != value)
		return (-1);

	return (a);
}

/**
 * exponential_search - search for a value in sorted array
 * @array: array to search
 * @size: no of elements in array
 * @value: value to search
 * Return: the index or -1
*/

int exponential_search(int *array, size_t size, int value)
{
	size_t a = 0, b = 0;
	int index = 0;

	if (array == NULL || size == 0)
		return (-1);

	for (a = 1; a < size && array[a] <= value; a = a * 2)
		printf("Value checked array[%ld] = [%d]\n", a, array[a]);
	if (a < size)
		b = a;
	else
		b = size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", a / 2, b);
	index = (binary_search(&array[a / 2], (b - (a / 2) + 1), value));
	if (index != -1)
		index += (int) (a / 2);
	return (index);
}
