#include "main.h"

/**
 * print_list - printss all elements of a linked list
 * @h: pointer to linked list
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%] %s\n", h->l, h->str);
		h = h->next;
		s++;
	}

	return (s);
}
