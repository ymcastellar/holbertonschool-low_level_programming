#include "hash_tables.h"
/**
*hash_table_delete - prints a hash table
*@ht: hash table
*Return: void
*/

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *aux;
	unsigned long int i;
	hash_table_t *hasht = ht;

	if (ht == NULL)
		return;

	for (i = 0; i < hasht->size; i++)
	{
		node = hasht->array[i];
		if (node != NULL)
		{

			while (node != NULL)
			{
				aux = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = aux;
			}

		}
	}

	free(hasht->array);
	free(hasht);
}
