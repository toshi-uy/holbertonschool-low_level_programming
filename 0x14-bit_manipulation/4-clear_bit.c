#include "holberton.h"

/**
 * clear_bit - function that sets the value of a bit to 1 at a given index
 * @n: pointer to int
 * @index: position to change.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = (1 << index);

	if (index > 63)
		return (-1);
	*n = (*n & ~mask) | (0 << index);
	return (1);
}
