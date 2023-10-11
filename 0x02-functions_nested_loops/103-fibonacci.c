#include <stdio.h>

/**
 * main - finds and prints fibonacci sequence that do not exceed 4,000,000
 *
 * Return: 0
 */

int main(void)
{
	unsigned long int i, j, k, l, sum;

	i = 2;
	j = 1;
	sum = 0;

	for (k = 0; k < 33; k++)
	{
		if ((j % 2) == 0)
		{
			sum += j;
		}
		l = j + i;
		j = i;
		i = l;
        }
	printf("%li\n", sum)

	return (0);
}
