#include "variadic_functions.h"

/**
 * sum_them_all - returns sum of all parameters
 * @n: number of args
 *
 * Return: 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list sum;
	unsigned int a, total;

	va_start(sum, n);

	for (a = 0; a < n; a++)
	{
		total += va_arg(sum, unsigned int);
	}
	if (n == 0)
		return (0);

	return (total);
}
