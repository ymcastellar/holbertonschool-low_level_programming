#include "search_algos.h"

/**
*linear_search - print numbers
*@array: pointer to the first element
*@size:elements in array
*@value:  value to search for
*Return: index
*/

int linear_search(int *array, size_t size, int value)
{

	size_t i;

	i = 0;

	if (!array || !value)
		return (-1);

	while (i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
		i++;
	}

		return (-1);

}
