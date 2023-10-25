#include "main.h"
#include <string.h>

int check_palindrome(char *s, int a, int l);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to check
 * Return: 1 if it is otherwise 0
 */

int is_palindrome(char *s)
{
	int l;

	l = strlen(s);

	return (check_palindrome(s, 0, l));
}

/**
 * check_palindrome - check palindrome
 * @s: string to check
 * @a: iteration
 * @l: length of string
 * Return: 1 if palindrome and 0 otherwise
 */

int check_palindrome(char *s, int a, int l)
{
	if (*(s + a) != *(s + l - 1))
		return (0);

	if (a >= l)
		return (1);

	return (check_palindrome(s, a + 1, l - 1));
}
