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
