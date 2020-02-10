#include "holberton.h"
#include "3-main.c"

/**
*_islower - parametrer c
*@c: parametrer
*Return: 1 for lower case or 0 for otherwise
*/

int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
