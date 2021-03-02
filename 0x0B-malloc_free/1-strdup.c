#include "holberton.h"

/**
 * _strlen - counts strings
 * @s: parameter s
 *
 * Description: counts string characters
 *
 * Return: Count
 */

int _strlen(char *s)
{
	int count = 0;

	while (*(s + count))
	{
		count++;
	}
	return (count);
}

/**
 * _strdup - Entry point
 * @str: parameter
 *
 * Return: a pointer to a newly alloc space in memory, containing a copy of str
 *
 */

char *_strdup(char *str)
{
	int i;
	char *p;

	if (str == NULL)
		return (NULL);
	p = malloc(sizeof(char) * (_strlen(str) + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0 ; i < (_strlen(str) + 1) ; i++)
	{
		p[i] = str[i];
	}
	return (p);
}
