#include "holberton.h"

/**
 * _strlen - counts strings
 * @s: parameter s
 *
 * Description: counts string characters
 *
 * Return: Count
 */

int *array_range(int min, int max)
{
	int *p;
	int i, length = max - min + 1;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * length);
	for (i = 0 ; min <= max ; min++, i++)
		p[i] = min;
	return (p);
}
