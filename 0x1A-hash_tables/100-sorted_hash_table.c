#include "hash_tables.h"
/**
* shash_table_create - creates a sorted hash table
* @size: the size of the hash table array
*
* Return: pointer to the sorted hash table
*/
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table;
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
	table->shead = NULL;
	table->stail = NULL;
	return (table);
}

/**
* shash_table_set - sets a key value pair in sorted hash table
* @ht: A pointer to a hash table
* @key: char string as key
* @value: char string as value
*
* Description: adds a key in a sorted order. using a double linked list
* to preserve order
* Return: 1 if successful and 0 if not
*/
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *node, *next;

	if (!key || !ht)
		return (0);

	node = malloc(sizeof(*node));
	if (!node)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;
	node->snext = NULL;
	node->sprev = NULL;

	if (!(ht->array[index])) /** if this is the first item in this position */
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
	add_sorted(ht, node);
	return (1);
}

/**
* add_sorted - adds a node item to a double linked list in sorted manner
* @ht: pointer to the hash table
* @node: the node item to add
*
* Return: shead
*/
shash_node_t *add_sorted(shash_table_t *ht, shash_node_t *node)
{
	shash_node_t *temp;

	if (!ht || !node)
		return (NULL);

	temp = ht->shead;
	if (!temp)
	{
		ht->shead = node;
		ht->stail = node;
	}
	else
	{
		while (temp)
		{
			if (strcmp(node->key, temp->key) == -1)
			{
				node->snext = temp;
				node->sprev = temp->sprev;
				if (temp->sprev)
					temp->sprev->snext = node;
				else
					ht->shead = node;

				temp->sprev = node;
				return (node);
			}
			temp = temp->snext;
		}
		ht->stail->snext = node;
		node->sprev = ht->stail;
		ht->stail = node;
	}
	return (node);
}

/**
* shash_table_get - retrieves a value from the table given a key
* @ht: pointer to hash table
* @key: char string as key
*
* Return: value associated with key or NULL
*/
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *node;

	if (!key || !ht)
		return (NULL);
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


/**
* shash_table_print - prints a hash table in sorted format
* @ht: pointer to a hash table
*
* Return: void
*/
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *next;
	int comma = 0;

	if (!ht)
		return;

	next = ht->shead;

	printf("{");
	while (next)
	{
		if (comma)
			printf(", ");
		printf("'%s': ", next->key);
		printf("'%s'", next->value);
		next = next->snext;
		comma = 1;
	}
	printf("}\n");
}

/**
* shash_table_print - prints a hash table in reverse sorted format
* @ht: pointer to a hash table
*
* Return: void
*/
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *next;
	int comma = 0;

	if (!ht)
		return;

	next = ht->stail;

	printf("{");
	while (next)
	{
		if (comma)
			printf(", ");
		printf("'%s': ", next->key);
		printf("'%s'", next->value);
		next = next->sprev;
		comma = 1;
	}
	printf("}\n");
}

/**
* hash_table_delete - deletes a hash table and frees all memories used
* @ht: pointer to the hash table
*
* Return: void
*/
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int index;
	shash_node_t *node, *temp;

	if (!ht)
		return;

	for (index = 0; index < ht->size; index++)
	{
		node = ht->array[index];
		while (node)
		{
			temp = node->next;
			free(node->value);
			free(node->key);
			free(node);
			node = temp;
		}
	}

	free(ht->array);
	free(ht);

}
