#include "lists.h"
/**
  * delete_dnodeint_at_index - delete a node at index
  * @head: head of the list
  * @index: index of the node
  * Return: 1-succeeded, -1 if it failed
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tdel, *thead;

	if (!head || !*head)
		return (-1);
	thead = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(thead);
		return (1);
	}
	for ( ; index > 1 && thead && thead->next; index--)
		thead = thead->next;
	if (!thead->next)
		return (-1);
	tdel = thead->next;
	thead->next = tdel->next ? tdel->next : NULL;
	if (tdel->next)
		tdel->next->prev = thead;
	free(tdel);
	return (1);
}
