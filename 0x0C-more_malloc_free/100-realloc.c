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
	char *new;
	char *old;
	unsigned int a;

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	if (!ptr)
	{
		return(malloc(new_size));
	}

	new = malloc(new_size);

	if (!new)
	{
		return (NULL);
	}

	old = ptr;
	if (new_size < old_size)
	{
		for (a = 0; a < new_size; a++)
			new[a] = old[a];
	}

	if (new_size > old_size)
	{
		for (a = 0; a < old_size; a++)
			new[a] = old[a];
	}

	free(ptr);
	return (new);
}
