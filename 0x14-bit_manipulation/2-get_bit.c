#include "holberton.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: number to check
 * @index: index, starting from 0 of the bit you want to get
 *
 * Return:  the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	char *a;
	int i = 0;
	unsigned int m, len = 0;

	a = malloc(33);
	if (a == NULL)
		return (-1);
	m = n;
	while (m > 0)
	{
		a[i] = m % 2;
		m = m / 2;
		i++;
		len++;
        }

	if (index <= len)
		return ((n >> index) & 1);
	if (index > len)
		return(-1);
	return (0);
}
