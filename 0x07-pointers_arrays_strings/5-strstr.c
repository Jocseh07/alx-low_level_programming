#include "main.h"

/**
 * *_strstr - locates a substring
 * @haystack: string to be checked
 * @needle: first occurrence of the substring to be checked
 *
 * Return: a pointer to the beginning of the located substring or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
