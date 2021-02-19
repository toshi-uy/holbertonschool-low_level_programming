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
	if (s1 > s2)
	{
		return (15);
	}
	else if (s1 < s2)
	{
		return (-15);
	}
	else
	{
		return (0);
	}
}
