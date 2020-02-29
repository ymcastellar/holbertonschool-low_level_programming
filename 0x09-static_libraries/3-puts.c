#include "holberton.h"
/**
*_puts -  task 3
*@str: char parameter
*Return: string
*/
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}
