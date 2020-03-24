#include "lists.h"

/**
 *delete_nodeint_at_index - delete the node at index
 *@index: parameter to delete
 *@head: n=parameter head of the list
 *Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count= 0;
	listint_t *aux;

	if (*head)
	{
		if (index == 0)
		{
			aux = (*head)->next;
			free((*head));
			*head = aux;
			return (1);
		}

		while (*head && (count< (index - 1)))
		{
			count++;
			head = &(*head)->next;
		}

		if (count!= (index - 1))
			return (-1);

		aux = (*head)->next->next;
		free((*head)->next);
		(*head)->next = aux;
		return (1);
	}

	return (-1);

}
