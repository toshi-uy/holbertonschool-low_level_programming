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
 * str_concat - concatenates two strings
 * @s1: parameter s1
 * @s2: parameter s2
 *
 * Description: function that concatenates two strings
 *
 * Return: point to a newly allocated space in memory
 */

char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *p;

	p = malloc(sizeof(char) * (_strlen(s1) + _strlen(s2) + 1));
	if (p == NULL)
		return (NULL);
	if (s1 == '\0')
		*p = *s2;
	if (s2 == '\0')
		*p = *s1;
	for (i = 0; s1[i] != '\0'; i++)
	{
		p[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		p[i + j] = s2[j];
	}
	p[i + j] = '\0';
	return (p);
}
