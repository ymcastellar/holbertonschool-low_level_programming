#include "holberton.h"
/**
*more_numbers - task 5
*Return: void
*/

void more_numbers(void)
{
int n, i;
for (i = 0; i <:x 10 ; i++)
{
for (n = 0; n <= 14 ; n++)
{
if (n > 9)
{
_putchar(n / 10 + '0');
}
_putchar(n % 10 + '0');
}
_putchar('\n');
}
}
