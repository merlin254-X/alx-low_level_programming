#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * errorCheck - Checks file accessibility and handles related errors
 * @file_from: File descriptor for the source file
 * @file_to: File descriptor for the destination file
 * @argv: Array of command-line arguments
 */
void errorCheck(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - Entry point for the program
 * @argc: The number of arguments passed to the program
 * @argv: An array of strings containing the arguments
 * Return: 0 on success, non-zero on failure
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, err_close;
	ssize_t read_chars, write_chars;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	errorCheck(file_from, file_to, argv);

	read_chars = 1024;
	while (read_chars == 1024)
	{
		read_chars = read(file_from, buffer, 1024);
		if (read_chars == -1)
			errorCheck(-1, 0, argv);
		write_chars = write(file_to, buffer, read_chars);
		if (write_chars == -1)
			errorCheck(0, -1, argv);
	}

	err_close = close(file_from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	err_close = close(file_to);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
