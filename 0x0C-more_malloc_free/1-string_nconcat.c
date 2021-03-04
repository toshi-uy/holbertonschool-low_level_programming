#include "holberton.h"
/**
 * _strlen - counts strings
 * @s: parameter s
 *
 * Description: counts string characters
 *
 * Return: Count
 */

unsigned int _strlen(char *s)
{
	int count = 0;

	if (s == NULL)
		return (0);
	while (*(s + count))
	{
		count++;
	}
	return (count);
}

/**
 * string_nconcat - Entry point
 * @s1: parameter
 * @s2: parameter
 * @n: parameter
 *
 * Return: a pointer to the array.
 *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i = 0, j = 0;

	p = malloc((_strlen(s1) + _strlen(s2) + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (i = 0 ; i < _strlen(s1) ; i++)
		p[i] = s1[i];
	if (n > _strlen(s2) + 1)
		n = _strlen(s2) + 1;
	for (j = 0 ; j < n ; j++)
	{
		p[i + j] = s2[j];
	}
	p[i + j] = '\0';
	return (p);
}
