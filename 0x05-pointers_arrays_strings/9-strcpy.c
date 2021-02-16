#include "holberton.h"

/**
 * _strcpy - check the code for Holberton School students.
 * @dest: destination
 * @src: source
 *
 * Return: dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
