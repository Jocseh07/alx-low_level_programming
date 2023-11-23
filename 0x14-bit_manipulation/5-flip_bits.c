#include "main.h"

/**
* flip_bits - returns no of bits you need to flip to get from one number to another
* @n: the first number
* @m: the second number to convert to
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
}
