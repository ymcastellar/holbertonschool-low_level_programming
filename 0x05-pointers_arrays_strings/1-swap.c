#include "holberton.h"

/**
*swap_int - task 1
*@a: a is a parameter int
*@b: b is a parameter int
*Return: void
*/

void swap_int(int *a, int *b)
{
int n;
n = *a;
*a = *b;
*b = n;
}
