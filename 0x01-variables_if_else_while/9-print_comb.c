#include <stdio.h>
/**
* main - print comb
* Return: 0
*/

int main(void)
{
int n1;
n1 = 48;
while (n1 < 58)
{
putchar(n1);
if (n1 == 57)
{
break;
}
putchar(',');
putchar(' ');
n1++;
}
putchar(10);
return (0);
}
