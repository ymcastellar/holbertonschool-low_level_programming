#include "holberton.h"

/**
*reverse_array - reverse array
*@a: parameter int
*@n: parameter int
*Return: void
*/

void reverse_array(int *a, int n)
{
int i, aux;
i = 0;
n--;

while (i <= n)
{
aux = a[i];
a[i] = a[n];
a[n] = aux;
i++;
n--;

}

}
