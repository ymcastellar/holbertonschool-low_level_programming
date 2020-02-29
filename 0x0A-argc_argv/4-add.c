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

int count, sum;

sum = 0;

if (argc >= 1)
{
for (count = 1; count < argc; count++)
{
if (!isdigit(atoi(argv[count])))
{
if (atoi(argv[count]) > 0)
{
sum += atoi(argv[count]);
}
}
else
{
printf("Error\n");
return (1);
}
}
printf("%d\n", sum);
}
else if (argc == 0)
{
printf("Error\n");
return (0);
}


return (0);
}
