#include <stdio.h>
/**
*main - task 9
*Return: 0
*/


int main(void)
{
int i, mul3, mul5;
for (i = 1 ; i <= 100 ; i++)
{
mul3 = i % 3;
mul5 = i % 5;
if (mul3 == 0 && mul5 == 0)
{
printf("%s", "FizzBuzz");
}
else if (mul3 == 0)
{
printf("%s", "Fizz");
}
else if (mul5 == 0)
{
printf("%s", "Buzz");
}
else
{
printf("%i", i);
}
if (i == 100)
{
break;
}
printf(" ");
}
printf("\n");
return (0);
}
