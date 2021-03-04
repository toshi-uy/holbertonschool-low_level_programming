#include "holberton.h"

/**
 * _atoi - convert a string to an integer
 * @s: parameter of pointer s
 *
 * Description: convert a string to an integer
 *
 * Return: num * sign
 */

int _atoi(char *s)
{
	int flag = 1;
	unsigned int num = 0;

	do {
		if (*s == '-')
			flag *= -1;

		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');

		else if (num > 0)
			break;
	} while (*s++);

	return (num * flag);
}

/**
 *main - multiplies two arguments
 *@argc: arg count
 *@argv: arg vector
 *
 *Return: Success.
 */

int main(int argc, char *argv[])
{
	unsigned long int num1, num2, mul;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = _atoi(argv[1]);
	if (num1 == 0 && *argv[1] != 48)
		printf("Error\n");
	num2 = _atoi(argv[2]);
	if (num2 == 0 && *argv[2] != 48)
		printf("Error\n");
	mul = num1 * num2;
	printf("%lu\n", mul);
	return (0);
}
