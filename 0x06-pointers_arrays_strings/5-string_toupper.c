#include "holberton.h"

/**
 * string_toupper - concatenates two strings
 *
 * Return: a pointer to the resulting string dest
 *
 */

char *string_toupper(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		if (s[c] >= 'a' && s[c] <= 'z')
		{
			s[c] = s[c] - 32;
		}
		c++;
	}
	return (s);
}
