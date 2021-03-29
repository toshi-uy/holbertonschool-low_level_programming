#include "holberton.h"

/**
 * create_file - function that creates a file
 * @filename: file to create
 * @text_content: pointer to a text.
 *
 * Return: 1 if it works.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, ret;

	if (!filename || !text_content)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR, 0600);
	if (fd == -1)
		return (-1);
	while (*text_content)
	{
		ret = write(fd, text_content, 1);
			if (ret == -1)
				close(fd);
				return (-1);
		text_content++;
	}
	close(fd);
	return (1);
}
