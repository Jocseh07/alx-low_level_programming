#include "main.h"

/**
 * _isalpha - check if alphabet
 * @c: no being checked
 * Return: return 1 if alphabet and 0 otherwise
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
