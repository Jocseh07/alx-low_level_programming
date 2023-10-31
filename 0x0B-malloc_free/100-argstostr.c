#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * *argstostr - concatenates all arguments of your program
 * @ac: argument count
 * @av: argument array
 * Return: Null or pointer to string
 */

char *argstostr(int ac, char **av)
{
	int i, total = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		total += strlen(av[i]);
	}

	total -= (ac - 1);

	s = (char *) malloc((sizeof(char *) * total) + 1);

	for (i = 0; i < ac; i++)
	{
		strcat(s, av[i]);
		strcat(s, "\n");
	}

	return (s);
}
