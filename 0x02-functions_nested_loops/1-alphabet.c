#include "holberton.h"
/**
* print_alphabet - 1-alphabet
* Return: alwayss 0
*/

void print_alphabet(void)
{
int letter = 97;
while (letter <= 122)
{
_putchar(letter);
letter++;
}
_putchar('\n');
}
