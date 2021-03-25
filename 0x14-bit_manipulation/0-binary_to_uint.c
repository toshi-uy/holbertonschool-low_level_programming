#include "holberton.h"
unsigned int _strlen(char *s);

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars.
 *
 * Return: the converted number, or 0 if fails.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int k = 1, num = 0, len;
	int c;

	if (!b)
		return (0);
	len = _strlen(b);

	for (c = len - 1; c >= 0; c--)
	{
		if (b[c] != '0' && b[c] != '1')
			return (0);
		if (b[c] == '1')
		{
			num += k;
		}
		k *= 2;
	}
	return (num);
}
/**
 * _strlen - counts strings
 * @s: parameter s
 *
 * Description: counts string characters
 *
 * Return: Count
 */

unsigned int _strlen(char *s)
{
        int count = 0;

        if (s == NULL)
                return (0);
        while (*(s + count))
        {
                count++;
        }
        return (count);
}
