#include "main.h"

/**
* clear_bit - sets the value of a bit to 0 at given index
* @n: value to set the bit
* @index: index of the bit to set
*
* Return: 1 if it worked and -1 if error
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a;
	unsigned int b;

	if (index > 64)
		return (-1);

	b = index;
	for (a = 1; b > 0; b--)
		a *= 2;

	if ((*n >> index) & 1)
		*n -= a;

	return (1);
}
