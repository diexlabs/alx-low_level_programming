#include "hash_tables.h"

/**
* hash_table_print - prints all the items of a hash table
* @ht: pointer to a hash table
*
* Description: prints out the items of a hash table in order
* Return: void
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *node;
	int comma = 0;

	if (!ht)
		return;

	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		node = ht->array[index];
		while (node)
		{
			if (comma)
				printf(", ");
			printf("'%s': ", node->key);
			printf("'%s'", node->value);
			node = node->next;
			comma = 1;
		}
	}
	printf("}\n");
}
