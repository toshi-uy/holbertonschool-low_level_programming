#include "search_algos.h"

/**
 * linear_search - function that searches for a value in an array of integers
 * using the Linear search algorithm
 * @array: array to search in
 * @size: size of the array
 * @value: value to search for
 *
 * Return: the first index where value is located, or -1 if it fails
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;
	int result = -1;

	if (!array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			result = i;
			break;
		}
	}
	return (result);
}
