#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key
 * @value: pointer to value
 * @key: pointer to key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *tmp;

	/* checking if the key, the node or the value are null */
	if (!key || !ht || *key = '\0' || !value)
		return (0);
	/* getting the index of the key */
	index = key_index((const unsigned char *)key, ht->size);
	/* creating pointer to head of the array */
	tmp = ht->array[index];
	/* looping in the array */
	while(tmp)
	{
		/* checking if the key matches the key in the node */
		if (strcmp(key, tmp->key) == 0)
		{
			/* if true free the value and assign it to the value given */
			free(tmp->value);
			tmp->value = strdup(value);
			return (1);
		}
		tmp = tmp->next;
	}
	/* if no key was found we are creating a new node */
	new_node = malloc(sizeof(hash_node_t));
	/* checking if it's allocated */
	if (!new_node)
		return (0);
	/* assiging values to new node */
	new_node->value = strdup(value);
	new_node->key = strdup(key);
	/* setting new node before array in index */
	new_node->next = ht->array[index];
	/* restoring the head */
	ht->array[index] = new_node;
	return (1);
}
