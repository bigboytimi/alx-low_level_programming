#include "hash_tables.h"

/**
 * key_index - returns the index of a key
 *
 * @key: key to obtain its index
 *
 * @size: size of the hash table
 *
 * Return: Index of a key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *key++))
	{
		hash = ((hash << 5) + hash) + c /* hash * 33 + c */
	}
	return (hash % size);
}
