#include "search_algos.h"
#include <math.h>

/**
 * jump_search - function that searches for a value in an array of integers
 * using the Jump search algorithm
 * @array: array to search in
 * @size: size of the array
 * @value: value to search for
 *
 * Return: the first index where value is located, or -1 if it fails
 */

int jump_search(int *array, size_t size, int value)
{
	size_t jump, j = 0, i = 0;

	if (!array)
		return (-1);
	jump = sqrt(size);
	printf("Value checked array[%lu] = [%d]\n", j, array[j]);
	if (value < array[0])
	{
		return (-1);
	}
	while (j < size)
	{
		if (array[j] < value)
		{
			printf("Value checked array[%lu] = [%d]\n", j, array[j]);
			j += jump;
		}
		else
			break;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", j, (j + jump));
	for (i = j; i <= j + jump; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
