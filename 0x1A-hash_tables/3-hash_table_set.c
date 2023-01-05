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
	hash_node_t *node;
	char *value_dup, *key_dup;

	if (!key)
		return (0);

	node = malloc(sizeof(*node));
	value_dup = malloc(strlen(value) + 1);
	key_dup = malloc(strlen(key) + 1);

	if (!node || !value_dup || !key_dup)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	strcpy(key_dup, key);
	strcpy(value_dup, value);
	node->key = key_dup;
	node->value = value_dup;
	node->next = NULL;

	if (!(ht->array[index]))
	{
		ht->array[index] = node;
	}
	else
	{
		node->next = ht->array[index];
		ht->array[index] = node;
	}

	return (1);
}
