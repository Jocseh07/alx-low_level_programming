#include "3-calc.h"

/**
 * get_op_func - function pointer that selects the correct function
 * @s: the operator passed as argument to program
 *
 * Return: pointer to the function that correspoind to the
 * operator given as a parameter
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	for (i = 0; i < 6; i++)
	{
		if ((strcmp(ops[i]), s) == 0)
			return (ops[i].f);
	}

	return (NULL);

}
