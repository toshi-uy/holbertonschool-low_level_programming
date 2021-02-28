#include "holberton.h"
#include <stdio.h>
#include <ctype.h>


/**
 * main - Entry point
 * @argc: destination parameter
 * @argv: parameter
 *
 * Return: success
 *
 */

int main(int argc, char *argv[])
{
	int i = 0;
	int j = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);
	if (i < 0)
		printf("0\n");
	else
	{
		for (; i - 25 >= 0; i -= 25, j++)
		{
		}
		for (; i - 10 >= 0; i -= 10, j++)
		{
		}
		for (; i - 5 >= 0; i -= 5, j++)
		{
		}
		for (; i - 2 >= 0; i -= 2, j++)
		{
		}
		if (i == 1)
			j++;
		printf("%d\n", j);
	}
	return (0);
}
