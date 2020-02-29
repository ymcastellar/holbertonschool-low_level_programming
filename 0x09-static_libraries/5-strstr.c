#include "holberton.h"
#include <stdio.h>
/**
*_strstr - print a substring
*@haystack:parameter
*@needle: parameter
*Return: substring
*/

char *_strstr(char *haystack, char *needle)
{

register char *a, *b;

b = needle;

if (*b == 0)
{
return (haystack);
}
for ( ; *haystack != 0; haystack++)
{
if (*haystack != *b)
{
continue;
}

a = haystack;
while (1)
{
if (*b == 0)
{
return (haystack);
}
if (*a++ != *b++)
{
break;
}
}
b = needle;
}

return (NULL);

}
