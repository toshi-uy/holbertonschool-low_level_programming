#include "holberton.h"

/**
 * _puts_recursion -  function that prints a string
 * @s: destination parameter
 *
 * Return: a pointer to the resulting string
 *
 */

void _puts_recursion(char *s)
{
	_putchar(*s);
	s++;
	if (*s == '\0')
	_putchar(10);
	if (*s != '\0')
		_puts_recursion(s);
}
