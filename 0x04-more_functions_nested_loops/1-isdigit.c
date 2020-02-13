#include "holberton.h"
/**
*_isdigit - task 1 is digit
*@c: parameter
*Return: 1 if is a digit, 0 dor otherwise
*/

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}
