#include "holberton.h"

/**
*print_diagsums - sum of two diagonals
*@a: parameter
*@size: parameter
*Return: void
*/

void print_diagsums(int *a, int size)
{
int i, suma, suma2;

suma = 0;
suma2 = 0;


for (i = 0; i < size; i++)
suma += *(a + ((size + 1) * i));

for (i = 1; i < size + 1; i++)

suma2 += *(a + ((size - 1) * i));

printf("%i, %i\n", suma, suma2);

}
