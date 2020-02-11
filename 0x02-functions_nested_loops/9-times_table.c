#include "holberton.h"
/**
 * times_table - check the code for Holberton School students.
 *
 * Return: void.
 */

void times_table(void)
{
int i, n, n1, n2, res;

i = 0;
n1 = 0;
n2 = 0;
while (i < 10)
{
n = 0;
res = 0;
while (n < 10)
{
res = (n *i);
n2 = res % 10;
n1 = (res - n2) / 10;
if (n1 == 0 && n > 0)
_putchar(' ');
else if (n > 0)
_putchar(n1 + '0');
_putchar(n2 + '0');
if (n == 9)
break;
_putchar(',');
_putchar(' ');
n++;
}
_putchar('\n');
i++;
}
}
