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
	dlistint_t *head1;

	head1 = *head;
	if (head1 == NULL)
		return (-1);

	while (head1->prev != NULL)
		head1 = head1->prev;
	while (head1 != NULL)
	{
		if (a == index)
			break;
		a++;
		head1 = head1->next;
	}
	if (a == 0)
	{
		*head = head1->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		head1->prev->next = head1->next;
		if (head1->next != NULL)
			head1->next->prev = head1->prev;
	}
	free(head1);

	return (1);
}

/**
 *
if (a < index)
	return (-1);
if (index == 0)
{
	temp = head1;
	head1 = head1->next;
	head1->next->prev = NULL;
	free(temp);
}
else if (head2->next != NULL)
{
	temp = head2;
	head2->prev->next = head2->next;
	head2->next->prev = head2->prev;
	free(temp);
}
else
*/
