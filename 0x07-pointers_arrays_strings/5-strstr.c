#include "holberton.h"

/**
 * _strstr - Entry point
 * @haystack: destination parameter
 * @needle: source parameter
 *
 * Return: a pointer to the resulting string dest
 *
 */

char *_strstr(char *haystack, char *needle)
{
	char *p1 = haystack;
	char *p2 = needle;
	int i = 0, j = 0, flag = 0, flag1 = 0;

	for (i = 0; p1[i] != '\0'; i++)
	{
		if (p1[i] == p2[j])
			flag = i;
		for (j = 0; p2[j] != '\0'; j++)
		{
			if (p1[i] != p2[j])
			{
				flag1 = 0;
				break;
			}
			if (p1[i] == p2[j])
			{
				flag1 = 1;
				i++;
			}
			if (flag1 == 1)
				return (haystack + flag);
		}
	}
	return ('\0');
}
