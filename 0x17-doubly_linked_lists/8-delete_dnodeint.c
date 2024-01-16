#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at index
 * @head: head of linkedl ist
 * @index: index to delete the node
 * Return: 1 ifsucceeded of -1 if failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int a = 0;
	dlistint_t *temp;

	temp = *head;
	if (temp == NULL)
		return (-1);

	while (temp->prev != NULL)
		temp = temp->prev;
	while (temp != NULL)
	{
		if (a == index)
			break;
		a++;
		temp = temp->next;
	}
	if (a < index)
		return (-1);
	if (a == 0)
	{
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		temp->prev->next = temp->next;
		if (temp->next != NULL)
			temp->next->prev = temp->prev;
	}
	free(temp);

	return (1);
}
