#include <stdio.h>
#include <stdlib.h>

/**
*main - print multiplies two numbers
*@argc: argument count
*@argv: argument veector
*Return: always 0
*/

int main(int argc, char *argv[])
{
int count, mul;

mul = 1;

if (argc > 2)
{
for (count = 1; count < argc; count++)
{
mul *= atoi(argv[count]);
}
printf("%d\n", mul);
}
else
{
printf("Error\n");
return (1);
}

return (0);
}
