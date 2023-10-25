#include "main.h"

/**
 * is_prime_number - return 1 if the integer is a prime no
 * @n: integer to check
 * Return: 1 if prime 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (prime_number(n, n-1));
}

int prime_number(int n, int a)
{
	if (a == 1)
		return (1);
	if (n % a == 0 && a > 0)
		return (0);
	return (prime_number(n, a - 1));
}
