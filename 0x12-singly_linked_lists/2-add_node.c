#include "lists.h"

/**
 * *add_node - add new node to beginning of linked list
 * @head: double pointer to linked list
 * @str: new string to add to node
 *
 * Return: address of new element or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	strcpy(new->str, str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
