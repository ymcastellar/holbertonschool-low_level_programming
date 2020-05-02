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
	dlistint_t *new, *node_temp;
	unsigned int i;

	if (idx == 0)
		return (add_dnodeint(h, n));
	node_temp = *h;
	for (i = 0; node_temp && i < idx; i++)
		node_temp = node_temp->next;
	if (!node_temp && i == idx)
		return (add_dnodeint_end(h, n));
	else if (node_temp)
	{
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		node_temp->prev->next = new;
		new->prev = node_temp->prev;
		node_temp->prev = new;
		new->next = node_temp;
		return (new);
	}
	return (NULL);
}
