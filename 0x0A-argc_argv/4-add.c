#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
*main - print multiplies two numbers
*@argc: argument count
*@argv: argument veector
*Return: always 0
*/

int main(int argc, char *argv[])
{

int count, sum, j;

sum = 0;

if (argc > 1)
{
for (count = 1; count < argc; count++)
{
for (j = 0; argv[count][j] != 0; j++)
{
if (!isdigit(argv[count][j]))
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[count]);
}
}
printf("%d\n", sum);
return (0);
}
