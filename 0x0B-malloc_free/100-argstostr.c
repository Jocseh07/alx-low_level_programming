#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * *argstostr - concatenates all arguments of your program
 * @ac: argument count
 * @av: argument array
 * Return: Null or pointer to string
 */

char *argstostr(int ac, char **av)
{
	int i, total;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 1; i < ac; i++)
	{
		total += strlen(av[i]);
	}
	total += 1;

	s = (char *) malloc(sizeof(char) * total);

	for (i = 1; i < ac; i++)
	{
		strcat(s, av[i]);
	}

	return (s);
}
