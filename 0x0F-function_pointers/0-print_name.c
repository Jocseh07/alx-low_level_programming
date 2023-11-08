#include "function_pointers.h"

/**
 * print_name - funciton that prints a name
 * @name: the name to be printed
 * @f: the function pointer
 *
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}

void f(char *name)
{
	int a = 0, b;

	while (name[a] != '\0')
		a++;

	for (b = 0; b < a; b++)
		_putchar(name[b]);

	_putchar('\n');
}
