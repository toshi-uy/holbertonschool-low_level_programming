#include "search_algos.h"

/**
 * advanced_binary - function that searches for a value in an array of integers
 * using the Binary search algorithm
 * @array: array to search in
 * @size: size of the array
 * @value: value to search for
 *
 * Return: the first index where value is located, or -1 if it fails
 */

int advanced_binary(int *array, size_t size, int value)
{
	int high, low;

	if (!array)
		return (-1);
	low = 0;
	high = size - 1;
	return (advanced_binary_rec(array, low, high, value));
}

/**
 * advanced_binary_rec - function that searches for a value in an array
 * of integers using the Advanced Binary search algorithm
 * @array: array to search in
 * @low: min of the array
 * @high: max of the array
 * @value: value to search for
 *
 * Return: the first index where value is located, or -1 if it fails
 */

int advanced_binary_rec(int *array, int low, int high, int value)
{
	int mid, i = 0;

	if (high >= low)
	{
		printf("Searching in array: ");
		for (i = low; i < high; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[high]);
		mid = low + (high - low) / 2;

		if (array[mid] == value)
			return (mid);
		if (array[mid] > value)
			return (advanced_binary_rec(array, low, mid - 1, value));
		return (advanced_binary_rec(array, mid + 1, high, value));
	}
	return (-1);
}
