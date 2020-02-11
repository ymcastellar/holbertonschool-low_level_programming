#include "holberton.h"

/**
 *jack_bauer - check the code for Holberton School students.
 *
 * Return: void.
 */

void jack_bauer(void)
{
int hour1, hour2, min1, min2;
hour1 = 0;
while (hour1 <= 2)
{
hour2 = 0;
while (hour2 <= 9)
{
if (hour2 > 3 && hour1 == 2)
break;
min1 = 0;
while (min1 <= 5)
{
min2 = 0;
while (min2 <= 9)
{
_putchar(hour1 + '0');
_putchar(hour2 + '0');
_putchar(':');
_putchar(min1 + '0');
_putchar(min2 + '0');
_putchar('\n');
min2++;
}
min1++;
}
hour2++;
}
hour1++;
}
}
