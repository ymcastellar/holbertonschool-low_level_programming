#include "lists.h"

/**
 *listint_len - print n elementes
 *@h: parameter
 *Return: number of elements in a linked
 */

size_t listint_len(const listint_t *h)
{
	size_t i;

	i = 0;

	while(h)
	{
		h = h->next;
		i++;
	}

	return (i);
}
