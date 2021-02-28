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
	int i;

	for (i = 0 ; i < argc ; i++)
		printf("%s\n", argv[i]);
	return (0);
}
