#include "holberton.h"

/**
*_strncpy - copy strings
*@dest: parameter
*@src: parameter
*@n: parameter
*Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{

int x, y, i;

x = 0;
y = 0;

while (dest[y++])
{
x++;
}

if(n > x)
{
n = x;
}

for (i = 0; i < n ; i++)
{
dest[i] = src[i];
}

return (dest);

}
