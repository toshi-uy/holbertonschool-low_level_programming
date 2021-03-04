#include "holberton.h"
/**
 * malloc_checked - Entry point
 * @b: parameter
 *
 * Return: a pointer to the array.
 *
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
