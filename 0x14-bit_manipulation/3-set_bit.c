#include "main.h"

/**
* set_bit - set the value of a bit to 1 at given index
* @n: the number to set value of the bit
* @index: index to set bit to 1
* Return: 1 if worked -1 if an error occured
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a;

	if (index > 64)
		return (-1);

	for (a = 1; index > 0; index--)
		p *= 2;
	*n += p;

	return (1);
}
