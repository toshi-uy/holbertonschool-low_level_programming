#include "holberton.h"

/**
 * rot13 - encodes a string into rot13
 * @s: destination parameter
 *
 * Return: a pointer to the resulting string dest
 *
 */

char *rot13(char *s)
{
	int i = 0, j;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";


	while (s[i] != '\0')
	{
		for (j = 0 ; j < 52 ; j++)
			if (a[j] == s[i])
			{
				s[i] = b[j];
				j = 52;
			}
		i++;
	}
	return (s);
}
