#include "lists.h"

/**
* *add_nodeint_end - add new node to end of list
* @head: pointer to head of list
* @n: data to insert in new element
*
* Return: pointer to new node
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new->n = n;
	new->next = NULL;

	if (!head)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
	{
		temp->next = new;
	}

	return (new);
}
