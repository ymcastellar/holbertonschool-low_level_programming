#include "lists.h"

/**
 *add_nodeint -add new node
 *@head: parameter head
 *@n: parameter
 *Return: address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *next_node;

	if (!n)
		return (NULL);
	next_node = malloc(sizeof(listint_t));

	if (!next_node)
		free(next_node);
		return (NULL);

	next_node->n = n;
	next_node->next = (*head);

	*head = next_node;

	return (next_node);
}
