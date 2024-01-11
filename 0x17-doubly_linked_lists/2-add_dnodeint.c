#include "lists.h"

/**
 * add_dnodeint - adds new node at begining of dlistint_t list
 * @head: pointer to head
 * @n: value of head
 * Return: address of new element or NULL if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *head2;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	head2 = *head;
	if (head2 != NULL)
	{
		while (head2->prev != NULL)
			head2 = head2->prev;
	}
	new->next = head2;
	if (head2 != NULL)
		head2->prev = new;
	*head = new;
	return (new);
}
