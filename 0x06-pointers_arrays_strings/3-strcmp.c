#include "holberton.h"
/**
*_strcmp - compare two srings
*@s1: parameter
*@s2: parameter
*Return: dest
*/

int _strcmp(char *s1, char *s2)
{

int cont1;

cont1 = 0;

while (s1[cont1])
{

if (s1[cont1] != s2[cont1])
{
return (s1[cont1] - s2[cont1]);
}
cont1++;
}

return (0);
}
