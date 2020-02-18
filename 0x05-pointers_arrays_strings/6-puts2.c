#include "holberton.h"

/**
*puts2 - print every character
*@str: string parameter
*Return: void
*/

void puts2(char *str)
{
int cont;
cont = 0;
while (*str != '\0')
{
if((cont % 2) == 0)
{
_putchar(*str);
}
str++;
cont++;
}
_putchar('\n');
}
