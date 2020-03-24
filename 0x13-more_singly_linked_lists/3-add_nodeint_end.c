#include "lists.h"

/**
 *add_nodeint_end - add node at the end
 *@head: parameter head of the node
 *@n: parameter to add
 *Return:the address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_n;
	listint_t *last = *head;
	if (!head)
		return (NULL);


	new_n = (listint_t *)malloc(sizeof(listint_t));

	if (!new_n)
	{
		free(new_n);
		return (NULL);
	}

	new_n->n = n;
	new_n->next = NULL;

	if (!*head)
	{
		*head = new_n;
		return (new_n);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = new_n;

	return (new_n);
}
