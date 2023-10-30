#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to a newly allocated
 * space in memory which contains copy of the string given
 * @str: string given
 * Return: Pointer to a new string which duplicates or NULL
 */

char *_strdup(char *str)
{
	char *dup;
	int l, i;

	l = strlen(str);

	if (str == NULL)
		return (NULL);

	dup = malloc(sizeof(char) * (l + 1));

	if (dup == NULL)
		return (NULL);

	for (i = 0; i < l; i++)
	{
		dup[i] = str[i];
	}

	return (dup);
}
