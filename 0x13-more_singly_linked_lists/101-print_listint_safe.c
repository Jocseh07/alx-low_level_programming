#include "lists.h"

/**
* print_listint - prints a linked list
* @head: pointer to first node of linked list
* Return: 98 if it fails or number of nodes in list
*/

size_t print_listint_safe(const listint_t *head)
{
	size_t num = 0;
	const listint_t *temp = head;

	while (temp)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		num++;
		temp = temp->next;
	}

	return (num);
}
