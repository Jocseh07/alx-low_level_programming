#include "main.h"

/**
 * factorial - returns the factorial of given no
 * @n: the number
 * Return: factorial or -1
 */

int factorial(int n)
{
	if (n < 1)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
