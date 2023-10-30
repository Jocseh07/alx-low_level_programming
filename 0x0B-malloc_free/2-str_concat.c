#include "main.h"
#include <string.h>

/**
 * *str_concat - concatenates 2 strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to a newly allocated space in memory
 * with contents  of s1 followed bys2 and null
 * If NULL treat it as empty string
 * Return: Null on failure or string otherwise
 */

char *str_concat(char *s1, char *s2)
{
	char *p;

	if (s1 == NULL && s2 == NULL)
		return (NULL);

	p = strcat(s1, s2);

	if (p == NULL)
		return (NULL);

	return (p);
}
