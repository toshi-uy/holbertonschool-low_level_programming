#include "holberton.h"

/**
 * _memcpy - Entry point
 * @dest: destination parameter
 * @src: source parameter
 * @n: n number parameter
 *
 * Return: a pointer to the resulting string dest
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *src_char = src;
	char *dest_char = dest;

	for (i = 0; i < n; i++)
		dest_char[i] = src_char[i];
	return (dest);
}
