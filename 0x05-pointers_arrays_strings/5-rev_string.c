#include "holberton.h"

/**
 * _strlen - counts strings
 * @s: parameter s
 *
 * Description: counts string characters
 *
 */
int _strlen(char *s)
{
        char count = 0;

        while (*s != '\0')
        {
                count++;
                s++;
        }
        return (count);
}

/**
 * rev_string - prints on reverse
 * @s: parameter s
 *
 * Description: prints strings on reverse
 *
 */
void rev_string(char *s)
{
        char *start = s;
        char *end = start + _strlen(s) - 1;
        char temp;

        if (s == 0)
        {
                return;
        }
        while (end > start)
        {
                temp = *start;
                *start = *end;
                *end = temp;
                ++start;
                --end;
        }
}
