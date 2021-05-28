#include "hash_tables.h"

/**
 * hash_table_delete - hash_table_delete.
 * @ht: pointer to hash table.
 *
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp, *tmp_next;
	unsigned long int i;

	if (ht)
	{
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i])
			{
				tmp = ht->array[i];
				tmp_next = ht->array[i]->next;
				while (tmp_next)
				{
					free(tmp->key);
					free(tmp->value);
					free(tmp);
					tmp = tmp_next;
					tmp_next = tmp_next->next;
				}
				free(tmp->key);
				free(tmp->value);
				free(tmp);
			}
			free(ht->array);
		}
	}
}