#include "main.h"

/**
* binary_to_uint - convert binary to unsigned int
* @b: string of 0 and 1 chars
* Return: converted number or 0
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int total = 0, power = 1;
	int i, a;

	if (b == NULL)
		return (0);

	for (a = 0; b[a]; a++)
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);
	}

	for (i = a - 1; i >= 0; i--)
	{
		if (b[i] == '1')
			total += power;
		power *= 2;
	}

	return (total);
}
