#include "holberton.h"

/**
 * main - program that copies the content of a file to another file
 * @argc: destination parameter
 * @argv: parameter
 *
 * Return: Creates the new file with the content of the old one or exit.
 */

int main(int argc, char **argv)
{
	char buffer[1024];
	int file_from, file_to, cls, cls1;
	int count = 1, count2 = 0;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((count = read(file_from, buffer, sizeof(buffer))) > 0)
	{
		count2 = write(file_to, buffer, count);
		if (count != count2)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	cls = close(file_from);
	cls1 = close(file_to);
	if (cls == -1 || cls1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", cls);
		exit(100);
	}
	return (0);
}
