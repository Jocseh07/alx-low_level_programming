#include "search_algos.h"

/**
 * jump_list - search for a value using jump search algorithm
 * @list: pointer to first element of list
 * @size: no of elements in list
 * @value: value to search
 * Return: index or NULL
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t index = 0, step = 0, a = 0;
	listint_t *prev;

	if (list == NULL || size == 0)
		return (NULL);
	step = sqrt(size);

	while (index < size && list->next && list->n < value)
	{
		a++;
		prev = list;
		index = step * a;
		while (list->next && list->index < index)
			list = list->next;
		if (list->next == NULL && list->index != index)
			index = list->index;
		printf("Value checked array[%lu] = [%d]\n", index, list->n);
	}
	printf("Value found between indexes ");
	printf("[%ld] and [%ld]\n", prev->index, list->index);
	for (; prev && prev->index <= list->index; prev = prev->next)
	{
		printf("Value checked array[%ld] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
	}
	return (NULL);
}
