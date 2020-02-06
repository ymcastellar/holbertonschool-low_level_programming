#include <stdio.h>
#include (stdlib.h)
#include (time.h)

/**
* main - principal funtion
* Return: always 0
*/

int main(void)
{
srand(time(0));
int n;
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n < 0)
{
printf("%d is negativ\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
return (0);
}
