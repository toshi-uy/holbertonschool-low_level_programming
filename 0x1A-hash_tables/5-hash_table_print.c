#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 * @ht: pointer to hash table.
 *
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned long int i;
	int flag = 0;

	/* checking if there is no hash table */
	if (!ht)
		return;
	/* printing the formating */
	printf("{");
	/* looping through the array */
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			/* in each index of the array set the pointer to the head */
			tmp = ht->array[i];
			/* loop thought the linked list */
			while (tmp)
			{
				if (!tmp->key)
					continue;
				/* printing ', ' on each value after the first one */
				if (flag == 1)
					printf(", ");
				/* print the key followed by the value */
				printf("'%s': '%s'", tmp->key, tmp->value);
				/* moving one node */
				tmp = tmp->next;
			}
			flag = 1;
		}
	}
	/* print the end of the format and new line */
	printf("}\n");
}
