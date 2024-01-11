#include "lists.h"

/**
 * print_dlistint - prints all emenents of list
 * @h: head of list
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t a;

	a = 0;
	if (h == NULL)
		return (a);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		a++;
		h = h->next;
	}

	return (a);
}
