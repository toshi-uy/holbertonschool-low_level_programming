#include "holberton.h"

/**
 * reverse_array - Entry point
 * @a: destination parameter
 * @n: source parameter
 *
 * Return: a pointer to the resulting string dest
 *
 */

void reverse_array(int *a, int n)
{
	int temp;
	int start = 0;
	int end = n-1;

	while (start < end)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;
	}
}
