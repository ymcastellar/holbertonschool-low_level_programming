#include "holberton.h"
/**
*_strchr - locate character in a string
*@s: char parameter
*@c: char parameter
*Return: s
*/

char *_strchr(char *s, char c)
{


for ( ; s != '\0' ; s++)
{
if (*s == c)
{
return (s);
}
}

return (s);

}
