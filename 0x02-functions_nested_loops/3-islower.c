#include "holberton.h"

/**
 * _islower - checks for lowercase character
 * @c: parameter c checks if character is lowercase
 *
 * Description: checks if parameter (int c) is a lowercase character
 *
 * Return: Always 0.
 */

int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
		return (1);
	else
		return (0);
}
