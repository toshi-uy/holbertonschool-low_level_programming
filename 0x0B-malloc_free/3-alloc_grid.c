#include "holberton.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination parameter
 * @src: source parameter
 *
 * Return: a pointer to the resulting string dest
 *
 */

int **alloc_grid(int width, int height)
{
	int i;
	int **array;

	if (width <= 0 || height <= 0)
		return (NULL);
	array = malloc(width * sizeof(int *));
	if (array == NULL)
		return (NULL);
	for(i = 0; i < width; i++)
	{
		array[i] = malloc(height * sizeof(int));
	}
	return (array);
}
