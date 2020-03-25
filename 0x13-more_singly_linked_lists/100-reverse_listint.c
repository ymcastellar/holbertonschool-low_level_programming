#include "lists.h"

/**
 * reverse_listint -reverses a list.
 *@head: Head of the linked list.
 * Return: It returns a reversed linked list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *pNode = NULL;
	listint_t *Next_node;

	if (head == NULL)
		return (NULL);

	while ((*head) != NULL)
	{
		Next_node = (*head)->next;
		(*head)->next = pNode;
		pNode = *head;
		*head = Next_node;
	}

	*head = pNode;

	return (*head);
}
