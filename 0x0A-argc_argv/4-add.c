#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - add positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[]__attribute__((unused)))
{
	int sum, i;

	sum = 0;

	if (argc == 1)
	{
		printf("%d\n", sum);
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]))
		{
			sum += atoi(argv[i]);
		} else
		{
			printf("Error\n");
			return (1);
		}

		printf("%d\n", sum);
	}

	return (0);
}
