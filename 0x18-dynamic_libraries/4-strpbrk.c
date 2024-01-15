#include "main.h"
#include <string.h>

/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @s: string to be checked
 * @accept: string to be checked for
 *
 * Return: pointer to the byte in s that matches one of the bytes or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
