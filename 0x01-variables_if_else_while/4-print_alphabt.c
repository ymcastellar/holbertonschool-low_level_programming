#include <stdio.h>
/**
*main - 4 alphabet except q and e
* Return: always 0
*/

int main(void)
{
int letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter != 'q' && letter != 'e')
{
putchar(letter);
}
}
putchar('\n');
return (0);
}
