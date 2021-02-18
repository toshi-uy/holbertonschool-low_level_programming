#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Main functiono
 *
 * Description: cracks password
 *
 * Return: Success
 */

int main(void)
{
	int pos_pw, random_pos, sum_cond, filling;
	char carac_posib[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char pw[58];

	srand(time(NULL));
	pos_pw = sum_cond = filling = 0;
	while ((2650) > sum_cond)
	{
		random_pos = rand() % 62;
		pw[pos_pw] = carac_posib[random_pos];
		sum_cond = sum_cond + carac_posib[random_pos];
		pos_pw++;
	}
	pw[pos_pw] = 2772 - sum_cond;
	pos_pw++;
	pw[pos_pw] = '\0';
	printf("%s", pw);
	return (0);
}
