#include <stdio.h>

/**
 * main - finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2
 * followed by a new line
 * Return: ALways 0 (Success)
 */
int main(void)
{
	unsigned long int i, m, n, m1, m2, n1, n2;

	m = 1;
	n = 2;

	printf("%lu", m);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", n);
		n = n + m;
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

