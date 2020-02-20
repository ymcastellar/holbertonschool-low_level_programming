#include "holberton.h"

/**
*_strncat - concatenates two strings
*@dest: parameter
*@src: parameter
*Return: destination
*/

char *_strcat(char *dest, char *src)
{

int x, y, i;

x = 0;
y = 0;

while (dest[y++])
{
x++;
}

for (i = 0 ; i <= x ; i++)
{
dest[x + i] =  src[i];
}

return (dest);
}
