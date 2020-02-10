#include "holberton.h"

/**
*print_alphabet_x10 - 2-alphabet
*Return: void
*/


void print_alphabet_x10(void)
{
char i;

i = 0;

while (i <= 9)
{
char letter;
letter = 'a';
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
i++;
}
}
