#include "holberton.h"

/**
 * _strstr - Entry point
 * @haystack: destination parameter
 * @needle: source parameter
 *
 * Return: a pointer to the resulting string dest
 *
 */

char *_strstr(char *haystack, char *needle)
{
	char *p1 = haystack;
	char *p2 = needle;
	int b, i = 0, j = 0;

	while (*(p1 + i) != '\0')
	{
		if (*(p2 + j) == '\0')
			break;
		else if (*(p1 + i) == *(p2 + j))
		{
			i++;
			j++;
			b = 1;
		}
		else
		{
			i++;
			b = 0;
			j = 0;
		}
	}

	if (b == 0)
		return ('\0');
	else if (b == 1)
		return (p1 + i - j);
	if (p2 == '\0' || p1 == '\0')
		return ('\0');
	return (0);
}
