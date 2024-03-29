#include "search_algos.h"
#include <math.h>

/**
 * linear_skip - function that searches for a value in a skiplist of integers
 * using the Jump search algorithm
 * @list: pointer to head of skiplist to search in
 * @value: value to search for
 *
 * Return: the first node where value is located, or NULL if it fails
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *aux = list;

	if (!list)
		return (NULL);
	if (value < list->n)
		return (NULL);
	while (aux)
	{
		if (aux->express->n < value)
		{
			printf("Value checked at index [%lu] = [%d]\n",
aux->express->index, aux->express->n);
			aux = aux->express;
		}
		else
		{
			printf("Value checked at index [%lu] = [%d]\n",
	aux->express->index, aux->express->n);
			break;
		}
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
aux->index, aux->express->index);
	while (aux)
	{
		printf("Value checked at index [%lu] = [%d]\n", aux->index, aux->n);
		if (aux->n == value)
			return (aux);
		if (aux->n > value)
			return (NULL);
		aux = aux->next;
	}
	return (NULL);
}

/**
 * min - finds the smallest
 * @first: size of first value
 * @second: size of first value
 *
 * Return: the first smallest value
 */
size_t min(size_t first, size_t second)
{
	if (first < second)
		return (first);
	return (second);
}
