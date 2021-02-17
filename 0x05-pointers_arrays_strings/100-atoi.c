#include "holberton.h"

/**
 * _atoi - convert a string to an integer
 * @s: parameter of pointer s
 *
 * Description: convert a string to an integer
 *
 * Return: num * sign
 */

int _atoi(char *s)
{
	int flag = 1;
	unsigned int num = 0;

	do {
		if (*s == '-')
			flag *= -1;

		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');

		else if (num > 0)
			break;
	} while (*s++);

	return (num * flag);
}
