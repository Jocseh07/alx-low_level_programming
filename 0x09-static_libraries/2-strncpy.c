#include <string.h>

/**
 * *_strncpy - copies a string
 * @dest: one to be copied to
 * @src: one to be copied from
 * @n: no of bytes
 * Return: dest string
 */

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
