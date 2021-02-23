#include "holberton.h"
/**
 *_memset - Entry point
 *@s: parameter s.
 *@b: parameter s.
 *@n: parameter s.
 *Description: function that fills memory with a constant byte.
 *
 *Return: pointer to the memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
	{
		*p++ = b;
	}
	return (s);
}
