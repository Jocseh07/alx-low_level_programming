#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - prints the last digit of a number
 * @n: the int to extract the last digit from
 * Return: returns the last value of the digit
 */

int print_last_digit(int n)
{
	int a, b;

	a = abs(n);
	a = n % 10;

	b = abs(a);
	_putchar(b + '0');

	return (b);
}
