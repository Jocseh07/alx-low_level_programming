#include "main.h"

/**
* get_bit - returns the value of a bit of given index
* @n: number to get bit
* @index: index of the bit to get
* Return: value of the bit at index or -1
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int a;

	if (index > 64)
		return (-1);

	a = n >> index;

	return (a & 1);
}
