#include "holberton.h"

/**
 * _puts - checks for digits
 * @str: parameter str
 * Description: checks if parameter (int c) is digit
 *
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar(10);
}
