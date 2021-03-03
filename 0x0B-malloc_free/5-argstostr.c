#include "holberton.h"

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: parameter s1
 * @av: parameter s2
 *
 * Description: function that concatenates two strings
 *
 * Return: point to a newly allocated space in memory
 */


char *argstostr(int ac, char **av)
{
	int i, j;
	int l = 0;
	int cont = 0;
	char *array;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			cont++;
		}
	}
	cont = cont + ac;
	array = (char  *)malloc(cont * sizeof(char) + 1);
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, l++)
		{
			array[l] = av[i][j];
		}
		array[l++] = '\n';
	}
	return (array);
}
