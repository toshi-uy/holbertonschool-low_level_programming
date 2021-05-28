#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 * @ht: pointer to hash table.
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned long int i;

	/* checking if there is no hash table */
	if (!ht)
		return;
	/* printing the formating */
	printf("{");
	/* looping through the array */
	for (i = 0; i < ht->size; i++)
	{
		/* in each index of the array set the pointer to the head */
		tmp = ht->array[i];
		/* loop thought the linked list */
		while(tmp)
		{
			/* print the key followed by the value */
			printf("'%s': '%s'", tmp->key, tmp->value);
		}
	}
	/* print the end of the format and new line */
	printf("}\n");
}
