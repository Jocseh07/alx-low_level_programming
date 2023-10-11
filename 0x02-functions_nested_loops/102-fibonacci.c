#include <stdio.h>

/**
 * main - print the first 50 fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
	long int i, j, k, l;
	i = 2;
	j = 1;
	
	for (k = 0; k < 50; k++)
	{
		if (j != 20365011074)
		{
			printf("%li, ", j);
		} else
		{
			printf("%li\n", j);
		}
		l = j + i;
		j = i;
		i = l;
	}

	return (0);
}
