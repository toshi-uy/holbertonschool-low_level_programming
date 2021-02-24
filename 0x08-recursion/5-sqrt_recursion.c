#include "holberton.h"

/**
 * recursion - square root of a number
 * @x: destination parameter
 * @y: destination parameter
 *
 * Return: function that returns the natural square root of a number.
 *
 */

int recursion(int x, int y)
{
	if (y * y > x)
		return (-1);
	if (y * y == x)
		return (y);
	else
		return (recursion(x, y + 1));
}

/**
 * _sqrt_recursion - square root of a number
 * @n: destination parameter
 *
 * Return: function that returns the natural square root of a number.
 *
 */

int _sqrt_recursion(int n)
{
	return (recursion(n, 1));
}
