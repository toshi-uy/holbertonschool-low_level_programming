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

/**
 * shash_table_get - function that retrieves a value associated with a key.
 * @key: pointer to key
 * @ht: pointer to hash table.
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *tmp;

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

/**
 * shash_table_print - function that prints an shash table.
 * @ht: pointer to hash table.
 *
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *tmp;
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

/**
 * shash_table_print_rev - function that prints an shash table.
 * @ht: pointer to hash table.
 *
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tmp;
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

/**
 * shash_table_delete - shash_table_delete.
 * @ht: pointer to hash table.
 *
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *tmp, *tmp_next;
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
		}
		free(ht->array);
		free(ht);
	}
}
