#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head of the list
 * @idx: index of the list where the new node should be added
 * @n: value of new node
 * Return: address of new node or NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int a = 1;

	dlistint_t *new;
	dlistint_t *head2;

	new = NULL;
	if (idx == 0)
		new = add_dnodeint(h, n);
	head2 = *h;
	if (head2 != NULL)
	{
		while (head2->prev != NULL)
			head2 = head2->prev;
	}
	while (head2 != NULL)
	{
		if (a == idx)
		{
			if (head2 != NULL)
				new = add_dnodeint_end(h, n);
			else
			{
				new = malloc(sizeof(dlistint_t));
				if (new == NULL)
					return (NULL);
				new->n = n;
				new->next = head2->next;
				new->prev = head2;
				head2->next->prev = new;
				head2->next = new;
			}
			break;
		}
		a++;
		head2 = head2->next;
	}
	return (new);
}
