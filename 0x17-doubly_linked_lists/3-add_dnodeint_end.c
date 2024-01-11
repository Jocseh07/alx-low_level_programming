#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a list
 * @head: head of the list
 * @n: element to add
 * Return: address of new element or NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *head2;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	head2 = *head;
	new->n = n;
	new->next = NULL;
	if (head2 != NULL)
	{
		while (head2->next != NULL)
			head2 = head2->next;
		head2->next = new;
	}
	else
		*head = new;
	new->prev = head2;
	return (new);
}
