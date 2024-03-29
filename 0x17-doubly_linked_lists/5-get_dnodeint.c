#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a linked list
 * @head: head of linked list
 * @index: index of the node
 * Return: nth node of linked list
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int a;

	if (head == NULL)
		return (NULL);
	while (head->prev != NULL)
		head = head->prev;
	a = 0;
	while (head != NULL)
	{
		if (a == index)
			break;
		a++;
		head = head->next;
	}
	return (head);
}
