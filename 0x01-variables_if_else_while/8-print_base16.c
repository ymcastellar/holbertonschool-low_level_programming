#include<stdio.h>

/**
* main -  hexadecimal
* Return: always is 0
*/

int main(void)
{
int n1, n2;
n1 = 49;
n2 = 65;
while (n1 < 58)
{
putchar(n1);
n1++;
}
while (n2 < 71)
{
putchar(n2);
n2++;
}
putchar('\n');
return (0);
}
