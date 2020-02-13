#include "holberton.h"
/**
*print_line - task 6
*@n:parameter
*Return: number of straight lines
*/

void print_line(int n)
{
int c;
c = 1;
while (c <= n)
{
_putchar('_');
c++;
}
_putchar('\n');
}
