#include "main.h"
#include <stdlib.h>

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
	unsigned int l1 = 0, l2 = 0, i = 0, j = 0;
	char *s3;

	while (s1[l1])
		l1++;

	while (s2[l2])
		l2++;

	if (n < l2)
		s3 = malloc(sizeof(char) * (l1 + n + 1));
	else
		s3 = malloc(sizeof(char) * (l1 + l2 + 1));

	if (!s3)
		return (NULL);

	while (i < l1)
	{
		s3[i] = s1[i];
		i++;
	}

	if (n < l2)
	{
		while (i < (n + l1))
			s3[i++] = s2[j++];
	} else if (n >= l2)
	{
		while (i < (l1 + l2))
			s3[i++] = s2[j++];
	}

	s3[i] = '\0';

	return (s3);
}
