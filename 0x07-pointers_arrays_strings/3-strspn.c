#include "main.h"
#include <string.h>
/**
 * _strspn - gets the length of a prefix substring
 * @s: the prefix substring
 * @accept: bytes to be gotten from
 * Return: No of bytes of the initia segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
