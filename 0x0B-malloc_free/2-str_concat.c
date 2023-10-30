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
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	s3 = malloc(sizeof(char) * (len1 + len2 + 1));
	if (s3 == NULL)
		return (NULL);

	s3 = strcat(s1, s2);

	return (s3);
}
