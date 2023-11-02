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
	int l1, l2;
	char *s3;

	l1 = strlen(s1);
	l2 = strlen(s2);
	l3 = l1 + l2 + 1;

	s3 = malloc(sizeof(char) * l3);
	strcat(s3, s1);
	strncat(s3, s2, n);

	if (s3 = NULL)
		return (NULL);

	return (s3);
}
