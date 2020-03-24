#include "lists.h"

/**
 *get_nodeint_at_index - return nth node of a list
 *@head: parameter
 *@index: parameter
 *Return:bth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int i = 0;

	node = head;

	if (node == NULL)
	{
		return (NULL);
	}
	else
	{
		while (node)
		{
			if (index == i)
				return (head);

			node = node->next;
			head = node;
			i++;
		}
	}


	return (head);
}
