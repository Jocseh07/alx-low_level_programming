#include "main.h"
#include <stdlib.h>

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
		return (NULL);

	name = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, name, letters);
	w = write(STDOUT_FILENO, name, r);

	free(buffer);
	close(o);

	return (w);
}
