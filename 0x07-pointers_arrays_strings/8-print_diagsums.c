#include "holberton.h"

/**
 * _strstr - Entry point
 * @haystack: destination parameter
 * @needle: source parameter
 *
 * Return: a pointer to the resulting string dest and 0
 *
 */

void print_diagsums(int *a, int size)
{
	int i = 0, j = 0, x, y, DIAG1, DIAG2;

	for (y = 0 ; y < size ; y++)
	{
		DIAG1 = (y * size) + y;
		i += *(a + DIAG1);
	}
	for (x = 0 ; x < size ; x++)
	{
		DIAG2 = ((x * size) + (size - x - 1));
		j += *(a + DIAG2);
	}
	printf("%d, %d\n", i, j);
}
