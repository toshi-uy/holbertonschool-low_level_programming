#include "holberton.h"
/**
 * _strlen - counts strings
 * @s: parameter s
 *
 * Description: counts string characters
 * Return: count.
 */

int _strlen(char *s)
{
	int count = 0;

	while (*(s + count))
	{
		count++;
	}
	return (count);
}

/**
 * puts_half - half
 * @str: parameter str
 * Description: checks if parameter (int c) is digit
 *
 */
void puts_half(char *str)
{
	int start, end;

	end = _strlen(str);
	start = end / 2;

	if (end % 2)
		start++;
	while (start < end)
	{
		_putchar(*(str + start));
		start++;
	}
	_putchar(10);
}
