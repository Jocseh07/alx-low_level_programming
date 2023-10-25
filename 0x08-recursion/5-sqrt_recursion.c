#include "main.h"

int _sqrt_recursions(int n, int a);
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number
 * Return: -1 if does not have natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 1)
	{
		return (-1);
	}
	return (_sqrt_recursions(n, 0));
}
/**
 * _sqrt_recursions - get squareroot of a number
 * @n: number
 * @a: iterative
 * Return: squareroot or -1
 */
int _sqrt_recursions(int n, int a)
{
	if (a * a > n)
		return (-1);

	if (a * a == n)
		return (a);

	return (_sqrt_recursions(n, a + 1));
}
