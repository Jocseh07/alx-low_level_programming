#include <stdio.h>

/**
 * *malloc_checked - allocates memory using malloc
 * @b: integer to be allocated memory
 *
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	int *a;

	if (malloc(sizeof(int)))
	{
		a = malloc(sizeof(int));
	}
	else
	{
		exit(98);
	}
}
