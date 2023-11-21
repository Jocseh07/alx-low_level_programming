#include "lists.h"

/**
* *find_listint_loop - find loop of linked list
* @head: pointer to first node of linked list
* Return: address of node where loop starts or NULL
*/

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *one = head;
	listint_t *two = head;

	if (!head)
		return (NULL);
	while (one && two && two->next)
	{
		one = one->next;
		two = two->next->next;

		if (two == one)
		{
			one = head;
			return (one);
		}
	}
	return (NULL);

}
