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

	/* checking if the key or the node are null */
	if (!key || !ht || *key == '\0')
		return (NULL);
		/* getting the index of the key */
	index = key_index((const unsigned char *)key, ht->size);
	/* creating pointer to head of the array */
	tmp = ht->array[index];
	/* looping in the array */
	while (tmp)
	{
		/* checking if the key matches the key in the node */
		if (strcmp(key, tmp->key) == 0)
		{
			/* if true return the value */
			return (tmp->value);
		}
		tmp = tmp->next;
	}
	/* if no key was found return NULL */
	return (NULL);
}