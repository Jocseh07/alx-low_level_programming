#include "lists.h"

/**
* pop_listint - deletes head node of linked list
* @head: head of linked list
*
* Return: 0 or head node's data
*/

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int number;

	if (!head || !*head)
		return (0);

	number = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (number);
}
