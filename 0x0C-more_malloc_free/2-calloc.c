#include "holberton.h"

/**
*_calloc - function that allocates memory for an array
*@nmemb: Array parameter.
*@size: Size of array.
*Return: pointer to the allocated memory.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
char *ar;

if (nmemb == 0 || size == 0)
return (NULL);

ar = malloc(nmemb * size);

if (ar == NULL)
return (NULL);

for (i = 0; i < (nmemb * size); i++)
*(ar + i) = 0;

return (ar);
}
