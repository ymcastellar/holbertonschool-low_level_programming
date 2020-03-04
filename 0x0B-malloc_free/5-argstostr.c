#include "holberton.h"
/**
 * argstostr - Concatenates all the arguments of your programs.
 * @ac: Arguments Counter.
 * @av: Arguments Parameters.
 *
 * Return: A pointer to a new string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
char *str, *begin;
int i, j, count;

if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
j = 0;
while (av[i][j] != '\0')
{
j++;
count++;
}
count++;
}
count++;
str = malloc(count * sizeof(char));
if (str == NULL)
return (NULL);
begin = str;
for (i = 0; i < ac; i++)
{
j = 0;
while (av[i][j] != '\0')
{
*str = av[i][j];
j++;
str++;
}
*str = '\n';
str++;
}
return (begin);
}
