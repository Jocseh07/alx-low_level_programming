#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: string to be printed between numbers
 * @n: is the number of integers passed to the function
 *
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	va_list numbers;

	va_start(numbers, n);

	if (!separator || !n)
		return;

	printf("%d", va_arg(numbers, int));
	for (a = 0; a < n - 1; a++)
	{
		printf("%s%d", separator, va_arg(numbers, int));
	}
	printf("\n");

	va_end(numbers);
}
