#include "hash_tables.h"

/**
 * hash_table_get - retrieve a value associated with a key
 * @key: key whose value is being retrieved
 *
 * Return: value of the key or NULL if key could not be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index = key_index((const unsigned char *) key, ht->size);

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	if (index >= ht->size)
		return (NULL);

	node = ht->array[index];

	while (node && strcmp(node->key, key) != 0)
		node = node->next;

	return ((node == NULL) ? NULL : node->value);
}
