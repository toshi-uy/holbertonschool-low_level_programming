#include "holberton.h"

/**
 * _strlen - counts strings
 * @s: parameter s
 *
 * Description: counts string characters
 *
 * Return: Count.
 */

int _strlen(char *s)
{
	char count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return(count);
}
