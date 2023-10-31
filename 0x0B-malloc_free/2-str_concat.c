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
	char *s3;
	unsigned int l1 = 0, l2 = 0;

	while (s1[l1])
		l1++;
	while (s2[l2])
		l2++;

	s3 = malloc((sizeof(char) * (l1 + l2)) + 1);
	if (s3 == NULL)
		return (NULL);

	if (s1)
		strcat(s3, s1);

	if (s2)
		strcat(s3, s2);

	return (s3);
}
