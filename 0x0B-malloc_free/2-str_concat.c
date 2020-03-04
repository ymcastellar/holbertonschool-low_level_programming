#include "holberton.h"

/**
 * str_concat - concatenate two strings
 * @s1: string
 * @s2: string
 * Return: 0
 */

char *str_concat(char *s1, char *s2)
{
int i, j, x, y;
char *s3;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

for (i = 0; s1[i] != '\0'; i++)
;
for (j = 0; s2[j] != '\0'; j++)
;

s3 = (char *)malloc(1 + sizeof(char) * (i + j));

if (s3 == NULL)
return (NULL);
for (x = 0; s1[x] != '\0'; x++)
{
s3[x] = s1[x];
}
for (y = 0; s2[y] != '\0'; y++)
{
s3[x + y] = s2[y];
}

s3[(x + y) + 1] = '\0';

return (s3);
}
