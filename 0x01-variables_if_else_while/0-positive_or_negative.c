#include<stdio.h>
#include(time.h)

/**
* main - principal funtion
* Return: always 0
*/

int main(void)
{
srand(time(NULL));
int n;
n = rand();
if (n > 0)
{
printf("%d is positive", n);
}
else if (n < 0)
{
printf("%d is negativ", n);
}
else if (n == 0)
{
printf("%d is zero", n);
}
return (0);
}
