#include "lists.h"

/**
 *insert_nodeint_at_index - insert new node at a given position
 *@head: first node parameter
 *@idx: index parameter
 *@n: parameter date node
 *Return:node
 */



listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node;
	listint_t *temp;
	unsigned int count;

	count = 0;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		free(node);
		return (NULL);
	}

	node->n = n;

	if (idx == 0)
	{
		node->next = *head;
		*head = node;

		return (*head);
	}

	temp = *head;
	while (temp)
	{
		while (count == idx - 1)
		{
			node->next = temp->next;
			temp->next = node;

			return (node);
		}
		count++;
		temp = temp->next;
	}


	return (NULL);
}
