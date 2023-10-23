#include "main.h"
#include <string.h>

/**
 * *_strchr - locates a character in a string
 * @c: character to check the first occurence
 * @s: string to be checked
 * Return: pointer to first occurence and Null if not found
 */

char *_strchr(char *s, char c)
{
	return (*strchr(s, c));
}
