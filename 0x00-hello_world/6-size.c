#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char c;
	double d;
	printf("Size of int: %zu bytes\n", sizeof(i));
	printf("Size of double: %zu bytes\n", sizeof(d));
	printf("Size of char: %zu bytes\n", sizeof(c));
	return (0);
}
