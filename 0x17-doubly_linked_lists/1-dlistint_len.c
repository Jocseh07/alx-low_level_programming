#include "lists.h"

/**
 * dlistint_len - returns the no of element in a linked list
 * @h: the head of the list
 * Return: no of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t a;

	a = 0;
	if (h == NULL)
		return (a);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		a++;
		h = h->next;
	}

	return (a);
}