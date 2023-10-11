#include <stdio.h>

/**
 * main - print the first 50 fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
	unsigned long int i, j, k, l;
	
	i = 2;
	j = 1;

	printf("%lu", j);
	l = j + i;
	j = i;
	i = l;
	for (k = 0; k < 97; k++)
	{
		printf(", %lu", j);
		l = j + i;
		j = i;
		i = l;
	}
	printf("\n");

	return (0);
}
