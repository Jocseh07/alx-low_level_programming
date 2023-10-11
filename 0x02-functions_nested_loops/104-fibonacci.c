#include <stdio.h>

/**
 * main - print the first 50 fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
	unsigned long int n, m, ;

	m = 1;
	n = 2;

	printf("%lu", m);
	n = m + n;
	m = n - m;

	for (k = 0; k < 92; k++)
	{
		printf(", %lu", m);
		n = m + n;
		m = n - m;
	}
	
	printf("\n");

	return (0);
}
