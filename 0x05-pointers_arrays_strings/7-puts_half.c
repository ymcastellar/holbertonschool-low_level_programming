#include "holberton.h"

/**
*puts_half - print the second half
*@str: string parameter
*Return: void
*/

void puts_half(char *str)
{

int cont, n, i;

cont = 0;
i = 0;

while (str[i] != '\0')
{
cont++;
i++;
}

if ((cont % 2) == 0)
{
n = cont / 2;
}
else
{
n = (cont + 1) / 2;
}

while (n < cont)
{
_putchar(str[n]);
n++;
}
_putchar('\n');
}
