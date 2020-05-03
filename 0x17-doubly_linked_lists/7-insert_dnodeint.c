#include "lists.h"

/**
 *insert_dnodeint_at_index - insert node at index
 *@h: head
 *@idx: index
 *@n:node
 *Return:address of node or NULL if it fails
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *aux;
	unsigned int i = 0;

	if (!h)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));
	aux = *h;
	while (i < idx - 1)
	{
		if (aux == NULL)
			return (NULL);
		aux = aux->next;
		i++;
	}
	if (aux->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}
	else
	{
		new = malloc(sizeof(dlistint_t));
		if (!new)
			return (NULL);
		new->n = n;
		new->next = aux->next;
		new->next->prev = new;
		aux->next = new;
		new->prev = aux;
	}
	return (new);
}
