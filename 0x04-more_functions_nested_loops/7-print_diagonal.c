#include "holberton.h"
/**
 * print_diagonal - task 7
 *
 * @n: parameter
 *
 * Return: void
 */
void print_diagonal(int n)
{
int c, c1;

c = 0;
while (n > 0 && c < n)
{
c1 = 0;
while (c1 < c)
{
_putchar(' ');
c1++;
}
_putchar(92);
_putchar('\n');
c++;
}
_putchar('\n');
}
