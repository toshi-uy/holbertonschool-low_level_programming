#include "search_algos.h"

/**
 * interpolation_search - function that searches for a value in an array
 * of integers using the interpolation search algorithm
 * @array: array to search in
 * @size: size of the arrayay
 * @value: value to search for
 *
 * Return: the first index where value is located, or -1 if it fails
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, pos;

	while (low <= high)
	{
		if (array[low] == array[high])
		{
			if (array[low] == value)
				return (low);
			else
				return (-1);
		}
		pos = low +
(((double)(high - low) / (array[high] - array[low])) * (value - array[low]));
		if (size < pos)
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			break;
		}
		else
			printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (value == array[pos])
		{
			return (pos);
		}
		else if (value < array[pos])
			high = pos - 1;
		else
			low = pos + 1;
	}
	return (-1);
}
