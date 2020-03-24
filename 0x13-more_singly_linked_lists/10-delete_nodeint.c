#include "lists.h"

/**
 *delete_nodeint_at_index - delete the node at index
 *@index: parameter to delete
 *@head: n=parameter head of the list
 *Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count;
	listint_t *temp;
	listint_t *aux;

	temp = *head;

	count = 0;

	if (!temp)
		return (-1);

	if (index == 0)
	{
		aux = (temp)->next;
		free((temp));
		temp = aux;
		return (1);
	}

	while (temp && (count < (index - 1)))
	{
		head = &temp->next;
		count++;
	}

	if (count != (index - 1))
		return (-1);

	aux = temp->next->next;
	free(temp->next);
	temp->next = aux;

	return (1);

}
