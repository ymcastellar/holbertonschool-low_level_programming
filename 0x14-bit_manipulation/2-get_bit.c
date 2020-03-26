#include "holberton.h"

/**
 *get_bit - returns the value of a bit at a given index
 *@index: parameter given
 *@n: number parameter
 *Return:value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
		return (-1);
	return ((n & (1 << index)) != 0);
}
