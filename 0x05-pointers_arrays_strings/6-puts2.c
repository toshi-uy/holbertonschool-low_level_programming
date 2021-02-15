#include "holberton.h"

/**
 * puts2 - checks for digits
 * @str: parameter str
 * Description: checks if parameter (int c) is digit
 *
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		if (*str % 2 == 0)
		_putchar(str);
		str++;
	}
	_putchar(10);
}
