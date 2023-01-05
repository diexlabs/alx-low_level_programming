#include "hash_tables.h"

/**
* hash_table_create - creates a hash table
* @size: the size of the hash table array
*
* Description: a hash table for storing key pair values using
*	``djb2`` hash function
* Return: pointer to hash table
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int index;

	table = malloc(sizeof(*table));
	if (!table)
		return (NULL);

	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	for (index = 0; index < table->size; index++)
	{
		table->array[index] = NULL;
	}

	return (table);
}
