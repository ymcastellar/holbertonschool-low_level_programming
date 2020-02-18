#include "holberton.h"

/**
*print_rev - print reverwse string
*@s: parameter sring
*Return: void
*/

void print_rev(char *s)
{
int cont, cont1;

cont = 0;

while (*(s + cont) != '\0')
{
cont++;
}

cont1 = cont;

for (cont1-- ; cont1 >= 0 ; cont1--)
{
_putchar(*(s + cont1));
}
_putchar('\n');
}
