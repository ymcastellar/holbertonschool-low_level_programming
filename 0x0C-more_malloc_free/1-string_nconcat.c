#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenate two strings
 * @s1: string parameter
 * @s2: string parameter
 * @n: number parameter
 * Return: 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, j;
char *ptr;


if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

for (i = 0; s1[i] != '\0'; i++)
;

for (j = 0; s2[j] != '\0'; j++)
;

if (n >= j)
n = j;

ptr = malloc(1 + (i + n) * sizeof(*ptr));

if (ptr == NULL)
return (NULL);

for (i = 0; s1[i] != '\0'; i++)
{
ptr[i] = s1[i];
}

for (j = 0; j < n; j++, i++)
{
ptr[i] = s2[j];
}

ptr[i] = '\0';

return (ptr);
}
