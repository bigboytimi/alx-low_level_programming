#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 *
 * @size: The size of the array/hash table
 *
 * Return: If an error occurs - NULL
 * Otherwise - a pointer to the new hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	/* allocate some memory for a one empty hashtable */
	hash_table_t *ht = malloc(sizeof(hash_table_t));

	unsigned long int i;

	/* if malloc does not allocate memory, return NULL */
	if (ht == NULL)
		return (NULL);
	/* assign a fixed size to the created hashtable */
	ht->size = size;
	/**
	 * create memory space for the hashtable that would contain each
	 * node according to the assigned size
	*/
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);
	/* Initilaize every element of the hashtable to NULL */
	for (i = 0; i < size; i++)
		ht->array[i] = NULL;

	return (ht);
}

