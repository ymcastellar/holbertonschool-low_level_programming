#include "holberton.h"

/**
 *int binary_to_uint - convert from binary to a unsigned int
 *@b: pointing to a string
 *Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{

	if (*b)
	{
		unsigned int val;

		for (val = 0; *b; b++)
		{
			if (*b == '1')
				val = (val << 1) | 1;
			else if (*b == '0')
				val <<= 1;
			else
				return (0);
				break;
		}

		return (val);
	}

	return (0);
}
