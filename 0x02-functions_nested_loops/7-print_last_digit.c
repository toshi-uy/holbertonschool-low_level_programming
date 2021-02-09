#include "holberton.h"

/**
 * print_last_digit - checks for alpha character
 * @x: parameter c checks if character is lowercase
 *
 * Description: checks if parameter (int c) is a lowercase character
 *
 * Return: Always 0.
 */

int print_last_digit(int x)
{
        x = x % 10;

	if (x < 0)
	{
		_putchar('0' - x);
		return (-x);
	}
	else
	{
		_putchar('0' + x);
		return (x);
	}
}
