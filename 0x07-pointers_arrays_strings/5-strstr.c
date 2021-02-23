#include "holberton.h"

/**
 * _strstr - Entry point
 * @haystack: destination parameter
 * @needle: source parameter
 *
 * Return: a pointer to the resulting string dest and 0
 *
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;

	while (haystack[i])
	{
		while (needle[j] && haystack[i] == needle[0])
			if (haystack[i + j] == needle[j])
				j++;
			else
				break;
		if (needle[j])
		{
			i++;
			j = 0;
		}
		else
			return (haystack + i);
	}
	return (0);
}
