#include "holberton.h"

/**
 * _strlen - counts strings
 * @s: parameter s
 *
 * Description: counts string characters
 *
 * Return: Count
 */

unsigned int _strlen(const char *s)
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
 * read_textfile - function that reads a text file and prints it to the SO
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print or 0 if fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(_strlen(filename));
	if (buf == NULL)
		return (0);
	read(fd, buf, letters);
	write(STDIN_FILENO, buf, letters);
	if (STDIN_FILENO == -1)
		return (0);
	close(fd);

	return (_strlen(buf));
}
