#include <stdlib.h>

/**
*create_array - create an array of char
*@size: parameter size
*@c: parameter char
*Return: string
*/

char *create_array(unsigned int size, char c)
{

unsigned int i;
char *s;

if (size == 0)
{
return (NULL);
}

s = malloc(sizeof(c) * size);

if (s == NULL)
{
return (NULL);
}

for (i = 0 ; i < size ; i++)
{
*(s + i) = c;
}

return (s);
}
