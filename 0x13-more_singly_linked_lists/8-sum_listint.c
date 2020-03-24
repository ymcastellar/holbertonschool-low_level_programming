#include "lists.h"

/**
 *sum_listint - sum of all the data (n)
 *@head: parameter first node
 *Return: sum
 */

int sum_listint(listint_t *head)
{
	listint_t *first;
	int sum;

	sum = 0;

	first = head;

	if (first == NULL)
		return (0);

	while (first)
	{
		sum += first->n;
		first = first->next;
	}

	return (sum);


}
