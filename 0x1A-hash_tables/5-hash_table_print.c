#include "hash_tables.h"
/**
*hash_table_print - prints a hash table
*@ht: hash table
*Return: void
*/

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;
	unsigned char flag = 0;

	if (ht == NULL)
		return;


	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		if (node != NULL)
		{

			while (node != NULL)
			{
				if (flag == 1)
					printf(", ");
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
			}
			flag = 1;
		}
	}
	printf("}\n");

}
