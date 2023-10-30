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
	char *p;
	unsigned int i;

	i = 0;
	if (size == 0)
		return(NULL);

	p = malloc(sizeof(char) * size);

	if(p == NULL)
		return (0);

	for (i = 0; i < size; i++)
	{
		*(p + i) = c;
		i++;
	}

	*(p + i) = '\0';

	return (p);
}
