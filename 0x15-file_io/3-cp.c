#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Allocates 1024 bytes for a buffer
 * @name: The name of the file buffer is storing chars for
 * Return: A pointer to the newly-allocated buffer
 */

char *create_buffer(char *name)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", name);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - Closes file descriptors
 * @filename: The file descriptor to be closed
 */

void close_file(int filename)
{
	int c;

	c = close(filename);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", filename);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file
 * @argc: Number of arguments
 * @argv: An array of pointers to the arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	file_from = open(argv[1], O_RDONLY);
	r = read(file_from, buffer, 1024);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do
	{
		if (file_from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w = write(file_to, buffer, r);
		if (file_to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		r = read(file_from, buffer, 1024);
		file_to = open(argv[2], O_WRONLY | O_APPEND);
	} while (r > 0)

		free(buffer);
	close_file(file_from);
	close_file(file_to);

	return (0);
}
