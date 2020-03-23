#include "lists.h"

/**
 *print_listint - print list
 *@h: parameter
 *Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i;

	i = 0;
	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		i++;
	}

	return (i);
}
