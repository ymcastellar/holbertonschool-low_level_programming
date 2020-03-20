#include "lists.h"

/**
 *add_node - add a new node
 *@head: parameter
 *@str: parameter
 *Return: the address of a new elements or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	size_t i;

	while (head != NULL)
	{
		str->next = *head;
		*head = str;
		i++;
	}

	return (i);
}
