#include <stdio.h>

/**
* main - alphabet
* Return: always 0
*/

int main(void)
{
int letter;

for (letter = 'a'; letter <= 'z'; letter++)
{
putchar(letter);
}
putchar('\n');
return (0);
}
