#include "hash_tables.h"
/**
*hash_table_set - adds an element to the hash table
*@ht: hash table
*@key: key
*@value: values associated to key
*Return: 1 if it succeeded, 0 otherwise
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int key_i;
	char *val_copy = NULL, *key_copy = NULL;
	hash_node_t *new_node = NULL;

	if (!ht || !key || !value)
		return (0);
	else if (strlen(key) == 0)
		return (0);

	val_copy = strdup(value);
	if (!val_copy)
		return (0);
	key_copy = strdup(key);
	if (!key_copy)
	{
		free(val_copy);
		return (0);
	}

	key_i = key_index((const unsigned char *)key, ht->size);

	if (ht->array[key_i] != NULL && strcmp(ht->array[key_i]->key, key) == 0)
	{
		ht->array[key_i]->value = val_copy;
		return (1);
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = key_copy;
	new_node->value = val_copy;
	new_node->next = ht->array[key_i];
	ht->array[key_i] = new_node;
	return (1);


}
