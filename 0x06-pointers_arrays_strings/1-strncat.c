#include "holberton.h"

/**
*_strncat - concatenates two strings
*@dest: parameter
*@src: parameter
*@n: parameter
*Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{

int x, y, i;

x = 0;
y = 0;

while (dest[y++])
{
x++;
}

for (i = 0 ; i < n && src[i] != '\0'; i++)
{
dest[x + i] =  src[i];
}

return (dest);
}

