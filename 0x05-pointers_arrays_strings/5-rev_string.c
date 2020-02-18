#include "holberton.h"

/**
*rev_string - reverses a string
*@s: string parameter
*Return: void
*/

void rev_string(char *s)
{

char temp;
int b, cont;

temp = s[0];
cont = 0;
b = 0;
while (s[cont] != '\0')
{
cont++;
}

for (b = 0; b <= cont/2; b++)
{
cont--;
temp = s[b];
s[b] = s[cont];
s[cont] = temp;
}

}
