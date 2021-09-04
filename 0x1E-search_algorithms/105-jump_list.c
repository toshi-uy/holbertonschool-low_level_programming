#include "search_algos.h"
#include <math.h>

/**
 * *jump_search - function that searches for a value in an array of integers
 * using the Jump search algorithm
 * @array: array to search in
 * @size: size of the array
 * @value: value to search for
 *
 * Return: the first index where value is located, or -1 if it fails
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
			printf("Value checked array[%lu] = [%d]\n", j + jump, jumped->n);
			j += jump;
			aux = jumped;
		}
		else
			break;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", j, (j + jump));
	while (j < size)
	{
		printf("Value checked array[%lu] = [%d]\n", j, aux->n);
		if (aux->n == value)
			return (aux);
		j++;
		aux = aux->next;
	}
	return (NULL);
}
