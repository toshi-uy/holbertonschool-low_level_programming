#include "hash_tables.h"

/**
 * shash_table_create - function that creates an shash table
 * @size: size of hash table
 *
 * Return: a pointer to the newly created hash table or NULL if fails.
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *hashtable = NULL;
	unsigned int i;

	if (size < 1)
		return (NULL);
	hashtable = malloc(sizeof(shash_table_t));
	if (hashtable == NULL)
		return (NULL);

	hashtable->size = size;
	hashtable->array = malloc(sizeof(hashtable->array) * size);
	if (hashtable->array == NULL)
	{
		free(hashtable);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		hashtable->array[i] = NULL;
	return (hashtable);
}

/**
 * shash_table_set - function that adds an element to the shash table.
 * @value: pointer to value
 * @key: pointer to key
 * @ht: pointer to hash table.
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new_node, *tmp;

	/* checking if the key, the node or the value are null */
	if (!key || !ht || *key == '\0' || !value)
		return (0);
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
			if (tmp->sprev == NULL)
				tmp->snext = NULL;
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

char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);
