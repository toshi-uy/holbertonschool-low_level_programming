#include "search_algos.h"
#include <math.h>

/**
 * jump_list - function that searches for a value in a lsit of integers
 * using the Jump search algorithm
 * @list: pointer to head of list to search in
 * @size: size of the list
 * @value: value to search for
 *
 * Return: the first node where value is located, or NULL if it fails
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump, j = 0, i;
	listint_t *aux = list, *jumped;

	if (!list)
		return (NULL);
	jump = sqrt(size);
	if (value < list->n)
		return (NULL);
	while (aux && j + jump < size)
	{
		jumped = aux;
		for (i = 0; i < jump && jumped; i++)
			jumped = jumped->next;
		if (jumped->n < value)
		{
			printf("Value checked at index [%lu] = [%d]\n", j + jump, jumped->n);
			j += jump;
			aux = jumped;
		}
		else
		{
			printf("Value checked at index [%lu] = [%d]\n", j + jump, jumped->n);
			break;
		}
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
j, min(j + jump, size - 1));
	i = j;
	while (aux && i <= j + jump)
	{
		printf("Value checked at index [%lu] = [%d]\n", i, aux->n);
		if (aux->n == value)
			return (aux);
		i++;
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
