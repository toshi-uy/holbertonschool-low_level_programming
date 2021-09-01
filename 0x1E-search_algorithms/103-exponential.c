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
	size_t i = 1;

	if (!array)
		return (-1);
	printf("Value checked array[%d] = [%d]\n", 0, array[0]);
	if (array[0] == value)
		return (0);
	while (i < size && array[i] <= value)
        	i = i * 2;
	return (binary_search(array, i / 2, value));
}
