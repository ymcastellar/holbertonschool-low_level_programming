#include "hash_tables.h"
/**
*hash_table_get - adds an element to the hash table
*@ht: hash table
*@key: key to looking for
*@value: values associated to key
*Return: value, NULL or key
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int key_i;
	char *value;
	hash_node_t *temp;

	if (!ht || !key)
		return (0);
	else if (strlen(key) == 0)
		return (0);

	key_i = key_index((const unsigned char *)key, ht->size);
	temp = (ht->array)[key_i];

	if (temp != NULL)
	{
		while (temp != NULL)
		{
			if (strcmp(temp->key, key) == 0)
            {
                value = strdup(temp->value);
                return (value);
            }

            temp = temp->next;
        }
    }
	
    return (NULL);

}
