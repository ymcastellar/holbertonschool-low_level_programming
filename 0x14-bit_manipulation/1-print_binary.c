#include "holberton.h"

/**
 *print_binary - print a binary of a number
 *@n: parameter of a number
 *Return: binary number
 */

void print_binary(unsigned long int n)
{
	unsigned long int number = n;

	if (number == 0)
	{
		putchar('0');
		return;
	}
	if (number == 1)
	{
		putchar('1');
		return;
	}

	print_binary(number >> 1);

	putchar('0' + (number & 1));
}
