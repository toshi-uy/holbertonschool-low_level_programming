#include "search_algos.h"
#include <math.h>

/**
 * jump_search - function that searches for a value in an array of integers
 * using the Binary search algorithm
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
	printf("%lu\n", jump);

	while (j < size - 1)
	{
		printf("Value checked array[%lu] = [%d]\n", j, array[j]);
		if (array[j] == value)
			printf("Value found between indexes [%lu] = [%lu]\n", j, (j + jump));
			printf("Value checked array[%lu] = [%d]\n", j, array[j]);
			return j;
		if (array[j] != value && array[i] < value)
			j += jump;
		else if (array[j] != value && array[i] >= value)
		{
			printf("Value found between indexes [%lu] = [%lu]\n", j, (j + jump));
			for (i = j; i <= j + jump; i++)
			{
				printf("Value checked array[%lu] = [%d]\n", i, array[i]);
				if (array[i] == value)
					return i;
			}
		}
	}
	return (-1);
}
