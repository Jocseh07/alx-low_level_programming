#include <stdio.h>

/**
 * main - print sum of all multiples of 3 and 5 below 1024
 * Return: always 0
 */
int main(void)
{
	int sum;
	int i;

	sum = 0;

	for (i = 1; i < 1024; i++)
	{
		if ((i % 3) == 0)
		{
			sum += i;
		} else if ((i % 5) == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
