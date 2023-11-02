#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - a function that reallocates a memory block
 * using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size is the size in bytes of the allocated space ptr
 * @new_size new size in byte of the new memory block
 * Return: pointer to the new memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void __attribute__((unused)) *new;
	unsigned int a, b;

	if (new_size == NULL && ptr != NULL)
		free(ptr);

	if (ptr == NULL)
	{
		new = malloc(new_size + old_size);
	}
	if (new_size == old_size)
		return (ptr);

	if (new_size > old_size)
	{
		for (a = 0; a < old_size; a++)
		{
			new[a] = ptr[a];
			free(ptr[a]);
		}
		free(ptr);
		return (new);
	}
}
