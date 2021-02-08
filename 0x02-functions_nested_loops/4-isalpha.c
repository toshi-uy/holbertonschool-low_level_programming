#include "holberton.h"

/**
 * _isalpha - checks for alpha character
 * @c: parameter c checks if character is lowercase
 *
 * Description: checks if parameter (int c) is a lowercase character
 *
 * Return: Always 0.
 */

int _isalpha(int c)
{
	if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'))
		return (1);
	else
		return (0);
}
