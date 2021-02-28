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

int main(int argc, char **argv)
{
	int count, count1, sum = 0;
	char *p;

	if (argc < 2)
	{
		printf("0\n");
	}
	for (count = 1 ; count < argc ; count++)
	{
		p = argv[count];
		for (count1 = 0 ; p[count1] !=0 ; count1++)
			if (isdigit(p[count1]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		sum += atoi(argv[count]);
	}
	printf("%d\n", sum);
	return (0);
}
