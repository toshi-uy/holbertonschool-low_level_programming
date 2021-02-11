#include "holberton.h"

/**
 * _isupper - checks for uppercase character.
 * @c: description for c.
 * Description: checks if parameter (int c) is a uppercase character
 *
 * Return: Always 1 if c is uppercase.
 */

int _isupper(int c)
{
	if ((c <= 'Z' && c >= 'A'))
		return (1);
	else
		return (0);
}
