#include "hash_tables.h"

/**
* hash_table_get - retrieves a value from hash table
* @ht: pointer to hash table
* @key: the key string
*
* Description: retrieves a value from hash table
* Return: returns value if key exist else NULL
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	index = key_index((const unsigned char *) key, ht->size);
	node = ht->array[index];
	while (node)
	{
		if (strcmp(key, node->key) == 0)
			return (node->value);
		node = node->next;
	}

	return (NULL);
}
