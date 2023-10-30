#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars
 * and initializes it with specific char
 * @size: size of char
 * @c: char
 * Return: pointer to array or NULL
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (NULL);

	*c = malloc(size);
	return (*c);
}
