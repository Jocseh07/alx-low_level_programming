#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n)
 * @head: heado f list
 * Return: sum of all the data
 */

int sum_dlistint(dlistint_t *head)
{
	size_t a;

	a = 0;
	if (head == NULL)
		return (a);
	while (head->prev != NULL)
		head = head->prev;
	while (head != NULL)
	{
		a += head->n;
		head = head->next;
	}

	return (a);
}
