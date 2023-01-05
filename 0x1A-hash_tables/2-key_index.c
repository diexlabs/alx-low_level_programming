#include "hash_tables.h"

/**
* key_index - returns the hash index
* @key: the key as a string
* @size: the size of th array
*
* Description: computes the index of a key using djb2 hash algorithm
* Return: index value of key
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	hash_value = hash_djb2(key);

	return (hash_value % size);
}
