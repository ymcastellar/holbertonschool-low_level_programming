#include "3-calc.h"
/**
 * main - principal main
 * @argc: amount arguments
 * @argv: argument
 * Return: value
 **/

int main(int argc, char *argv[])
{

int ans;

int (*fun)(int, int);

if (argc != 4)
{
printf("Error\n"), exit(98);
}

fun = get_op_func(argv[2]);

if (!fun)
{
printf("Error\n"), exit(99);
}

ans = fun((atoi(argv[1])), (atoi(argv[3])));
printf("%d\n", ans);
return (0);
}
