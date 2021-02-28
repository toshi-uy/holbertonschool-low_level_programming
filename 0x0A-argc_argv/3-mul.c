#include "holberton.h"

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
	int count, mul = 1;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (count = 1 ; count < argc ; count++)
	mul = mul * _atoi(argv[count]);
	printf("%d\n", mul);
	return (0);
}
