#include "holberton.h"

/**
 * _strcmp - compares two strings
 * @s1: destination parameter
 * @s2: source parameter
 *
 * Return: a pointer to the resulting string dest
 *
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		++s1;
		++s2;
}
	return ((int)(char)(*s1) - (int)(char)(*s2));
}
