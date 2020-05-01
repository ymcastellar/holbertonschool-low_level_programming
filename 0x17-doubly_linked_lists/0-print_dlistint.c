#include "lists.h"

/**
 *print_dlistint - print a doubly linked list
 *@h: parameter
 *Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	i = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}

	return (i);
}
