#include "holberton.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination parameter
 * @src: source parameter
 * @n: n number parameter
 *
 * Return: a pointer to the resulting string dest
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n && (dest[i] = src[j]))
	{
		i++;
		j++;
	}
	if (j < n)
	{
		dest[i] = src[j];
	}
	return (dest);
}
