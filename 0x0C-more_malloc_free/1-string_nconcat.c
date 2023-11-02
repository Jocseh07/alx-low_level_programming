#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *string_nconcat - contatenates 2 strings
 * @s1: first string
 * @s2: second string
 * @n: n bytes of s2
 *
 * Return: NULL or pointer to newly allocated space
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int l1 = 0, l2 = 0;
	char *s3;

	while (s1[l1])
		l1++;

	while (s2[l2])
		l2++;

	if (n < l2)
		s3 = malloc(sizeof(char) * (l1 + n + 1));
	else
		s3 = malloc(sizeof(char) * (l1 + l2 + 1));

	if (s3 == NULL)
		return (NULL);

	strcat(s3, s1);
	strncat(s3, s2, n);

	return (s3);
}
