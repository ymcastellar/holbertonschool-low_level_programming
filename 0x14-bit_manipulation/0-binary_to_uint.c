#include "holberton.h"

/**
 *binary_to_uint - convert from binary to a unsigned int
 *@b: pointing to a string
 *Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int count = 0;
	unsigned int dec = 0;

	if (b == NULL)
		return (0);

	while (b[count])
	{
		dec = dec << 1;
		if (b[count] < '0' || b[count] > '1')
			return (0);
		else if (b[count] == '1')
			dec = dec | 1;
		count++;
	}

	return (dec);
}
