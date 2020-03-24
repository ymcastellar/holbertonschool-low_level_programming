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
	listint_t *previousNode;
	listint_t *newNode;
	unsigned int i = 0;

	if (!head)
		return (NULL);

	newNode = (listint_t *)malloc(sizeof(listint_t));

	if (!newNode)
	{
		free(newNode);
		return (NULL);
	}

	while ((i < idx) && head)
	{
		head = &(*head)->next;
		i++;
	}

	if (i != idx)
		return (NULL);

	newNode->n = n;
	previousNode = *head;
	newNode->next = previousNode;
	*head = newNode;

	return (newNode);
}
