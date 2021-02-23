#include "holberton.h"

/**
 * _strchr - Entry point
 * @s: destination parameter
 * @c: source parameter
 *
 * Return: a pointer to the resulting string dest
 *
 */

char *_strchr(char *s, char c)
{
	int i;
	char *str = s;

	i = 0;
	for (i = 0 ; str[i] != '\0' ; i++)
	{
		if (str[i] == c)
			return (s + i);
	}
	return (0);
}
