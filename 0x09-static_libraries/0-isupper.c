#include "holberton.h"
/**
*_isupper - checks for uppercase character
*@c: parameter
*Return: 1 for uppercase, 0 for otherwise
*/

int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
}
