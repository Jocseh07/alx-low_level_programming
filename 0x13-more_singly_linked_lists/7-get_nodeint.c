#include "lists.h"

/**
* *get_nodeint_at_index - returns the nth node of linked list
* @head: pointer to first node
* @index: index of node
*
* Return: NULL or nth node of linked list
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int n = 0;

	while (temp && n < index)
	{
		temp = temp->next;
		n++;
	}
	if (!temp)
		return (NULL);

	return (temp);
}
