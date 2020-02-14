#include "holberton.h"

/**
*print_triangle - task 10
*@size: parameter
*Return: void
*/

void print_triangle(int size)
{
int c, c1, c2;
if (size < 1)
{
_putchar('\n');
return;
}
c = 0;
c2 = size - 1;
while (c < size)
{
c1 = 0;
while (c1 < size)
_putchar((c1++ < c2) ? ' ' : '#');
_putchar('\n');
c2--;

c++;
}

}
