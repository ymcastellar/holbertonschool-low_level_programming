#include "lists.h"

/**
 *pop_listint - deletes the head node
 *@head: parameter head
 *Return: head note's data
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int deletedNode;

	if (*head == NULL)
		return (0);

	temp = *head;
	*head = (*head)->next;
	deletedNode = temp->n;
	free(temp);

	return (deletedNode);
}
