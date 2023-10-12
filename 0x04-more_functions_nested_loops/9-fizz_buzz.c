#include <stdio.h>

/**
 * main - prints numbers from 1 to 100 followed by a line
 * if multiple of 3 fizz
 * if multiple of 5 buzz
 * if multiple of 3 and 5 fizzbuzz
 * Return: 0
 */

int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if ((a % 3) == 0 && (a % 5) == 0)
		{
			printf("Fizz Buzz");
		} else if ((a % 3) == 0)
		{
			printf("Fizz");
		} else if ((a % 5) == 0)
		{
			printf("Buzz");
		} else
		{
			printf("%d", a);
		}

		if (a != 100)
		{
			printf(" ");
		} else
		{
			printf("\n");
		}
	}

	return (0);
}
