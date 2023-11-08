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
