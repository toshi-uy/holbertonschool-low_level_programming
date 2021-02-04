#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
/**
 *main - Entry point
 *
 *Description: Positive anything is better than negative nothing
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int x, y, z;

	z = '1';
	for (x = '0' ; x <= '9' ; x++)
	{
		for (y = z ; y <= '9' ; y++)
		{
			putchar(x);
			putchar(y);

			if ((x == '8') && (y == '9'))
			{
				putchar('\n');
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	z++;
	}
	return (0);
}
