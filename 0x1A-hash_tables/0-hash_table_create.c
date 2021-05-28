#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * @size: size of hash table
 *
 * Return: a pointer to the newly created hash table or NULL if fails.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashtable = NULL;
	unsigned int i;

	/* if size is less than one no hashtable would be created */
	if (size < 1)
		return (NULL);
	/* alloc size for hash table and check if it's allocated */
	hashtable = malloc(sizeof(hash_table_t));
	if (hashtable == NULL)
		return (NULL);
	/* adding data to hashtable */
	hashtable->size = size;
	/* the size of the array would be the array * size of it */
	hashtable->array = malloc(sizeof(hashtable->array) * size);
	/* checking if it could be allocated */
	if (hashtable->array == NULL)
	{
		/* if not we will have to free the hashtable created */
		free(hashtable);
		return (NULL);
	}
	/* for each array in the hash table assign the pointer to NULL */
	for (i = 0; i < size; i++)
		hashtable->array[i] = NULL;
	/* return the created hash table */
	return (hashtable);
}
