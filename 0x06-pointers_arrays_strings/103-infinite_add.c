#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * *infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer that the function will use to store result
 * @size_r: buffer size
 * Return: ponter to the result
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int l1, l2;

	l1 = strlen(n1);
	l2 = strlen(n2);

	if (l1 >= size_r || l2 >= size_r)
	{
		return (0);
	}
	*r = atoi(n1) + atoi(n2);

	return (r);
}
