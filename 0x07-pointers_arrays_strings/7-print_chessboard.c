#include "holberton.h"

/**
 * print_chessboard - Entry point
 * @a: destination parameter
 *
 * Return: a pointer to the resulting string dest and 0
 *
 */

void print_chessboard(char (*a)[8])
{
	int i, j;
	char impr;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++);
		{
			impr = a[i][j];
			_putchar (impr);
		}
		_putchar(10);
	}
}
