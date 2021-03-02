#include "holberton.h"
/**
 * create_array - Entry point
 * @size: parameter
 * @c: parameter
 *
 * Return: a pointer to the array.
 *
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	if (size == 0)
		return (NULL);
	p = malloc(sizeof(char) * size);
	if (p == NULL)
		return (NULL);
	for (i = 0 ; i < size ; i++)
		p[i] = c;
	return (p);
}
