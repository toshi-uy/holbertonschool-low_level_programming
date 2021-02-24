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
	int i = y * y;

	if (i < x)
	{
		return (recursion(x, y - 1));
	}
	if (i == x)
		return (x);
	else
		return (-1);
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
	return (recursion(n, 0));
}
