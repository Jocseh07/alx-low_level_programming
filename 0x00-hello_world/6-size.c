#include <stdio.h>

/**
 * main - a program that prints a line using the printf function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long int l;
	long long int ll;
	float f;
	printf("Size of an char: %lu byte(s)\n", (unsigned long)sizeof(c));;
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));;
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(l));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(l));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
