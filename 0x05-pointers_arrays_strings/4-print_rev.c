#include "holberton.h"

/**
 * _strlen - counts strings
 * @s: parameter s
 *
 * Description: counts string characters
 *
 *  Return: Count.
 */
int _strlen(char *s)
{
	char count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}

/**
 * print_rev - prints on reverse
 * @s: parameter s
 *
 * Description: prints strings on reverse
 *
 */
void print_rev(char *s)
{
	int length, a;

	length = _strlen(s);
	a = *s;

	for (a = (length - 1) ; a >= 0 ; a--)
	{
		_putchar(*(s + a));
	}
	_putchar(10);
}
