#include "holberton.h"

/**
 * flip_bits - function to count number of bits and flip
 * @n: number to be flipped
 * @m: number to be flipped to
 * Return: number of bits required
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int index = 0;
	unsigned long int flp;

	flp = n ^ m;
	while (flp)
	{
		if ((flp & 1) == 1)
			index++;
		flp = flp >> 1;
	}
	return (index);
}
