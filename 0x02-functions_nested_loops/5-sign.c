#include "holberton.h"

/**
 * _isalpha - checks for alpha character
 * @c: parameter c checks if character is lowercase
 *
 * Description: checks if parameter (int c) is a lowercase character
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
		if(n == 0)
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
