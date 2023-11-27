#include "main.h"

/**
* read_textfile - reads a text file and prints to standard output
* @filename: pointer to name of file
* @letters: number of letters to print
*
* Return: if NULL 0 else actual no of letters read and printed
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *name;

	if (filename == NULL)
		return (0);

	name = malloc(sizeof(char) * letters);
	if (name == NULL)
		return (0);

	o = open(filename, 'r');
	r = read(o, name, letters);
	w = write(1, name, r);

	if (o == -1 || r == -1 || w == -1)
	{
		free(name);
		return (0);
	}
	free(name);
	close(o);

	return (w);
}
