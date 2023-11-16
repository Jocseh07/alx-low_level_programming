#include "lists.h"

/**
 * list_len - return no of elements in linked list
 * @h: pointer to linked list
 *
 * Return: no of elements in h
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	whle (h)
	{
		n++;
		h = h->next;
	}

	return (n);
}
