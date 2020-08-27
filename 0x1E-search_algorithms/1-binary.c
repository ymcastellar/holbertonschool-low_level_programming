#include "search_algos.h"

/**
 * printer - Print array
 * @array: array to print
 * @left: Left index of array
 * @right: Right index of array
 */

void printer(int *array, size_t left, size_t right)
{
	size_t i;

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		printf("%d", array[i]);
		if (i == right)
			printf("\n");
		else
			printf(", ");
	}
}

/**
*binary_search - searches for a value in a sorted array
*@array: pointer to the first element
*@size:elements in array
*@value:  value to search for
*Return: index
*/

int binary_search(int *array, size_t size, int value)
{
	size_t left, right, mid;

	left = 0;
	right = size - 1;

	if (!array || right == 0)
		return (-1);

	while (left <= right)
	{
		printer(array, left, right);

		mid = (left + right) / 2;
		/* Check if value is present at mid */
		if (array[mid] == value)
			return (mid);

		/* If value greater, ignore left half */
		if (array[mid] < value)
			left = mid + 1;

		/* If value is smaller, ignore right half */
		else
			right = mid - 1;
	}
		/* if we reach here, then element was not present  */
		return (-1);
}
