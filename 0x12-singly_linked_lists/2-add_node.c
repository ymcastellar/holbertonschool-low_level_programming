#include "lists.h"

/**
 *add_node - adds a new node
 *@head: parameter
 *@str: parameter
 *Return: addres of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	int i;
	list_t *next_node;

	i = 0;

	if (!str)
		return (NULL);

	next_node = malloc(sizeof(list_t));
	if (next_node == NULL)
		return (NULL);

	while (str[i] != 0)
		i++;

	next_node->str = strdup(str);
	next_node->len = i;
	next_node->next = (*head);

	*head = next_node;

	return (next_node);
}
