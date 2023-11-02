#include "main.h"
#include <stdlib.h>

/**
 * *array_range - creates an array of integers
 * @min: range start
 * @max: range max
 *
 * Return: pointer to newly created array
 */

int *array_range(int min, int max)
{
	int a, b;
	int *array;

	if (min > max)
		return (NULL);

	a = max - min + 1;
	array = malloc(sizeof(int) * a);

	if (array == NULL)
		return (NULL);

	for (b = 0; b < a; b++)
	{
		array[b] = min;
		min++;
	}

	return (array);

}
