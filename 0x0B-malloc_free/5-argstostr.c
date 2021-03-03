/**
 * _strlen - counts strings
 * @s: parameter s
 *
 * Description: counts string characters
 *
 * Return: Count
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
	char *p;
	int cont = 0, i = 0, j = 0, k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0 ; i < ac ; i++)
	{
		cont += _strlen(av[i]);
		cont++;
	}

	p = malloc(sizeof(char) * cont);
	if (p == NULL)
		return (NULL);
	for (i = 0 ; i < ac ; i++)
	{
		for (j = 0 ; av[i][j] != '\0' ; j++)
		{
			p[k] = av[i][j];
			k++;
		}
		p[k] = '\n';
		k++;
	}
	return (p);
}
