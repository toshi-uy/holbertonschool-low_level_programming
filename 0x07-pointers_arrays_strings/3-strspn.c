#include "holberton.h"

/**
 * _strspn - Entry point
 * @s: destination parameter
 * @accept: source parameter
 *
 * Return: a pointer to the resulting string dest
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	char *p = s;
	char *p2 = accept;
	int i, j;

	i = 0;
	while(*(p + i))
	{
		j = 0;
		while(*(p2 + j))
		{
			if(*(p + i) == *(p2 + j))
			{
				break;
			}
			j++;
		}
		if(!*(p2 + j))
		{
			return (i);
		}
		i++;
	}
	return (i);
}
