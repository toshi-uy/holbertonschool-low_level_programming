#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * size: size of hash table
 *
 * Return: a pointer to the newly created hash table or NULL if fails.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashtable = NULL;
	unsigned int i;

	if (size < 1)
		return NULL;
	hashtable = malloc(sizeof(hash_table_t));
	if (hashtable == NULL)
		return NULL;

	hashtable->size = size;
	hashtable->array = malloc(sizeof(hash_node_t) * size);
	if (hashtable->array == NULL)
	{
		free(hashtable);
		return NULL;
	}
	for( i = 0; i < size; i++ )
		hashtable->array[i] = NULL;
	return hashtable;
}
