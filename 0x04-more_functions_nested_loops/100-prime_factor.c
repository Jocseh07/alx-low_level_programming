#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of the no 612852475143
 * followed by a new line
 * Return: 0
 */

int main(void)
{
	unsigned long int a, i;

	a = 612852475143;
	i = 3;

	while (i <= a / 2)
	{
		if (a % i == 0)
		{
			a = a / i;
		} else
		{
			i += 2;
		}
	}

	printf("%lu\n", a);

	return (0);
}
