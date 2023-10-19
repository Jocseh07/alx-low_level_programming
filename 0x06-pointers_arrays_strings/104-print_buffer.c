#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_buffer - prints a buffer
 * @b: buffer pointed by b
 * @size: size of the buffer pointed by b
 * Return: nothing
 */

void print_buffer(char *b, int size)
{
	int i, j, l;

	l = strlen(b);

	if (size <= 0)
	{
		printf("\n");
	} else
	{
		for (i = 0; i < l; i += 10)
		{
			printf("%s: %i ", b, size);
			for (j = 0; j < 10; j++)
			{
				printf("%c", b[j]); 
			}
			printf("\n");
		}
	}
}
