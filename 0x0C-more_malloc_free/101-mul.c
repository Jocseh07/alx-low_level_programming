#include <stdlib.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiplies 2 positive integers
 * @argc: number of parameters
 * @argv: array of parameters
 * Return: multiplication
 */

int main(int argc, char *argv[])
{
	int a, b;
	int *ptr;

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	if (argc != 3 || !a || !b)
	{
		printf("Error\n");
		exit(98);
	}
	ptr = malloc(sizeof(int));
	if (!ptr)
		return (1);

	ptr[0] = a * b;

	printf("%d\n", *ptr);
	free(ptr);
	return (0);
}
