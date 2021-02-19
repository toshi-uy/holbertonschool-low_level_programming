#include "holberton.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination parameter
 * @src: source parameter
 *
 * Return: a pointer to the resulting string dest
 *
 */

char *_strcat(char *dest, char *src)
{
	char *ptr = dest + _strlen(dest);

	while  (*src != '\0')
		*ptr++ = *src++;
	*ptr = '\0';

	return (dest);
}

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
