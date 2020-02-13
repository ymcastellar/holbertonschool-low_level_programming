#include "holberton.h"

/**
*print_square - task 8 You are so much sunshine in every square inch
*@size: size of square
*Return: void
*/

void print_square(int size)
{
int c, c1;

c = 0;
while (size > 0 && c < size)
{
c1 = 0;
while (c1 < size)
{
_putchar(35);
c1++;
}
_putchar('\n');
c++;
}
if (size < 1)
{
_putchar('\n');
}
}
