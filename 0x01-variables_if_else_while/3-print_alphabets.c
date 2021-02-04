#include <stdlib.h>
#include <stdio.h>
/**
 *main - Entry point
 *
 *Description: Positive anything is better than negative nothing
 *
 *Return: Always 0 (Success)
 */
int main (void)
{
	char az;
	char AZ;

	for(az= 'a' ; az <= 'z' ; az++)
	{
		putchar(az);
	}
	for(AZ= 'A' ; AZ <= 'Z' ; AZ++)
	{
		putchar(AZ);
	}
	putchar('\n');
       	return(0);
}
