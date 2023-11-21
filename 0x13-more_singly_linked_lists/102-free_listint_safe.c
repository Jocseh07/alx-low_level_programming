#include "lists.h"

/**
* free_listint_safe - frees a listint_t linked list
* @h: double pointer to first node
* Return: size f list that was freed
*/

size_t free_listint_safe(listint_t **h)
{
	size_t l = 0;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		temp = (*h)->next;
		free(*h);
		*h = temp;
		l++;
	}

	*h = NULL;

	return (l);
}
