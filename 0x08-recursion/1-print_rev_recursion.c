#include "holberton.h"

/**
 * _print_rev_recursion -  function that prints reverse string
 * @s: destination parameter
 *
 * Return: a pointer to the resulting string
 *
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
