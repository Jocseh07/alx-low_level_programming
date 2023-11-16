#include "lists.h"

/**
 * free_list - free a linked list
 * @head: linked list to free
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
