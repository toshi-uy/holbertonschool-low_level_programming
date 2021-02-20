#include "holberton.h"

/**
 * leet - encodes a string into 1337
 * @s: destination parameter
 *
 * Return: a pointer to the resulting string dest
 *
 */

char *leet(char *s)
{
	int i = 0, j;
	char a[] = "aAeEoOtTlL";
	char b[] = "43071";


	while (s[i] != '\0')
	{
		for (j = 0 ; j < 10 ; j++)
			if (a[j] == s[i])
				s[i] = b[j / 2];
		i++;
	}
	return (s);
}
