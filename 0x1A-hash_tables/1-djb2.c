#include "hash_tables.h"

/**
* hash_djb2 - a hashing algorithm
* @str: the string to hash
*
* Description: a hashing algorithm for hash tables
* Return: hash value of key
*/

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
