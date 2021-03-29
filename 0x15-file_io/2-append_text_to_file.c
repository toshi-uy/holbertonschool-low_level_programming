#include "holberton.h"

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

	if (!filename)
		return (-1);
	fd = open(filename, O_APPEND | O_RDWR);
	if (fd == -1)
		return (-1);
	while (*text_content)
	{
		if (write(fd, text_content, 1) == -1)
			return (-1);
		text_content++;
	}
	close(fd);
	return (1);
}
