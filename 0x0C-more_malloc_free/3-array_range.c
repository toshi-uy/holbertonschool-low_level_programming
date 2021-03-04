#include "holberton.h"

/**
 * array_range - Entry point
 * @min: parameter
 * @max: parameter
 *
 * Description: function that creates an array of integers
 *
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *p;
	int i, length = max - min + 1;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * length);
	if (p == NULL)
		return (NULL);
	for (i = 0 ; min <= max ; min++, i++)
		p[i] = min;
	return (p);
}
