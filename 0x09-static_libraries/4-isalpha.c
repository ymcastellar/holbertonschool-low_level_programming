#include "holberton.h"

/**
*_isalpha - 4-isalpha
*@c: parametrer
*Return: 1 for lowercase and uppcase, 0 for otherwise
*/

int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
else
{
return (0);
}
}
