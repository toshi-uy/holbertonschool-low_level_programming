#include "holberton.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: destination parameter
 *
 * Return: a pointer to the resulting string
 *
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (_strlen_recursion(s + 1) + 1);
}

/**
 * isPalRec - returns the length of a string
 * @s: destination parameter
 * @i: destination parameter
 * @j: destination parameter
 *
 * Return: a pointer to the resulting string
 *
 */

int isPalRec(char *s, int i, int j)
{
	if (i == j)
		return (1);

	if (s[i] != s[j])
		return (0);
	if (i < j + 1)
		return isPalRec(s, i + 1, j - 1);

	return (1);
}

/**
 * is_palindrome - string is a palindrome
 * @s: destination parameter
 *
 * Return: returns 1 if a string is a palindrome and 0 if not
 *
 */

int is_palindrome(char *s)
{
	int n = _strlen_recursion(s);
	if (n == 0)
		return (1);
	return (isPalRec(s, 0, n - 1));
}
