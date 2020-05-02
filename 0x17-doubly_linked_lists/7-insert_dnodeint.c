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
	unsigned int i;

	if (!h)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));
	aux = *h;
	for (i = 0; aux && i < idx; i++)
		aux = aux->next;
	if (!aux && i == idx)
		return (add_dnodeint_end(h, n));
	else if (aux)
	{
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		aux->prev->next = new;
		new->prev = aux->prev;
		aux->prev = new;
		new->next = aux;
		return (new);
	}
	else
		return (NULL);
}
