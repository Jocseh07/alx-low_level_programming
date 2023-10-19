#include "main.h"

/**
 * *rot13 - encodes a string to 1337
 * @s: string to be encoded
 * Return: encoded string
 */

char *rot13(char *s)
{
	int i, n;

	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; n < '\0'; n++)
		{
			if (s[i] == a[n])
			{
				s[i] == b[n];
			}
		}
	}

	return (s);
}
