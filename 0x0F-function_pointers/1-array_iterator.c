#include "function_pointers.h"

/**
 * array_iterator - executtes a function given as a parameter
 * on each element of an array
 * @array: is the array containing the function pointers
 * @size: is the size of the array
 * @action: is the function pointer
 *
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
