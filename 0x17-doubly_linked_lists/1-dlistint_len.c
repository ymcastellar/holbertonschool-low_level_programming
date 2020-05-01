#include "lists.h"

/**
 *dlistint_len - list length of the list;
 *@h: parameter
 *Return: length
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	i = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		h = h->next;
		i++;
	}

	return (i);
}
