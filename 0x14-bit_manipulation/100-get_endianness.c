#include "main.h"

/**
* get_endianness - check endianness
* Return: 0 if bit endian, 1 if little endian
*/

int get_endianness(void)
{
	int n;

	n = 1;
	if (*(char *) & num == 1)
		return (1);
	else
		return (0);
}
