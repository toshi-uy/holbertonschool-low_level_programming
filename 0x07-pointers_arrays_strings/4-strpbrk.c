#include "holberton.h"

/**
 * _strpbrk - Entry point
 * @s: destination parameter
 * @accept: source parameter
 *
 * Return: a pointer to the resulting string dest
 *
 */

char *_strpbrk(char *s, char *accept)
{
	char c, *p;

	for (c = *s ; c != 0 ; s++, c = *s)
	{
		for (p = accept; *p != 0 ; p++)
		{
			if (c == *p)
			{
				return (s);
			}
		}
	}
	return (0);
}
