#include "holberton.h"

/**
 * _isdigit - checks for digits
 * @c: parameter c
 *
 * Description: checks if parameter (int c) is digit
 *
 * Return: Always 0 or 1
 */

int _isdigit(int c)
{
	if (c <= '9' && c >= '0')
		return (1);
	else
		return (0);
}
