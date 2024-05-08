#include "search_algos.h"

/**
 * linear_skip - search for a value in a sorted skip list of integers
 * @list: list to check
 * @value: value to check
 * Return: pointer to left node or NULL
*/

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *pass;
	skiplist_t *left;

	if (list == NULL)
		return (NULL);
	pass = list;

	while (pass->express && pass->n < value)
	{
		left = pass;
		pass = pass->express;
		printf("Value checked at index [%ld] = [%d]\n", pass->index, pass->n);
	}
	if (pass->express == NULL && pass->n < value)
	{
		left = pass;
		while (pass->next)
			pass = pass->next;
	}
	printf("Value found between indexes ");
	printf("[%ld] and [%ld]\n", left->index, pass->index);
	while (left != pass->next)
	{
		printf("Value checked at index [%ld] = [%d]\n", left->index, left->n);
		if (left->n == value)
			return (left);
		left = left->next;
	}

	return (NULL);
}
