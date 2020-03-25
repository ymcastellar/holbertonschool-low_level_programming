#include "lists.h"

/**
 * print_listint_safe -  prints a listint_t linked list.
 * @head: head of the struct
 * Return: numbers of nodes in the list
 */


size_t print_listint_safe(const listint_t *head)
{
	int count = 0;
	const listint_t *aux;

	aux = head;
	if (aux != NULL)
	{

		while (aux != NULL)
		{
			printf("[%p] %d\n", (void *)aux, aux->n);

			if (aux <= aux->next)
			{
				printf("-> [%p] %d\n", (void *)aux->next, aux->next->n);
				count++;
				break;
			}
			else
			{
				aux = aux->next;
				count++;
			}
		}
	}
	else
	{
		return (0);
	}

	return (count);
}
