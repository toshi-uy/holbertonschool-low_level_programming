#include "holberton.h"

/**
 * _abs - checks for absolute value of an integer
 * @x: parameter c checks if character is lowercase
 *
 * Description: checks if parameter (int c) is a lowercase character
 *
 * Return: Always 0.
 */

int _abs(int x)
{
	if (x < 0)
		return (-x);
	else
		return (x);
}
