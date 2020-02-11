#include "holberton.h"

/**
*print_last_digit - get last digit
*@ld: parameter of last digit
*Return: last digit
*/

int print_last_digit(int ld)
{
int n;
n = (ld % 10);
if (n < 0)
{
n = -1 * n;
}
_putchar(n + '0');
return (n);
}
