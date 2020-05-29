#include "hash_tables.h"

/**
*key_index - function that gives you the index of a key
*@key: key
*@size: size of array
*Return: the index at which the key/value
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_index;

	hash_index = hash_djb2(key) % size;
	return (hash_index);
}
