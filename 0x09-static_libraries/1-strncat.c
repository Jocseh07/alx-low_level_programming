#include "main.h"
#include <string.h>

/**
 * *_strncat - concatenates two strings
 * @src: one to concatenate
 * @dest: one to concatenate to
 * @n: n bytes from src
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
