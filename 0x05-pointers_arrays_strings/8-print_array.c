#include "holberton.h"
#include <stdio.h>

/**
* print_array - check the code for Holberton School students.
*@a: parameter int
*@n: parameter int
*Return: void
*/

void print_array(int *a, int n)
{

int i;

for (i = 0; i < n; i++)
{
if (i == n - 1)
{
printf("%i", a[i]);
}
else
{
printf("%i, ", a[i]);
}
}

printf("\n");
}
