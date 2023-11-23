#include "main.h"

/**
* flip_bits - returns no of bits you need to flip to another number
* @n: the first number
* @m: the second number to convert to
*
* Return: number of bits  to flip
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int a;
	int total = 0;

	a = n ^ m;
	while (a)
	{
		total++;
		a = a & (a - 1);
	}
	return (total);
}
