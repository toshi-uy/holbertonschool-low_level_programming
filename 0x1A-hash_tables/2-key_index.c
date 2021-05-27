#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key
 * @size: size of hash table
 * @key: pointer to key
 *
 * Return: the index at which the key/value pair should be stored
 * in the array of the hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int i = 0;
	unsigned long int value;

	while (value < ULONG_MAX && i < strlen(size))
	{
		value = hash_djb2(value);
		value += key[i];
		i++;
	}
	return (value % size);
}
