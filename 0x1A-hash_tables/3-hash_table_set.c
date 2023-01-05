#include "hash_tables.h"

/**
* hash_table_set - add a key value pair to hash table
* @ht: the hash table
* @key: the key as string
* @value: the value as string
*
* Description: adds a key - value pair and handles collision
* Return: 1 if success else 0
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node, *next;

	if (!key || !ht)
		return (0);

	node = malloc(sizeof(*node));

	if (!node)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;

	if (!(ht->array[index]))
	{
		ht->array[index] = node;
	}
	else
	{
		next = ht->array[index];
		while (next)
		{
			if (strcmp(key, next->key) == 0)
			{
				next->value = node->value;
				return (1);
			}
			next = next->next;
		}
		node->next = ht->array[index];
		ht->array[index] = node;
	}

	return (1);
}
