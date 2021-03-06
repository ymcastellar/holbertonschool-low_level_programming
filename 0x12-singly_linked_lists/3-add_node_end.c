#include "lists.h"

/**
 *add_node_end - adds at the end
 *@head: parameter
 *@str: parameter
 *Return: addres of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int i;

	list_t *new_n;
	list_t *last;

	i = 0;

	if (!str)
		return (NULL);

	new_n = malloc(sizeof(list_t));
	last = *head;

	if (new_n == NULL)
		return (NULL);

	while (str[i] != 0)
		i++;

	new_n->str = strdup(str);
	new_n->len = i;
	new_n->next = NULL;

	if (*head == NULL)
	{
		*head = new_n;
		return (new_n);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = new_n;

	return (new_n);
}
