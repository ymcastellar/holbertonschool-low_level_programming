#include <stdio.h>
/**
*main - print all arguments
*@argc: argument count
*@argv: argument veector
*Return: always 0
*/

int main(int argc, char *argv[])
{
int count;

printf("%s\n", argv[0]);

if (argc > 1)
{
for (count = 1; count < argc; count++)
{
printf("%s\n", argv[count]);
}
}


return (0);
}
