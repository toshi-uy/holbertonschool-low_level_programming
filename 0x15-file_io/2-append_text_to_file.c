#include "holberton.h"
/**
 * _strlen - counts strings
 * @s: parameter s
 *
 * Description: counts string characters
 *
 * Return: Count
 */

unsigned int _strlen(char *s)
{
	int count = 0;

	if (s == NULL)
		return (0);
	while (*(s + count))
	{
		count++;
	}
	return (count);
}

/**
 * append_text_to_file - append_text_to_file
 * @filename: file to create
 * @text_content: pointer to a text.
 *
 * Return: 1 if it works, -1 if anything fails.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t ret = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (!text_content)
		return (1);
	ret = write(fd, text_content, _strlen(text_content));
	if (ret == -1)
		return (-1);
	close(fd);
	return (1);
}
