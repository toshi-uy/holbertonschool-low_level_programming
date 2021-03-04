#include "holberton.h"

/**
 * _calloc - entry point
 * @nmemb: parameter
 * @size: parameter
 *
 * Description: counts string characters
 *
 * Return: Count
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0 ; i < (nmemb * size) ; i++)
		p[i] = 0;
	return (p);
}
