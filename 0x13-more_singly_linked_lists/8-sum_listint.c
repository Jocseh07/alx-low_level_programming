#include "lists.h"

/**
* sum_listint - return sum of all data (n) of linked list
* @head: pointer of first node of linked list
* Return: 0 if list is empty or NULL
*/

int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
