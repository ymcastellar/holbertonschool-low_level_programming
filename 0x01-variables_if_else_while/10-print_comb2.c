#include <stdio.h>
/**
* main - print comb2
* Return: 0
*/

int main(void)
{
int n1, n2;

for (n1 = 48; n1 < 58; n1++)
{
for (n2 = 48; n2 < 58; n2++)
{
putchar(n1);
putchar(n2);
if (n1 == 57 && n2 == 57)
{
break;
}
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
