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

	for (a = 0; a < n; a++)
	{
		if (!separator)
			printf("%d", va_arg(numbers, int));
		else if (separator && a == 0)
			printf("%d", va_arg(numbers, int));
		else
			printf("%s%d", separator, va_arg(numbers, int));
	}
	printf("\n");

	va_end(numbers);
}
