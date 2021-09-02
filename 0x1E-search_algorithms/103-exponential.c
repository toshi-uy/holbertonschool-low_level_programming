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
	if (array[0] == value)
		return (0);
	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        	i = i * 2;
	}
	return (binary_search_2(array, size - i, i, value));
}

/**
 * binary_search_2 - function that searches for a value in an array of integers
 * using the Binary search algorithm
 * @array: array to search in
 * @size: size of the array
 * @pos: position to start
 * @value: value to search for
 *
 * Return: the first index where value is located, or -1 if it fails
 */

int binary_search_2(int *array, size_t size, size_t pos, int value)
{
	size_t high, mid, low;

	if (!array)
		return (-1);
	low = 0;
	high = size - 1;
	mid = (low + high) / 2;

	while (low <= high)
	{
		printf("Searching in array: ");
		for (pos = low; pos < high; pos++)
			printf("%d, ", array[pos]);
		printf("%d\n", array[high]);
		if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid - 1;
		else
			return (value);
		mid = (low + high) / 2;
	}
	return (-1);
}
