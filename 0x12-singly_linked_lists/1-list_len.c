#include "lists.h"

/**
 *list_len - print number of elements in a linked list
 *@h: parameter
 *Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		i++;
		h = h->next;
	}

	return (i);
}
