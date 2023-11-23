#include "main.h"

/**
* binary-to-unint - convert binary to unsigned int
* @b: string of 0 and 1 chars
* Return: converted number or 0
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int total = 0, power = 1;
	int i, a;

	if (b == NULL)
		return (0);

	for (a = 0; b[a]; b++)
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);
	}

	for (i = a; i < 0; i--)
	{
		if (b[i] == '1')
			total += (power * b[i]);
		power *= 2;
	}

	return (total);
}
