#include "holberton.h"
#include <stdio.h>

/**
*_strchr - locate character in a string
*@s: char parameter
*@c: char parameter
*Return: s
*/

char *_strchr(char *s, char c)
{
for ( ; *s != '\0' ; s++)
{
if (*s == c)
{
return (s);
}
}

if (*s == c)
return (s);
else
return (NULL);

}

/**
*_strpbrk - searches a string for any of a set of bytes
*@s: char parameter
*@accept: char parameter
*Return: s
*/

char *_strpbrk(char *s, char *accept)
{

for (; *s; s++)
{
if (_strchr(accept, *s) != 0)
return ((char *)s);
}
return (0);

}
