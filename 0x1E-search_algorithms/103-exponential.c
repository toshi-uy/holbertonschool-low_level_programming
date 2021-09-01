#include "search_algos.h"

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
	size_t i = 0;

	if (!array)
		return (-1);
	printf("Value checked array[%lu] = [%d]\n", i, array[i]);
	if (array[0] == value)
		return (0);
	i++;
	while (i < size && array[i] <= value)
        	i = i * 2;
	return (binary_search_rec(array, i / 2, minimum(i, size - 1), value));
}

/**
 * binary_search_rec - function that searches for a value in an array of integers
 * using the Binary search algorithm
 * @array: array to search in
 * @min: min of array
 * @max: max of array
 * @value: value to search for
 *
 * Return: the first index where value is located, or -1 if it fails
 */

int binary_search_rec(int *array, size_t min, size_t max, int value)
{
	size_t mid = 0;

	if (max >= min)
	{
		mid = min + (max - 1) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] > value)
			return (binary_search_rec(array, min, (mid - 1), value));
	        return (binary_search_rec(array, mid + 1, max, value));
	}
	return(-1);
}

/**
 * minimum - minimum of two values
 * @first: first value to check
 * @second: second value to check
 * Return: the minimum value
 */

size_t minimum(size_t first, size_t second)
{
	if (second < first)
		return (second);
	return (first);
}