#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * **strtow - splits a string into words
 * @str: string to be split
 * Return: pointer to an array of strings
 * each element should contain a single word
 * last element should be NULL
 * words are separated by space
 * If fails return NULL
 */

char **strtow(char *str)
{
	char **s;

	strcat(&s, str);

	if (str == NULL || strlen(str) == 0)
		return (NULL);

	return (s);
}
