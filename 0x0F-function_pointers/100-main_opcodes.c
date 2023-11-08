#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the opcodes of its own main function
 * @argc: the number of arguments
 * @argv: array of arguments
 *
 * Return: 0
 */

int main(int argc,  char *argv[])
{
	int b;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	b = atoi(argv[1]);

	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}



	return (0);
}
