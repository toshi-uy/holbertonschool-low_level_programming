B#include "holberton.h"

/**
 * print_sign - checks for signs
 * @n: parameter n checks if character +,-,0
 *
 * Description: checks if parameter (int n) is a +,-,0
 *
 * Return: Always 0.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
		if (n == 0)
		{
			_putchar('0');
			return (0);
		}
		else
		{
			_putchar('-');
			return (-1);
		}
}
