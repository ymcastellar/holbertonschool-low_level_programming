#include "hash_tables.h"

/**
*hash_table_create - create a new hash table
*@size: size of array
*Return: pointer to new hast table or NULL
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_t = NULL;

	new_t = malloc(sizeof(hash_table_t));
	if (!new_t)
		return (NULL);

	new_t->size = size;
	new_t->array = malloc(sizeof(hash_node_t *) * size);
	if (!new_t->array)
	{
		free(new_t);
		return (NULL);
	}

	return (new_t);

}
