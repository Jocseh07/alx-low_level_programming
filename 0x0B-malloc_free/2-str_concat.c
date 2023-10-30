#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * *str_concat - concatenates 2 strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to a newly allocated space in memory
 * with contents  of s1 followed bys2 and null
 * If NULL treat it as empty string
 */

char *str_concat(char *s1, char *s2)
{
	char *p;
	int l1, l2;

	l1 = strlen(s1);
	l2 = strlen(s2);

	if (s1 == NULL && s2 == NULL)
		return (NULL);

	p = malloc(sizeof(char) * (l1 + l2 + 1));

	p = strcat(s1, s2);
	if (p == NULL)
		return (NULL);

	return (p);
}
