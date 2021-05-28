#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table.
 * @key: pointer to key
 * @ht: pointer to hash table.
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *tmp;

	if (!key || !ht || *key == '\0')
		return (NULL);
}