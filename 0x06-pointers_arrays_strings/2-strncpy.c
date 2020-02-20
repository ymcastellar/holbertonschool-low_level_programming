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

for (i = 0; i < n ; i++)
{
dest[i] = src[i];
}
if (src[i] == '\0')
{ 
for ( ; i < n; i++)
{
dest[i] = '\0';
break;
}
}

return (dest);

}
