#include "holberton.h"

/**
 * read_textfile - function that reads a text file and prints it to the SO
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print or 0 if fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = 0;
	ssize_t imp = 0;
	char *buff;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);
	imp = read(fd, buff, letters);
	if (imp == -1)
	{
		free(buff);
		return (0);
	}
	if (imp != -1)
	{
		write(STDOUT_FILENO, buff, letters);
		if (write(STDOUT_FILENO, buff, letters) == -1)
		{
			free(buff);
			return (0);
		}
	}
	free(buff);
	close(fd);
	return (imp);
}
