#include "holberton.h"
/**
*print_most_numbers - task 4
*Return: void
*/

void print_most_numbers(void)
{
int n;
n = 48;

while (n <= 57)
{
if (n != '2' && n != '4')
{
_putchar(n);
}
n++;
}
_putchar('\n');
}
