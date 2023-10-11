#include <stdio.h>

/**
 * main - print the first 50 fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
	unsigned long int i, n, m, k, n1, n2, m1, m2;

	m = 1;
	n = 2;

	printf("%lu", m);
	n = m + n;
	m = n - m;

	for (k = 0; k < 91; k++)
	{
		printf(", %lu", m);
		n = m + n;
		m = n - m;
	}

	m1 = m / 1000000000;
	m2 = m % 1000000000;
	n1 = n / 1000000000;
	n2 = n % 1000000000;

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", n1 + (n2 / 1000000000));
		printf("%lu", n2 % 1000000000);
		n1 = n1 + m1;
		m1 = n1 - m1;
		n2 = n2 + m2;
		m2 = n2 - m2;
	}

	printf("\n");

	return (0);
}
