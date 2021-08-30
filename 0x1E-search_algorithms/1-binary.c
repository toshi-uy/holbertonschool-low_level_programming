#include "search_algos.h"

/**
 * binary_search - function that searches for a value in an array of integers
 * using the Binary search algorithm
 * @array: array to search in
 * @size: size of the array
 * @value: value to search for
 *
 * Return: the first index where value is located, or -1 if it fails
 */

int binary_search(int *array, size_t size, int value)
{
	int high, mid, low, i = 0;

	if (!array)
		return (-1);
	low = 0;
	high = size - 1;
	mid = (low + high) / 2;

	while (high >= low)
	{
		printf("Searching in array: ");
		for (i = low; i < high - 1; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[high]);
		if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] == value)
			return (value);
		else
			high = mid + 1;
		mid = (low + high) / 2;
	}
	return (-1);
}
