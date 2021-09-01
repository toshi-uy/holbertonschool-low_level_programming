#include "search_algos.h"
#include <math.h>

/**
 * exponential_search - function that searches for a value in an array of integers
 * using the Exponential search algorithm
 * @array: array to search in
 * @size: size of the array
 * @value: value to search for
 *
 * Return: the first index where value is located, or -1 if it fails
 */

int exponential_search(int *array, size_t size, int value)
{
	int high, mid, low, i = 0;

	if (!array)
		return (-1);
	printf("Value checked array[%lu] = [%d]\n", i, array[i]);
	if (array[0] == value)
		return (0);
	i++;
	while (i < size && array[i] <= value)
        	i = i*2;
	return (binarySearch(array, i / 2, calcmin(i, size - 1), value));
}

/**
 * binary_search - function that searches for a value in an array of integers
 * using the Binary search algorithm
 * @array: array to search in
 * @min: min of array
 * @max: max of array
 * @value: value to search for
 *
 * Return: the first index where value is located, or -1 if it fails
 */

int binary_search(int *array, size_t min, size_t max, int value)
{
	size_t mid = 0, i;

	if (max >= min)
	{
		mid = min + (max - 1) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] > value)
			return (binary_search(array, min, (mid - 1), value));
	        return (binary_search(array, mid + 1, max, value));
	}
	return(-1);
}
