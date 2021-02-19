#include "holberton.h"

/**
 * SP_characters - swaps parameters
 * @s: parameter of pointer a
 * @i: parameter of pointer b
 *
 * Description: swaps two values
 *
 */

void SP_characters(char *s, int i)
{
	if (s[i] == ' ' || s[i] == 10 || s[i] == '\t' || s[i] == '.')
	{
		++i;
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}
	if (s[i] == ',' || s[i] == ':' || s[i] == '!' || s[i] == '?')
	{
		++i;
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}
	if (s[i] == '"' || s[i] == '(' || s[i] == ')' || s[i] == '{')
	{
		++i;
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}
	if (s[i] == '}')
	{
		++i;
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}
}

/**
 * cap_string - swaps parameters
 * @s: parameter of pointer a
 *
 * Description - Something
 * Return: pointer s
 *
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		if (i == 0)
		{
			if ((s[i] >= 'a' && s[i] <= 'z'))
				s[i] = s[i] - 32;
		}

		SP_characters(s, i);
	}
	return (s);
}
